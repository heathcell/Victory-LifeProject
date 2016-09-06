#include "..\script_macros.hpp"
/*
    File: fn_initCop.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Cop Initialization file.
*/
private "_end";
player addRating 9999999;
waitUntil {!(isNull (findDisplay 46))};
_end = false;

if ((FETCH_CONST(life_natolevel) isEqualTo 0) && (FETCH_CONST(life_adminlevel) isEqualTo 0)) then {
	["NotWhitelisted",false,true] call BIS_fnc_endMission;
	sleep 35;
};

switch (true) do {
	case license_nato_army: {player setVariable["force",1,true];};
	case license_nato_navy: {player setVariable["force",2,true];};
	case license_nato_airforce: {player setVariable["force",3,true];};
	case license_nato_marinecorps: {player setVariable["force",4,true];};
};

player setVariable ["rank",(FETCH_CONST(life_natolevel)),true];
[] call life_fnc_spawnMenu;
waitUntil{!isNull (findDisplay 38500)}; //Wait for the spawn selection to be open.
waitUntil{isNull (findDisplay 38500)}; //Wait for the spawn selection to be done.
