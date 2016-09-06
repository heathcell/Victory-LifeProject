#include "../../script_macros.hpp"
/*
	File: fn_toggleD.sqf
	Author: smIthz
*/
if(FETCH_CONST(life_donorlevel) isEqualTo 1) then { 
	if((player getVariable "Drank") isEqualTo 1) then {
		player setVariable["Drank",false,true];
		hint "Donator tag has been hide!";
	} else {
		player setVariable["Drank",1,true];
		hint "Donator tag has been show!";
	};
};
if(FETCH_CONST(life_donorlevel) isEqualTo 2) then { 
	if((player getVariable "Drank") isEqualTo 2) then {
		player setVariable["Drank",false,true];
		hint "Donator tag has been hide!";
	} else {
		player setVariable["Drank",2,true];
		hint "Donator tag has been show!";
	};
};
if(FETCH_CONST(life_donorlevel) isEqualTo 3) then { 
	if((player getVariable "Drank") isEqualTo 3) then {
		player setVariable["Drank",false,true];
		hint "Donator tag has been hide!";
	} else {
		player setVariable["Drank",3,true];
		hint "Donator tag has been show!";
	};
};