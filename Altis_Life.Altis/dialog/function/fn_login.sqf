/*
	File: fn_spawnMenu.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Initializes the spawn point selection menu.
*/
disableSerialization;
cutText["","BLACK FADED"];
0 cutFadeOut 9999999;
if(!(createDialog "life_check_pass")) exitWith {[] call life_fnc_login;};
(findDisplay 4400) displaySetEventHandler ["keyDown","_this call life_fnc_displayHandler"];