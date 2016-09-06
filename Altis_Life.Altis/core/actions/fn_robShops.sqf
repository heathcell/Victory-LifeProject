#include "..\..\script_macros.hpp"
/*
	file: fn_robShops.sqf
	Modifile by : Eagleone
	Description:
	Executes the rob shop action!
*/
private["_kassa","_ui","_progress","_pgText","_cP","_rip","_Pos","_rndmrk","_mrkstring"];
params [
	["_shop",objNull,[objNull]],
	["_robber",objNull,[objNull]],
	"_action"
];
_cops = (independent countSide playableUnits);

//if ({player distance getMarkerPos (_x select 0) < _x select 1 } count SAFETY_ZONES > 0) exitWith {hint "You can't do this in safezone!"; };
if(_cops < 1) exitWith {hint "You can not rob the shop, cause no Cops are Online!";};
if(side _robber == independent) exitWith { hint "WTF?!?" };
if(side _robber == west) exitWith { hint "WTF?!?" };
if(side _robber == east) exitWith { hint "WTF?!?" };
if(_robber distance _shop > 20) exitWith { hint "You need to stay within 20 Meters!" };
if(vehicle player != _robber) exitWith { hint "Get out of you are Car!" };
if(_rip) exitWith { hint "It is already mugged!" };
if(currentWeapon _robber == "") exitWith { hint "You don´t have a Weapon?! I´m not really angry" };

if !(alive _robber) exitWith {};
life_action_inUse = true;

_shop removeAction _action;
_kassa = 0;
_rip = true;
_bad = random(100);
if(_bad <= 10) then {
	_kassa = 0;
}else{
	_kassa = 200000 - round(random 150000);
};
if (_kassa == 0) exitWith { hint "No Money here, damn!" };

_chance = random(100);
if(_chance >= 50) then { hint "The silent alarm has been triggered , you should flee now "; 
	[1,format["ALARM! - Shop: %1 will be robbed!", _shop]] remoteExecCall ["life_fnc_broadcast",independent];
};

disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
_ui = uiNameSpace getVariable "life_progress";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["You rob from the store , stay within 5 meters (1%1)...","%"];
_progress progressSetPosition 0.01;
_cP = 0.01;

if(_rip) then
{
	_rndmrk = random(1000);
	_mrkstring = format ["wrgMarker_%1", _rndmrk];
	_Pos = position player; 
	_marker = createMarker [_mrkstring, _Pos]; 
	_marker setMarkerColor "ColorRed";
	_marker setMarkerText "!Attention! >>>Robbery in progress <<< !Attention!";
	_marker setMarkerType "mil_warning";
	//[[1,"A store is being robbed!"],"life_fnc_broadcast",true,false] spawn life_fnc_MP; // General broadcast alert to everyone, uncomment for testing, or if you want it anyway.

	while{true} do
	{
		sleep 2.00;
		_cP = _cP + 0.01;
		_progress progressSetPosition _cP;
		_pgText ctrlSetText format["You rob from the store , stay within 5 meters (%1%2)...",round(_cP * 100),"%"];
	  
		if(_cP >= 1 OR !alive _robber) exitWith {life_action_inUse = false;};
		if(_robber distance _shop > 5.1) exitWith {life_action_inUse = false;};
		if((_robber getVariable["restrained",false])) exitWith {life_action_inUse = false;};
		if(life_istazed) exitWith {life_action_inUse = false;} ;
		if(life_interrupted) exitWith {life_action_inUse = false;};
	};
   
	if!(alive _robber) exitWith { deleteMarker _marker; _rip = false; _shop switchMove ""; 5 cutText ["","PLAIN"];life_action_inUse = false;};
	if(_robber distance _shop > 5.1) exitWith { deleteMarker _marker; _shop switchMove ""; hint "You are too far away , the robbery failed!"; 5 cutText ["","PLAIN"]; _rip = false; [player getVariable ["userid",name player],profileName,"57"] remoteExecCall ["life_fnc_wantedAdd",RSERV];life_action_inUse = false; };
	if(_robber getVariable "restrained") exitWith { deleteMarker _marker; _rip = false; _shop switchMove ""; hint "You getting restrained!"; 5 cutText ["","PLAIN"]; [player getVariable ["userid",name player],profileName,"57"] remoteExecCall ["life_fnc_wantedAdd",RSERV];life_action_inUse = false; };
	if(life_istazed) exitWith {
		deleteMarker _marker; 
		_rip = false; 
		hint "You´ve been tazed!"; 
		5 cutText ["","PLAIN"];
		life_action_inUse = false;
	};
   
	5 cutText ["","PLAIN"];
	titleText[format["You have %1 $ looted , flee as fast as you can!",[_kassa] call life_fnc_numberText],"PLAIN"];
	deleteMarker _marker;
	CASH = CASH + _kassa;

	_rip = false;
	life_use_atm = false;
	sleep (30 + random(180));
	life_use_atm = true;
	[player getVariable ["userid",name player],profileName,"56"] remoteExecCall ["life_fnc_wantedAdd",RSERV];
	life_action_inUse = false;
};

sleep 600;
_action = _shop addAction["Rob Shop",life_fnc_robShops];