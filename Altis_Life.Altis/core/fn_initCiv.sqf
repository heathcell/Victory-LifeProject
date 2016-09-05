#include "..\script_macros.hpp"
/*
    File: fn_initCiv.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Initializes the civilian.
*/
private["_spawnPos"];
civ_spawn_1 = nearestObjects[getMarkerPos  "civ_spawn_1", ["Land_Shop_Town_03_F","Land_Supermarket_01_F","Land_Shop_City_01_F","Land_Shop_City_02_F","Land_FuleStation_01_Shop_F"],500];
civ_spawn_2 = nearestObjects[getMarkerPos  "civ_spawn_2", ["Land_Shop_Town_03_F","Land_Supermarket_01_F","Land_Shop_City_02_F","Land_FuleStation_01_Shop_F"],500];
civ_spawn_3 = nearestObjects[getMarkerPos  "civ_spawn_3", ["Land_Shop_Town_03_F","Land_Supermarket_01_F","Land_Shop_City_02_F","Land_FuleStation_01_Shop_F"],500];
civ_spawn_4 = nearestObjects[getMarkerPos  "civ_spawn_4", ["Land_Shop_Town_03_F","Land_Supermarket_01_F","Land_Shop_City_02_F","Land_FuleStation_01_Shop_F"],500];
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
