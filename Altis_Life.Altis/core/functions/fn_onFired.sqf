#include "..\..\script_macros.hpp"
/*
    File: fn_onFired.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Handles various different ammo types being fired.
*/
private ["_ammoType","_projectile"];
_ammoType = _this select 4;
_projectile = _this select 6;

if (_ammoType isEqualTo "GrenadeHand_stone") then {
    _projectile spawn {
        private "_position";
        while {!isNull _this} do {
            _position = ASLtoATL (visiblePositionASL _this);
            sleep 0.1;
        };
        [_position] remoteExec ["life_fnc_flashbang",RCLIENT];
    };
};

if(playerSide in [civilian,east]) then {
	if ({(_this select 0) distance getMarkerPos (_x select 0) < _x select 1} count SAFETY_ZONES > 0) then
	{
		deleteVehicle (_this select 6);
		titleText [SZ_MESSAGE, "PLAIN", 3];
	};
};