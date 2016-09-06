while {true} do
{
	waitUntil {
		uiSleep 1;
		player setVariable["DirectVON", false, true];
		((!isNull findDisplay 63) && (!isNull findDisplay 55))
	};
	if (ctrlText ((findDisplay 55) displayCtrl 101) isEqualTo "\A3\ui_f\data\igui\rscingameui\rscdisplayvoicechat\microphone_ca.paa") then {
		_chatType = ctrlText ((findDisplay 63) displayCtrl 101);
		if ((_chatType isEqualTo localize "str_channel_direct") OR (_chatType isEqualTo "Direct Communication")) then {
			player setVariable["DirectVON", true, true];
		} else {
			player setVariable["DirectVON", false, true];
		};
	} else {
		player setVariable["DirectVON", false, true];
	};
	uiSleep 0.2;
};