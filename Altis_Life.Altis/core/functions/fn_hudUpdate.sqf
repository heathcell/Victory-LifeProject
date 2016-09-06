#include "..\..\script_macros.hpp"
/*
    File: fn_hudUpdate.sqf
    Author: Daniel Stuart

    Description:
    Updates the HUD when it needs to.
*/
private ["_ui","_food","_water","_health"];
disableSerialization;

if (isNull LIFEdisplay) then {[] call life_fnc_hudSetup;};
_food = LIFEctrl(23500);
_water = LIFEctrl(23510);
_health = LIFEctrl(23515);
_geld = LIFEctrl(23520);

//Update food
_food ctrlSetPosition [safeZoneX+safeZoneW-0.10,safeZoneY+safeZoneH-0.400];
_food ctrlSetText format["%1%2", life_hunger, "%"];
_food ctrlSetBackgroundColor [0, 0, 0, 0.5]; 
if(life_thirst < 0.3) then { 
	_food ctrlSetBackgroundColor [255, 0, 0, 0.5]; 
};
_food ctrlCommit 0;

//Update Water
_water ctrlSetPosition [safeZoneX+safeZoneW-0.10,safeZoneY+safeZoneH-0.353];
_water ctrlSetText format["%1%2", life_thirst, "%"];
_water ctrlSetBackgroundColor [0, 0, 0, 0.5]; 
if(life_thirst < 0.3) then { 
	_water ctrlSetBackgroundColor [255, 0, 0, 0.5]; 
};
_water ctrlCommit 0;


//Update Health
_health ctrlSetPosition [safeZoneX+safeZoneW-0.10,safeZoneY+safeZoneH-0.306];
_dam = round((1 - (damage player)) * 100);
_health ctrlSetText format["%1%2", _dam, "%"];
_health ctrlSetBackgroundColor [0, 0, 0, 0.5]; 
if(damage player > 0.5) then { 
	_health ctrlSetBackgroundColor [255, 0, 0, 0.5]; 	
};
_health ctrlCommit 0; 
 
//Update Money
_geld ctrlSetPosition [safeZoneX+safeZoneW-0.10,safeZoneY+safeZoneH-0.259];
_geld ctrlSetText format["%1", [CASH] call life_fnc_numberText];
_geld ctrlSetBackgroundColor [0, 0, 0, 0.5]; 
if(CASH > 100000) then { 
	_geld ctrlSetBackgroundColor [255, 0, 0, 0.5]; 
};
_geld ctrlCommit 0;