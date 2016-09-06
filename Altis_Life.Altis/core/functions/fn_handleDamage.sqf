#include "..\..\script_macros.hpp"
/*
    File: fn_handleDamage.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Handles damage, specifically for handling the 'tazer' pistol and nothing else.
*/
params [
    ["_unit",objNull,[objNull]],
    ["_part","",[""]],
    ["_damage",0,[0]],
    ["_source",objNull,[objNull]],
    ["_projectile","",[""]],
    ["_index",0,[0]]
];

//Handle the tazer first (Top-Priority).
if (!isNull _source) then {
    if (_source != _unit) then {
        if (currentWeapon _source in ["hgun_P07_snds_F","arifle_SDAR_F"] && _projectile in ["B_9x21_Ball","B_556x45_dual"]) then {
            if (side _source isEqualTo west && playerSide isEqualTo civilian) then {
                _damage = 0;
                if (alive player && !life_istazed && !life_isknocked && !(_unit getVariable ["restrained",false])) then {
                    private ["_distance"];
                    _distance = 35;
                    if (_projectile == "B_556x45_dual") then {_distance = 100;};
                    if (_unit distance _source < _distance) then {
                        if (vehicle player != player) then {
                            if (typeOf (vehicle player) == "B_Quadbike_01_F") then {
                                player action ["Eject",vehicle player];
                                [_unit,_source] spawn life_fnc_tazed;
                            };
                        } else {
                            [_unit,_source] spawn life_fnc_tazed;
                        };
                    };
                };
            };

            //Temp fix for super tasers on cops.
            if (side _source isEqualTo west && (playerSide isEqualTo west || playerSide isEqualTo independent)) then {
                _damage = 0;
            };
        };
    };
};

//anti vdm
if (vehicle _unit == _unit) then {
	if ({_unit distance getMarkerPos (_x select 0) < _x select 1 } count SAFETY_ZONES > 0) then {
		_isVehicle = vehicle _source;
		if ((_isVehicle isKindOf "Air" OR _isVehicle isKindOf "Car" OR _isVehicle isKindOf "Boat" OR _isVehicle isKindOf "Armored") && !( _source isKindOf "Air" OR _source isKindOf "Car" OR _source isKindOf "Boat" )) then 
		{
			_damage = false;
			//[[player,"amovppnemstpsraswrfldnon"],"life_fnc_animSync",true,false] call life_fnc_MP;
			[player,"amovppnemstpsraswrfldnon"] remoteExecCall ["life_fnc_animSync",RCLIENT];
			if(isNil "life_msg_time") then {life_msg_time = false;};
			if(!life_msg_time) then 
			{ 
				//[[0,format["%1 has been drive-by BY %2", _unit getVariable["realname",name _unit], _source getVariable["realname",name _source]]],"life_fnc_broadcast",true,false] call life_fnc_MP;
				[0,format["%1 has been drive-by BY %2", _unit getVariable["realname",name _unit], _source getVariable["realname",name _source]]] remoteExecCall ["life_fnc_broadcast",RCLIENT];
				[] spawn
				{
					sleep (10);
					life_msg_time = false;
				};
			};
		};
	};
};

[] spawn life_fnc_hudUpdate;
_damage;