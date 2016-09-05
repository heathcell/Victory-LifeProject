#include "\life_server\script_macros.hpp"
/*
    File: fn_queryRequest.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Handles the incoming request and sends an asynchronous query
    request to the database.

    Return:
    ARRAY - If array has 0 elements it should be handled as an error in client-side files.
    STRING - The request had invalid handles or an unknown error and is logged to the RPT.
*/
private ["_uid","_side","_query","_queryResult","_tickTime","_tmp"];
params [
  ["_uid","",[""]],
  ["_side",sideUnknown,[civilian]],
  ["_ownerID",objNull,[objNull]]
];

if (isNull _ownerID) exitWith {};
_ownerID = owner _ownerID;

_query = switch (_side) do {
    // Independent - 11 entries returned
    case independent: {format ["SELECT playerid, userid, pass, name, cash, bankacc, xp, adminlevel, donorlevel, cop_licenses, coplevel, cop_gear, cop_stats, cop_position FROM players WHERE name='%1'",_uid];};
    // Civilian - 11 entries returned
    case civilian: {format ["SELECT playerid, userid, pass, name, cash, bankacc, xp, adminlevel, donorlevel, civ_licenses, arrested, civ_gear, civ_stats, civ_position, civ_alive FROM players WHERE name='%1'",_uid];};
    // East - 10 entries returned
    case east: {format ["SELECT playerid, userid, pass, name, cash, bankacc, xp, adminlevel, donorlevel, med_licenses, mediclevel, med_gear, med_stats, med_position FROM players WHERE name='%1'",_uid];};
	// West - 10 entries returned
    case west: {format ["SELECT playerid, userid, pass, name, cash, bankacc, xp, adminlevel, donorlevel, nato_licenses, natolevel, nato_gear, nato_stats, nato_position FROM players WHERE name='%1'",_uid];};
};

_tickTime = diag_tickTime;
_queryResult = [_query,2] call DB_fnc_asyncCall;

if (EXTDB_SETTING(getNumber,"DebugMode") isEqualTo 1) then {
    diag_log "------------- Client Query Request -------------";
    diag_log format ["QUERY: %1",_query];
    diag_log format ["Time to complete: %1 (in seconds)",(diag_tickTime - _tickTime)];
    diag_log format ["Result: %1",_queryResult];
    diag_log "------------------------------------------------";
};

if (_queryResult isEqualType "") exitWith {
    [] remoteExecCall ["SOCK_fnc_insertPlayerInfo",_ownerID];
};

if (count _queryResult isEqualTo 0) exitWith {
    [] remoteExecCall ["SOCK_fnc_insertPlayerInfo",_ownerID];
};

//Blah conversion thing from a2net->extdb
_tmp = _queryResult select 1;
_queryResult set[1,[_tmp] call DB_fnc_mresString];
_tmp = _queryResult select 2;
_queryResult set[2,[_tmp] call DB_fnc_mresString];
_tmp = _queryResult select 4;
_queryResult set[4,[_tmp] call DB_fnc_numberSafe];
_tmp = _queryResult select 5;
_queryResult set[5,[_tmp] call DB_fnc_numberSafe];
_tmp = _queryResult select 6;
_queryResult set[6,[_tmp] call DB_fnc_numberSafe];

//Parse licenses (Always index 9)
_new = [(_queryResult select 9)] call DB_fnc_mresToArray;
if (_new isEqualType "") then {_new = call compile format ["%1", _new];};
_queryResult set[9,_new];

//Convert tinyint to boolean
_old = _queryResult select 9;
for "_i" from 0 to (count _old)-1 do {
    _data = _old select _i;
    _old set[_i,[_data select 0, ([_data select 1,1] call DB_fnc_bool)]];
};

_queryResult set[9,_old];

//gear
_new = [(_queryResult select 11)] call DB_fnc_mresToArray;
if (_new isEqualType "") then {_new = call compile format ["%1", _new];};
_queryResult set[11,_new];

//Parse Stats
_new = [(_queryResult select 12)] call DB_fnc_mresToArray;
if (_new isEqualType "") then {_new = call compile format ["%1", _new];};
_queryResult set[12,_new];

//Position
_new = [(_queryResult select 13)] call DB_fnc_mresToArray;
if (_new isEqualType "") then {_new = call compile format ["%1", _new];};
_queryResult set[13,_new];

if (_side isEqualTo civilian) then {
	_queryResult set[10,([_queryResult select 10,1] call DB_fnc_bool)];
	//civ alive
	_queryResult set[14,([_queryResult select 14,1] call DB_fnc_bool)];
	
	_pid = [_queryResult select 1] call DB_fnc_mresString;
	_houseData = _pid spawn TON_fnc_fetchPlayerHouses;
	waitUntil {scriptDone _houseData};
	_queryResult set [15,(missionNamespace getVariable [format ["houses_%1",_pid],[]])];
	_gangData = _pid spawn TON_fnc_queryPlayerGang;
	waitUntil{scriptDone _gangData};
	_queryResult set [16,(missionNamespace getVariable [format ["gang_%1",_pid],[]])];
};

_keyArr = missionNamespace getVariable [format ["%1_KEYS_%2",_uid,_side],[]];
_queryResult set[17,_keyArr];

_queryResult remoteExec ["SOCK_fnc_requestReceived",_ownerID];
