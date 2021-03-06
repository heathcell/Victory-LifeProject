#include "..\script_macros.hpp"
/*
    File: init.sqf
    Author:

    Description:
    Master client initialization file
*/

private ["_handle","_timeStamp","_server_isReady","_extDB_notLoaded"];
life_firstSpawn = true;
life_session_completed = false;
life_login_completed = false;
0 cutText[localize "STR_Init_ClientSetup","BLACK FADED"];
0 cutFadeOut 9999999;
_timeStamp = diag_tickTime;
diag_log "----------------------------------------------------------------------------------------------------";
diag_log "--------------------------------- Starting Altis Life Client Init ----------------------------------";
diag_log "------------------------------------------ Version 4.5 -------------------------------------------";
diag_log "----------------------------------------------------------------------------------------------------";
//Check Addons
_life_nativechecker = 0;
for "_i" from 0 to (count (configFile / "CfgPatches") - 1) do 
{
	_cfg_entry = (configFile / "CfgPatches") select _i;

	if (isClass _cfg_entry) then
	{
		_life_nativechecker = _life_nativechecker + 1;
	};
};
diag_log "---------------------------";
diag_log format ["CfgPatches = %1  ", _life_nativechecker];
diag_log "----------------------------";
//if(!(_life_nativechecker == 1523)) exitWith { ["noAddons",false,true] call BIS_fnc_endMission; };
waitUntil {!isNull player && player == player}; //Wait till the player is ready
[] call compile preprocessFileLineNumbers "core\clientValidator.sqf";
enableSentences false;

//Setup initial client core functions
diag_log "::Life Client:: Initialization Variables";
[] call compile preprocessFileLineNumbers "core\configuration.sqf";

diag_log "::Life Client:: Variables initialized";
diag_log "::Life Client:: Setting up Eventhandlers";
[] call life_fnc_setupEVH;

diag_log "::Life Client:: Eventhandlers completed";
diag_log "::Life Client:: Setting up user actions";
[] call life_fnc_setupActions;

diag_log "::Life Client:: User actions completed";
diag_log "::Life Client:: Waiting for server functions to transfer..";
waitUntil {(!isNil "TON_fnc_clientGangLeader")};

diag_log "::Life Client:: Received server functions.";
0 cutText [localize "STR_Init_ServerReady","BLACK FADED"];
0 cutFadeOut 99999999;

diag_log "::Life Client:: Waiting for the server to be ready..";
waitUntil{!isNil "life_HC_isActive"};
if (life_HC_isActive) then {
    waitUntil{!isNil "life_HC_server_isReady" && !isNil "life_HC_server_extDB_notLoaded"};
    _server_isReady = life_HC_server_isReady;
    _extDB_notLoaded = life_HC_server_extDB_notLoaded;
} else {
    waitUntil{!isNil "life_server_isReady" && !isNil "life_server_extDB_notLoaded"};
    _server_isReady = life_server_isReady;
    _extDB_notLoaded = life_server_extDB_notLoaded;
};

waitUntil{_server_isReady};
if (_extDB_notLoaded isEqualType []) exitWith {
    diag_log (_extDB_notLoaded select 1);
    999999 cutText [localize "STR_Init_ExtdbFail","BLACK FADED"];
    999999 cutFadeOut 99999999;
};

[] call SOCK_fnc_dataQuery;
waitUntil {life_session_completed};
0 cutText[localize "STR_Init_ClientFinish","BLACK FADED"];
0 cutFadeOut 9999999;

//diag_log "::Life Client:: Group Base Execution";
[] spawn life_fnc_escInterupt;

//login system
[] call life_fnc_login;
waitUntil {life_login_completed};

//Set bank amount for new players
switch (playerSide) do {
    case independent: {
        life_paycheck = LIFE_SETTINGS(getNumber,"paycheck_cop");
    };
    case civilian: {
        life_paycheck = LIFE_SETTINGS(getNumber,"paycheck_civ");
    };
    case east: {
        life_paycheck = LIFE_SETTINGS(getNumber,"paycheck_med");
    };
    case west: {
        life_paycheck = LIFE_SETTINGS(getNumber,"paycheck_nato");
    };
};

