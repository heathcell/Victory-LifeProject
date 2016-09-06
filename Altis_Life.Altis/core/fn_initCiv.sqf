#include "..\script_macros.hpp"
/*
    File: fn_initCiv.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Initializes the civilian.
*/
private "_spawnPos";
_altisArray = ["Land_i_Shop_01_V1_F","Land_i_Shop_01_V2_F","Land_i_Shop_01_V3_F","Land_i_Shop_02_V1_F","Land_i_Shop_02_V2_F","Land_i_Shop_02_V3_F"];
_tanoaArray = ["Land_House_Small_01_F"];
private _spawnBuildings = ALTIS_TANOA(_altisArray,_tanoaArray);

civ_spawn_1 = nearestObjects[getMarkerPos  "civ_spawn_1", _spawnBuildings,350];
civ_spawn_2 = nearestObjects[getMarkerPos  "civ_spawn_2", _spawnBuildings,350];
civ_spawn_3 = nearestObjects[getMarkerPos  "civ_spawn_3", _spawnBuildings,350];
civ_spawn_4 = nearestObjects[getMarkerPos  "civ_spawn_4", _spawnBuildings,350];

waitUntil {!(isNull (findDisplay 46))};

if ((getMarkerPos "respawn_civilian" distance life_position) < 300) then {
	life_is_position = false;
};

if (life_is_arrested) then {
	life_is_arrested = false;
	[player,true] spawn life_fnc_jail;
} else {
	if (life_is_alive && life_is_position) then {
		/* Spawn at our last position */
		player setVehiclePosition [life_position, [], 0, "CAN_COLLIDE"];
	} else {
		if (!life_is_alive) then {
			_handle = [] spawn life_fnc_civLoadout;
			waitUntil {scriptDone _handle};
			CASH = 0;
			[0] call SOCK_fnc_updatePartial;
			[] call life_fnc_hudUpdate;
		};
		[] call life_fnc_spawnMenu;
        waitUntil{!isNull (findDisplay 38500)}; //Wait for the spawn selection to be open.
        waitUntil{isNull (findDisplay 38500)}; //Wait for the spawn selection to be done.
	};
};
life_is_alive = true;
life_is_position = true;
player addRating 9999999;
