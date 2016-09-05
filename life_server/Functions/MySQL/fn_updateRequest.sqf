#include "\life_server\script_macros.hpp"
/*
    File: fn_updateRequest.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Updates ALL player information in the database.
    Information gets passed here from the client side file: core\session\fn_updateRequest.sqf
*/
params [
  ["_userid","",[""]],
  ["_uid","",[""]],
  ["_name","",[""]],
  ["_side",sideUnknown,[civilian]],
  ["_cash",0,[0]],
  ["_bank",5000,[0]],
  ["_licenses",[],[[]]],
  ["_gear",[],[[]]],
  ["_stats",[100,100],[[]]],
  ["_position",[],[[]]]
];

//Get to those error checks.
if (_uid isEqualTo "" || {_name isEqualTo ""}) exitWith {};

//Parse and setup some data.
_userid = [_userid] call DB_fnc_mresString;
_name = [_name] call DB_fnc_mresString;
_gear = [_gear] call DB_fnc_mresArray;
_stats = [_stats] call DB_fnc_mresArray;
_cash = [_cash] call DB_fnc_numberSafe;
_bank = [_bank] call DB_fnc_numberSafe;
_position = [_position] call DB_fnc_mresArray;

//Does something license related but I can't remember I only know it's important?
for "_i" from 0 to count(_licenses)-1 do {
    private _bool = [(_licenses select _i) select 1] call DB_fnc_bool;
    _licenses set[_i,[(_licenses select _i) select 0,_bool]];
};

_licenses = [_licenses] call DB_fnc_mresArray;

private "_query";
switch (_side) do {
    case independent: {_query = format ["UPDATE players SET playerid='%1', cash='%2', bankacc='%3', cop_gear='%4', cop_licenses='%5', cop_stats='%6', cop_position='%7' WHERE userid='%8'",_uid,_cash,_bank,_gear,_licenses,_stats,_position,_userid];};
    case civilian: {_query = format ["UPDATE players SET playerid='%1', cash='%2', bankacc='%3', civ_licenses='%4', civ_gear='%5', arrested='%6', civ_stats='%7', civ_alive='%8', civ_position='%9' WHERE userid='%10'",_uid,_cash,_bank,_licenses,_gear,[_this select 10] call DB_fnc_bool,_stats,[_this select 11] call DB_fnc_bool,_position,_userid];};
    case east: {_query = format ["UPDATE players SET playerid='%1', cash='%2', bankacc='%3', med_licenses='%4', med_gear='%5', med_stats='%6', med_position='%7' WHERE userid='%8'",_uid,_cash,_bank,_licenses,_gear,_stats,_position,_userid];};
	case west: {_query = format ["UPDATE players SET playerid='%1', cash='%2', bankacc='%3', nato_licenses='%4', nato_gear='%5', nato_stats='%6', nato_position='%7' WHERE userid='%8'",_uid,_cash,_bank,_licenses,_gear,_stats,_position,_userid];};
};

_tickTime = diag_tickTime;
_queryResult = [_query,1] call DB_fnc_asyncCall;

if (EXTDB_SETTING(getNumber,"DebugMode") isEqualTo 1) then {
    diag_log "------------- Client Query Request -------------";
    diag_log format ["QUERY: %1",_query];
    diag_log format ["Time to complete: %1 (in seconds)",(diag_tickTime - _tickTime)];
    diag_log format ["Result: %1",_queryResult];
    diag_log "------------------------------------------------";
};
