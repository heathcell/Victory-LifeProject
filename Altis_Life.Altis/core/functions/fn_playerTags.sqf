#include "..\..\script_macros.hpp"
/*
    File: fn_playerTags.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Adds the tags above other players heads when close and have visible range.
*/
if (!life_settings_tagson) exitWith {};
private ["_ui","_units","_masks"];
#define iconID 78000
#define scale 0.8

if (visibleMap || {!alive player} || {dialog}) exitWith {
    500 cutText["","PLAIN"];
};

_ui = uiNamespace getVariable ["Life_HUD_nameTags",displayNull];
if (isNull _ui) then {
    500 cutRsc["Life_HUD_nameTags","PLAIN"];
    _ui = uiNamespace getVariable ["Life_HUD_nameTags",displayNull];
};

_units = nearestObjects[(visiblePosition player),["Man","Land_Pallet_MilBoxes_F","Land_Sink_F"],50];
_units = _units - [player];

_masks = LIFE_SETTINGS(getArray,"clothing_masks");

private _index = -1;
{
    private "_text";
    _idc = _ui displayCtrl (iconID + _forEachIndex);
    if (!(lineIntersects [eyePos player, eyePos _x, player, _x]) && alive _x && {!isNil {_x getVariable "realname"}}) then {
        _pos = switch (typeOf _x) do {
            case "Land_Pallet_MilBoxes_F": {[visiblePosition _x select 0, visiblePosition _x select 1, (getPosATL _x select 2) + 1.5]};
            case "Land_Sink_F": {[visiblePosition _x select 0, visiblePosition _x select 1, (getPosATL _x select 2) + 2]};
            default {[visiblePosition _x select 0, visiblePosition _x select 1, ((_x modelToWorld (_x selectionPosition "head")) select 2)+.5]};
        };
        _sPos = worldToScreen _pos;
        _distance = _pos distance player;
        if (!((headgear _x) in _masks || (goggles _x) in _masks || (uniform _x) in _masks)) then {
            if (count _sPos > 1 && {_distance < 15}) then {
                _text = switch (true) do {
                    case (_x in (units group player) && playerSide isEqualTo civilian): {format ["<t color='#00FF00'>%1</t>",(_x getVariable ["realname",name _x])];};
                    case (side _x isEqualTo independent && {!isNil {_x getVariable "rank"}}): {format ["<img image='%1' size='1'></img> %2",switch ((_x getVariable "rank")) do {
                        case 2: {"\a3\ui_f\data\gui\cfg\Ranks\corporal_gs.paa"};
                        case 3: {"\a3\ui_f\data\gui\cfg\Ranks\sergeant_gs.paa"};
                        case 4: {"\a3\ui_f\data\gui\cfg\Ranks\lieutenant_gs.paa"};
                        case 5: {"\a3\ui_f\data\gui\cfg\Ranks\captain_gs.paa"};
                        case 6: {"\a3\ui_f\data\gui\cfg\Ranks\major_gs.paa"};
                        case 7: {"\a3\ui_f\data\gui\cfg\Ranks\colonel_gs.paa"};
                        case 8: {"\a3\ui_f\data\gui\cfg\Ranks\general_gs.paa"};
                        default {"\a3\ui_f\data\gui\cfg\Ranks\private_gs.paa"};
                        },_x getVariable ["realname",name _x]]};
					case (side _x == west && {!isNil {_x getVariable "rank"}}): {format["<img image='%1' size='2.0'></img> %2",switch ((_x getVariable "rank")) do {
						case 15: {"icons\ranks\soldier\O1-2LT.paa"};
						case 16: {"icons\ranks\soldier\O2-1LT.paa"};
						case 17: {"icons\ranks\soldier\O3CPT.paa"};
						case 18: {"icons\ranks\soldier\O4MAJ.paa"};
						case 19: {"icons\ranks\soldier\O5LTC.paa"};
						case 20: {"icons\ranks\soldier\O6COL.paa"};
						case 21: {"icons\ranks\soldier\O7BG.paa"};
						case 22: {"icons\ranks\soldier\O8MG.paa"};
						case 23: {"icons\ranks\soldier\O9LTG.paa"};
						case 24: {"icons\ranks\soldier\O10GEN.paa"};
						case 25: {"icons\ranks\soldier\SPCamGA.paa"};					
						case 26: {"icons\ranks\soldier\SPCamGoAoUS.paa"};
						default
						{	
							switch ((_x getVariable "force")) do
							{
								case 1: {
									switch ((_x getVariable "rank")) do {
										default {"icons\ranks\soldier\E1amPV1.paa"}; 
										case 2: {"icons\ranks\soldier\E2amPV2.paa"};
										case 3: {"icons\ranks\soldier\E3amPFC.paa"};
										case 4: {"icons\ranks\soldier\E4-1amSPC.paa"};
										case 5: {"icons\ranks\soldier\E4-2amCPL.paa"};
										case 6: {"icons\ranks\soldier\E5amSGT.paa"};
										case 7: {"icons\ranks\soldier\E6amSSG.paa"};
										case 8: {"icons\ranks\soldier\E7amSFC.paa"};
										case 9: {"icons\ranks\soldier\E8-1amMSG.paa"};
										case 10: {"icons\ranks\soldier\E8-2am1SG.paa"};
										case 11: {"icons\ranks\soldier\E9-1amSGM.paa"};
										case 12: {"icons\ranks\soldier\E9-2amCSM.paa"};
										case 13: {"icons\ranks\soldier\E9-3amSMA.paa"};
									};
								};
								case 2: {
									switch ((_x getVariable "rank")) do {
										default {"icons\ranks\soldier\E1amPV1.paa"}; 
										case 2: {"icons\ranks\soldier\NVOR2.paa"};
										case 3: {"icons\ranks\soldier\NVOR3.paa"};
										case 4: {"icons\ranks\soldier\NVOR4.paa"};
										case 5: {"icons\ranks\soldier\NVOR5.paa"};
										case 6: {"icons\ranks\soldier\NVOR6.paa"};
										case 7: {"icons\ranks\soldier\NVOR7.paa"};
										case 8: {"icons\ranks\soldier\NVOR8.paa"};
										case 9: {"icons\ranks\soldier\NVOR9-1.paa"};
										case 10: {"icons\ranks\soldier\NVOR9-2.paa"};
										case 11: {"icons\ranks\soldier\NVOR9-3.paa"};
										case 12: {"icons\ranks\soldier\NVOR9-4.paa"};
									};
								};
								case 3: {
									switch ((_x getVariable "rank")) do {
										default {"icons\ranks\soldier\E1amPV1.paa"}; 
										case 2: {"icons\ranks\soldier\AFE2.paa"};
										case 3: {"icons\ranks\soldier\AFE3.paa"};
										case 4: {"icons\ranks\soldier\AFE4.paa"};
										case 5: {"icons\ranks\soldier\AFE5.paa"};
										case 6: {"icons\ranks\soldier\AFE6.paa"};
										case 7: {"icons\ranks\soldier\AFE7-1.paa"};
										case 8: {"icons\ranks\soldier\AFE7-2.paa"};
										case 9: {"icons\ranks\soldier\AFE8-1.paa"};
										case 10: {"icons\ranks\soldier\AFE8-2.paa"};
										case 11: {"icons\ranks\soldier\AFE9-1.paa"};
										case 12: {"icons\ranks\soldier\AFE9-2.paa"};
										case 13: {"icons\ranks\soldier\AFE9-3.paa"};
										case 14: {"icons\ranks\soldier\AFE9-4.paa"};
									};
								};
								case 4: {
									switch ((_x getVariable "rank")) do {
										default {"icons\ranks\soldier\E1amPV1.paa"}; 
										case 2: {"icons\ranks\soldier\MCE2.paa"};
										case 3: {"icons\ranks\soldier\MCE3.paa"};
										case 4: {"icons\ranks\soldier\MCE4.paa"};
										case 5: {"icons\ranks\soldier\MCE5.paa"};
										case 6: {"icons\ranks\soldier\MCE6.paa"};
										case 7: {"icons\ranks\soldier\MCE7.paa"};
										case 8: {"icons\ranks\soldier\MCE8-1.paa"};
										case 9: {"icons\ranks\soldier\MCE8-2.paa"};
										case 10: {"icons\ranks\soldier\MCE9-1.paa"};
										case 11: {"icons\ranks\soldier\MCE9-2.paa"};
										case 12: {"icons\ranks\soldier\MCE9-3.paa"};
									};
								};
							};
						};
						},_x getVariable ["realname",name _x]]};
                    case (side _x isEqualTo east): {format ["<t color='#FF0000'><img image='a3\ui_f\data\map\MapControl\hospital_ca.paa' size='1.5'></img></t> %1",_x getVariable ["realname",name _x]]};
                    default {
                        if (!isNil {(group _x) getVariable "gang_name"}) then {
                            format ["%1<br/><t size='0.8' color='#B6B6B6'>%2</t>",_x getVariable ["realname",name _x],(group _x) getVariable ["gang_name",""]];
                        } else {
                            _x getVariable ["realname",name _x];
                        };
                    };
                };
				
				if(_x getVariable ["DirectVON",false]) then {
					_text = format ["<img image='\A3\ui_f\data\igui\rscingameui\rscdisplayvoicechat\microphone_ca.paa' size='1.5'></img><t> </t>"] + _text;
				};
				
				if((_x getVariable "Drank") > 0) then {
					private "_colour";
					switch ((_x getVariable "Drank")) do {
						case 1: {_colour = "#CD7F32";};
						case 2: {_colour = "#C0C0C0";};
						case 3: {_colour = "#FFE766";};
					};
					if(_x getVariable ["DirectVON",false]) then {
						if(side _x in [west,independent]) then {
						};
						if(side _x == east) then {
						};
						if(side _x == civilian) then {
						};
					} else {
						if(side _x in [west,independent]) then {
						};
						if(side _x == east) then {
						};
						if(side _x == civilian) then {
						};
					};
				};

                _idc ctrlSetStructuredText parseText _text;
                _idc ctrlSetPosition [_sPos select 0, _sPos select 1, 0.4, 0.65];
                _idc ctrlSetScale scale;
                _idc ctrlSetFade 0;
                _idc ctrlCommit 0;
                _idc ctrlShow true;
            } else {
                _idc ctrlShow false;
            };
        } else {
            _idc ctrlShow false;
        };
    } else {
        _idc ctrlShow false;
    };
    _index = _forEachIndex;
} forEach _units;
(_ui displayCtrl (iconID + _index + 1)) ctrlSetStructuredText parseText "";