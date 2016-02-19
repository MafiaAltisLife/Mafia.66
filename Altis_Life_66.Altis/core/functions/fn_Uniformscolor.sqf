#include <macro.h>
/*
	COP UNIFORM SCRIPT
	Edited: by maximum for better handling of actual uniforms
	Created for www.altisliferpg.com
*/

if(side player == independent) then {
	if ((uniform player) == "U_IG_Guerilla2_3") then {
		player setObjectTextureGlobal [0, "textures\medic\clothing\medicclothing.jpg"];
	};
	if (backpack player == "B_Bergen_sgg") then {
		backpackContainer player setObjectTextureGlobal [0, "textures\medic\clothing\bergen_medic.jpg"];
	};
};

if(side player == WEST) then {
	if ((uniform player) == "U_B_CombatUniform_mcam") then {
		player setObjectTextureGlobal [0, "textures\Cop\policia_roupaPM.jpg"]; 
	};
	if (uniform player == "U_B_CombatUniform_mcam" && (FETCH_CONST(life_coplevel) >= 2)) then {
		player setObjectTextureGlobal [0, "textures\Cop\policia_roupaPM.jpg"]; 
	};
	if (uniform player == "U_B_CombatUniform_mcam" && (FETCH_CONST(life_coplevel) == 3)) then {
		player setObjectTextureGlobal [0, "textures\Cop\policia_roupaPM.jpg"]; 
	};
	if (uniform player == "U_B_CombatUniform_mcam" && (FETCH_CONST(life_coplevel) >= 4)) then {
		player setObjectTextureGlobal [0, "textures\Cop\policia_roupaPM.jpg"]; 
	};
	if (uniform player == "U_B_CombatUniform_mcam") then {
		player setObjectTextureGlobal [0, "textures\Cop\policia_roupaPM.jpg"]; 
	};
	if (backpack player == "B_Bergen_sgg") then {
		backpackContainer player setObjectTextureGlobal [0, "textures\police\clothing\bergen_police.jpg"];
	};
	if (backpack player == "B_Kitbag_sgg") then {
		backpackContainer player setObjectTextureGlobal [0, "textures\police\clothing\kitbag_police.jpg"];
	};
};

if(side player == WEST && license_cop_mp) then {
	if (uniform player == "U_B_CombatUniform_mcam") then {
		player setObjectTextureGlobal [0, "textures\Cop\policia_roupaPM.jpg"]; 
	};
	if (uniform player == "U_B_CombatUniform_mcam") then {
		player setObjectTextureGlobal [0, "textures\Cop\policia_roupaPM.jpg"]; 
	};
};

if(side player == civilian) then {
	if(side player == civilian && uniform player == "U_C_Scientist") then {
		player setObjectTextureGlobal [0, "textures\civilians\clothing\prisoner.jpg"];
	};
};

if(side player == civilian && license_civ_rebel) then {
	if(side player == civilian && uniform player == "U_B_CTRG_1") then {
		player setObjectTextureGlobal [0, "textures\civilians\clothing\rebel_camo_1.jpg"];
	};
};

if(side player == civilian && license_civ_terrorist) then {
	if(side player == civilian && uniform player == "U_O_SpecopsUniform_blk") then {
		player setObjectTextureGlobal [0, "\a3\characters_f\OPFOR\Data\clothing_rus_co.paa"];
	};
};
