class Insure : life_RscButtonMenu {	
		idc = -1;
		text = "Insure Nearest Vehicle";
		colorBackground[] = {0,0.2235294117647059,0.3725490196078431,1};
		onButtonClick = "[] call life_fnc_insurance;";
		x = 0.1 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
		y = 0.95 - (1 / 25);
		w = (13 / 40);
		h = (1 / 25);
	};