switch (playerSide) do {
    case independent: {
        _handle = [] spawn life_fnc_initCop;
        waitUntil {scriptDone _handle};
    };
    case civilian: {
        //Initialize Civilian Settings
        _handle = [] spawn life_fnc_initCiv;
        waitUntil {scriptDone _handle};
    };
    case east: {
        //Initialize Medics and blah
        _handle = [] spawn life_fnc_initMedic;
        waitUntil {scriptDone _handle};
    };
	case west: {
		//Initialize Nato and blah
        _handle = [] spawn life_fnc_initNato;
        waitUntil {scriptDone _handle};
    };
	case sideLogic: {
		//Initialize Zeus and blah
        _handle = [] spawn life_fnc_initZeus;
        waitUntil {scriptDone _handle};
    };
};

player setVariable ["restrained",false,true];
player setVariable ["Escorting",false,true];
player setVariable ["transporting",false,true];
player setVariable ["playerSurrender",false,true];

diag_log "Past Settings Init";
[] execFSM "core\fsm\client.fsm";

diag_log "Executing client.fsm";
waitUntil {!(isNull (findDisplay 46))};

diag_log "Display 46 Found";
(findDisplay 46) displayAddEventHandler ["KeyDown", "_this call life_fnc_keyHandler"];
player addRating 99999999;

[player,life_settings_enableSidechannel,playerSide] remoteExecCall ["TON_fnc_manageSC",RSERV];
0 cutText ["","BLACK IN"];
[] call life_fnc_hudSetup;

/* Set up frame-by-frame handlers */
LIFE_ID_PlayerTags = ["LIFE_PlayerTags","onEachFrame","life_fnc_playerTags"] call BIS_fnc_addStackedEventHandler;
LIFE_ID_RevealObjects = ["LIFE_RevealObjects","onEachFrame","life_fnc_revealObjects"] call BIS_fnc_addStackedEventHandler;

player setVariable ["steam64ID",getPlayerUID player];
player setVariable ["realname",profileName,true];

life_fnc_moveIn = compileFinal
"
    life_disable_getIn = false;
    player moveInCargo (_this select 0);
    life_disable_getOut = true;
";

life_fnc_RequestClientId = player;
publicVariableServer "life_fnc_RequestClientId"; //Variable OwnerID for HeadlessClient

[] spawn life_fnc_survival;

[] spawn {
    for "_i" from 0 to 1 step 0 do {
        waitUntil{(!isNull (findDisplay 49)) && (!isNull (findDisplay 602))}; // Check if Inventory and ESC dialogs are open
        (findDisplay 49) closeDisplay 2; // Close ESC dialog
        (findDisplay 602) closeDisplay 2; // Close Inventory dialog
    };
};

CONSTVAR(life_paycheck); //Make the paycheck static.
if (LIFE_SETTINGS(getNumber,"enable_fatigue") isEqualTo 0) then {player enableFatigue false;};

if (LIFE_SETTINGS(getNumber,"pump_service") isEqualTo 1) then {
    [] execVM "core\fn_setupStationService.sqf";
};

if (life_HC_isActive) then {
    [USERID,player getVariable ["realname",name player]] remoteExec ["HC_fnc_wantedProfUpdate",HC_Life];
} else {
    [USERID,player getVariable ["realname",name player]] remoteExec ["life_fnc_wantedProfUpdate",RSERV];
};

life_hideoutBuildings = [];
{
	private _building = nearestBuilding getMarkerPos _x;
	0 = life_hideoutBuildings pushBack _building;
} count ["gang_area_1","gang_area_2","gang_area_3"];

//vAH
waitUntil {vAH_loaded};
private["_total","_uid","_toDel"];
_total = 0;
_toDel = [];
_uid = player getVariable ["userid",name player];
{if ((_x select 5 == _uid) && (_x select 7 == 2)) then {_total = _total + (_x select 4);_toDel pushBack (_x select 0)};}forEach all_ah_items;

if (_total > 0) then {
	{[1,_x] remoteExecCall ["TON_fnc_vAH_update",RSERV];}forEach _toDel;
	[0,format ["While you were offline you sold $%1 worth of items at Fat Tony's Shop",[_total]call life_fnc_numberText]] remoteExecCall ["life_fnc_broadcast",player];
	BANK = BANK + _total;
	[1] call SOCK_fnc_updatePartial;
};

diag_log "----------------------------------------------------------------------------------------------------";
diag_log format ["               End of Altis Life Client Init :: Total Execution Time %1 seconds ",(diag_tickTime) - _timeStamp];
diag_log "----------------------------------------------------------------------------------------------------";
