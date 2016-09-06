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

StartProgress = true;