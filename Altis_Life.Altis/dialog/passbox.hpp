class life_check_pass {
	idd = 4400;
	movingEnable = 0;
	enableSimulation = 1;
	//onLoad = "[] spawn life_fnc_checkpass";
	
	class controlsBackground {
		class Life_RscTitleBackground:Life_RscText {
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
			idc = -1;
			x = 0.1;
			y = 0.2;
			w = 0.64;
			h = (1 / 25);
		};
		
		class MainBackground:Life_RscText {
			colorBackground[] = {0, 0, 0, 0.7};
			idc = -1;
			x = 0.1;
			y = 0.2 + (11 / 250);
			w = 0.64;
			h = 0.3 - (5 / 250);
		};
	};
	
	class controls {

		
		class Title : Life_RscTitle {
			colorBackground[] = {0, 0, 0, 0};
			idc = 4401;
			text = "Login";
			x = 0.1;
			y = 0.2;
			w = 0.6;
			h = (1 / 25);
		};
		
		class enterPass : Life_RscTitle {
			colorBackground[] = {0, 0, 0, 0};
			idc = 4402;
			text = "Enter you password";
			x = 0.1;
			y = 0.25;
			w = 0.6;
			h = (1 / 25);
		};
		
		class passEdit : Life_RscEdit {
		
		idc = 4403;
		
		text = "";
		sizeEx = 0.030;
		x = 0.11; y = 0.3;
		w = 0.62; h = 0.03;
		
		};
		
		class LoginButton : life_RscButtonMenu 
		{
			idc = 4405;
			text = "Login";
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			onButtonClick = "[] call life_fnc_checkpass;";
			
			x = 0.11;
			y = 0.35;
			w = 0.2;
			h = (1 / 25);
		};
	};
};