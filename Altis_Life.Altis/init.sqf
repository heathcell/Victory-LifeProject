/*
    File: init.sqf
    Author: 
    
    Description:
    
*/
StartProgress = false;

[] execVM "briefing.sqf"; //Load Briefing
[] execVM "KRON_Strings.sqf";

[] spawn {
    while {true} do {
        {
            if (agent _x isKindOf "Snake_random_F") then { deleteVehicle agent _x; };
        }forEach agents;
        sleep 10;
    };
};
[] spawn life_fnc_showDirectVON;

_location=[14033,18759.3]; _radius=15;
_terrainobjects=nearestTerrainObjects [_location,[],_radius]; {hideObjectGlobal _x} foreach _terrainobjects;

_location=[14033.1,18790.3]; _radius=15; 
_terrainobjects=nearestTerrainObjects [_location,[],_radius]; {hideObjectGlobal _x} foreach _terrainobjects;

_location=[14062.5,18737.7]; _radius=5; 
_terrainobjects=nearestTerrainObjects [_location,[],_radius]; {hideObjectGlobal _x} foreach _terrainobjects;

_location=[14003.4,18736.5]; _radius=18; 
_terrainobjects=nearestTerrainObjects [_location,[],_radius]; {hideObjectGlobal _x} foreach _terrainobjects;

_location=[14034.5,18711.4]; _radius=10; 
_terrainobjects=nearestTerrainObjects [_location,[],_radius]; {hideObjectGlobal _x} foreach _terrainobjects;

StartProgress = true;