#include "..\..\script_macros.hpp"
/*
    File: fn_weaponShopAccs.sqf
    Author: Daniel Stuart

    Description:
    Set Weapon Shop in accessories mode
*/
disableSerialization;

if ((uiNamespace getVariable ["Weapon_Accessories",0]) isEqualTo 0) then {
    private ["_weapon","_slotArray","_weaponArray"];
    _weapon = lbData[38403,lbCurSel (38403)];
	_weaponArray = [_weapon] call CBA_fnc_compatibleItems;
    uiNamespace setVariable ["Accessories_Array",_weaponArray];
    uiNamespace setVariable ["Weapon_Accessories",1];
} else {
    uiNamespace setVariable ["Weapon_Accessories",0];
};
