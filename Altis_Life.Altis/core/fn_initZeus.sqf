#include "..\script_macros.hpp"
/*
    File: fn_initZeus.sqf
    Author: John "Paratus" VanderZwet
	Description:    Zeus Initialization file.
*/
player addRating 9999999;
waitUntil {!(isNull (findDisplay 46))};

[] spawn life_fnc_copMarkers;

if(FETCH_CONST(life_adminlevel) isEqualTo 0) exitWith {
    endMission "Loser";
};