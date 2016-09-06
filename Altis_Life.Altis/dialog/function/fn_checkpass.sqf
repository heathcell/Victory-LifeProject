#include "..\..\script_macros.hpp"
/*
	File: fn_bankTransfer.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Figure it out again.
*/
private "_enpass";
_enpass = ctrlText 4403;
if(_enpass isEqualTo PASS) exitWith {
	life_login_completed = true;
	closeDialog 0;
};