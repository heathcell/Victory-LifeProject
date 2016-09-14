#include "..\..\script_macros.hpp"
/*
	file: fn_robShops.sqf
	Author: MrKraken
	Edit: Eagleone
	Description:
	Executes the rob shop action!
*/
private ["_kassa","_ui","_progress","_pgText","_cP","_rip","_pos"];
params [
	["_shop",objNull,[objNull]],
	["_robber",objNull,[objNull]],
	"_action"
];

if (side _robber != civilian) exitWith { hint "You can not rob this Gas Station!" };
if (_robber distance _shop > 5) exitWith { hint "You need to be within 5m of the cashier to rob him!" };

_lack = random(100);
if (_lack <= 20) then {
	_kassa = random 10000;
} else {
	_kassa = 100000 + round(random 150000);
};

if (_rip) exitWith { hint "Robbery already in progress!" };
if (vehicle player != _robber) exitWith { hint "Get out of your vehicle!" };
if !(alive _robber) exitWith {};
if (currentWeapon _robber == "") exitWith { hint "HaHa, you do not threaten me! Get out of here you hobo!" };
if (_kassa == 0) exitWith { hint "There is no cash in the register!" };

_rip = true;
_shop removeAction _action;
_chance = random(100);
if (_chance >= 50) then {
	[1,format["ALARM! - Gas Station: %1 is being robbed!", _shop]] remoteExec ["life_fnc_broadcast",independent]; 
};

_cops = (independent countSide playableUnits);
if (_cops < (LIFE_SETTINGS(getNumber,"shop_cops"))) exitWith {
	[_vault,-1] remoteExec ["disableSerialization;",2]; 
	hint "There isnt enough Police to rob Gas Station!";
};
disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
_ui = uiNameSpace getVariable "life_progress";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["Robbery in Progress, stay close (10m) (1%1)...","%"];
_progress progressSetPosition 0.01;
_cP = 0.0001;

if (_rip) then {
	while {true} do
	{
		sleep 3;
		_cP = _cP + 0.01;
		_progress progressSetPosition _cP;
		_pgText ctrlSetText format["Robbery in Progress, stay close (10m) (%1%2)...",round(_cP * 100),"%"];
		_Pos = position player; // by ehno: get player pos
		_marker = createMarker ["Marker200", _Pos]; //by ehno: Place a Maker on the map
		"Marker200" setMarkerColor "ColorRed";
		"Marker200" setMarkerText "!ATTENTION! robbery !ATTENTION!";
		"Marker200" setMarkerType "mil_warning";
		if (_cP >= 1) exitWith {};
		if (_robber distance _shop > 10.5) exitWith { };
		if !(alive _robber) exitWith {};
	};
	if !(alive _robber) exitWith { _rip = false; };
	if (_robber distance _shop > 10.5) exitWith {
		deleteMarker "Marker200"; 
		hint "You need to stay within 10m to Rob registry! - Now the registry is locked."; 
		5 cutText ["","PLAIN"];
		_rip = false; 
	};
	5 cutText ["","PLAIN"];

	titleText[format["You have stolen $%1, now get away before the cops arrive!",[_kassa] call life_fnc_numberText],"PLAIN"];
	deleteMarker "Marker200"; // by ehno delete maker
	CASH = CASH + _kassa;

	_rip = false;
	life_use_atm = false;
	sleep (30 + random(180));
	life_use_atm = true;
	if!(alive _robber) exitWith {};
	[player getVariable ["userid",name player],name _robber,"211"] remoteExec ["life_fnc_wantedAdd",2];
};
sleep 300;
_action = _shop addAction["Rob the Gas Station",life_fnc_robShop];