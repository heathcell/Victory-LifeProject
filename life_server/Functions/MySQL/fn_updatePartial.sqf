#include "\life_server\script_macros.hpp"
/*
    File: fn_updatePartial.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Takes partial data of a player and updates it, this is meant to be
    less network intensive towards data flowing through it for updates.
*/
private ["_uid","_side","_value","_value1","_value2","_mode","_query","_queryResult","_tickTime"];
params [
  ["_uid","",[""]],
  ["_side",sideUnknown,[civilian]]
];
_mode = param [3,-1,[0]];

if (_uid isEqualTo "" || _side isEqualTo sideUnknown) exitWith {}; //Bad.
_query = "";

switch (_mode) do {
    case 0: {
        _value = param [2,0,[0]];
        _value = [_value] call DB_fnc_numberSafe;
        _query = format ["UPDATE players SET cash='%1' WHERE userid='%2'",_value,_uid];
    };

    case 1: {
        _value = param [2,0,[0]];
        _value = [_value] call DB_fnc_numberSafe;
        _query = format ["UPDATE players SET bankacc='%1' WHERE userid='%2'",_value,_uid];
    };

    case 2: {
        _value = param [2,[],[[]]];
        //Does something license related but I can't remember I only know it's important?
        for "_i" from 0 to count(_value)-1 do {
            _bool = [(_value select _i) select 1] call DB_fnc_bool;
            _value set[_i,[(_value select _i) select 0,_bool]];
        };
        _value = [_value] call DB_fnc_mresArray;
        switch (_side) do {
            case independent: {_query = format ["UPDATE players SET cop_licenses='%1' WHERE userid='%2'",_value,_uid];};
            case civilian: {_query = format ["UPDATE players SET civ_licenses='%1' WHERE userid='%2'",_value,_uid];};
            case east: {_query = format ["UPDATE players SET med_licenses='%1' WHERE userid='%2'",_value,_uid];};
            case west: {_query = format ["UPDATE players SET nato_licenses='%1' WHERE userid='%2'",_value,_uid];};
        };
    };

    case 3: {
        _value = param [2,[],[[]]];
        _value = [_value] call DB_fnc_mresArray;
        switch (_side) do {
            case independent: {_query = format ["UPDATE players SET cop_gear='%1' WHERE userid='%2'",_value,_uid];};
            case civilian: {_query = format ["UPDATE players SET civ_gear='%1' WHERE userid='%2'",_value,_uid];};
            case east: {_query = format ["UPDATE players SET med_gear='%1' WHERE userid='%2'",_value,_uid];};
            case west: {_query = format ["UPDATE players SET nato_gear='%1' WHERE userid='%2'",_value,_uid];};
        };
    };

    case 4: {
        _value = param [2,false,[true]];
        _value = [_value] call DB_fnc_bool;
        _value2 = param [4,[],[[]]];
        _value2 = if (count _value2 isEqualTo 3) then {_value2} else {[0,0,0]};
        _value2 = [_value2] call DB_fnc_mresArray;
        _query = format ["UPDATE players SET civ_alive='%1', civ_position='%2' WHERE userid='%3'",_value,_value2,_uid];
    };

    case 5: {
        _value = param [2,false,[true]];
        _value = [_value] call DB_fnc_bool;
        _query = format ["UPDATE players SET arrested='%1' WHERE userid='%2'",_value,_uid];
    };

    case 6: {
        _value1 = param [2,0,[0]];
        _value2 = param [4,0,[0]];
        _value1 = [_value1] call DB_fnc_numberSafe;
        _value2 = [_value2] call DB_fnc_numberSafe;
        _query = format ["UPDATE players SET cash='%1', bankacc='%2' WHERE userid='%3'",_value1,_value2,_uid];
    };

    case 7: {
        _array = param [2,[],[[]]];
		_uid = param [4,"",[""]];
        [_uid,_side,_array,0] call TON_fnc_keyManagement;
    };
};

if (_query isEqualTo "") exitWith {};

_tickTime = diag_tickTime;
_queryResult = [_query,1] call DB_fnc_asyncCall;

if (EXTDB_SETTING(getNumber,"DebugMode") isEqualTo 1) then {
    diag_log "------------- Client Query Request -------------";
    diag_log format ["QUERY: %1",_query];
    diag_log format ["Time to complete: %1 (in seconds)",(diag_tickTime - _tickTime)];
    diag_log format ["Result: %1",_queryResult];
    diag_log "------------------------------------------------";
};