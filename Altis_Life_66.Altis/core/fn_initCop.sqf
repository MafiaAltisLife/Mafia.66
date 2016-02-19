#include "..\script_macros.hpp"
/*
	File: fn_initCop.sqf
	Author: Bryan "Tonic" Boardwine
	Description:
	Cop Initialization file.
*/
private "_end";
player addRating 9999999;
waitUntil {!(isNull (findDisplay 46))};
_end = false;

if(life_blacklisted) exitWith {
	["Blacklisted",false,true] call BIS_fnc_endMission;
	sleep 30;
};

//if(!(str(player) in ["cop_1","cop_2","cop_3","cop_4"])) then {
	if((FETCH_CONST(life_coplevel) < 1) && (FETCH_CONST(life_adminlevel) < 1)) then {
		["NotWhitelisted",false,true] call BIS_fnc_endMission;
		sleep 35;
//	};
};


player setVariable["rank",(FETCH_CONST(life_coplevel)),true];
[] call life_fnc_spawnMenu;
waitUntil{!isNull (findDisplay 38500)}; //Wait for the spawn selection to be open.
waitUntil{isNull (findDisplay 38500)}; //Wait for the spawn selection to be done.
[] spawn life_fnc_introcam;
[] execVM "core\welcome.sqf";
[] spawn
{
while {true} do
    {
		waitUntil {uniform player == "U_B_CombatUniform_mcam"};
		if ((call life_coplevel) == 1) then {player setObjectTextureGlobal [0,"textures\Cop\policia_roupaPM.paa"];};
		if ((call life_coplevel) == 2) then {player setObjectTextureGlobal [0,"textures\Cop\policia_roupaPM.paa"];};
		if ((call life_coplevel) == 3) then {player setObjectTextureGlobal [0,"textures\Cop\policia_roupaPM.paa"];};
		if ((call life_coplevel) == 4) then {player setObjectTextureGlobal [0,"textures\Cop\policia_roupaPM.paa"];};
		if ((call life_coplevel) == 5) then {player setObjectTextureGlobal [0,"textures\Cop\policia_roupaPM.paa"];};
		if ((call life_coplevel) == 6) then {player setObjectTextureGlobal [0,"textures\Cop\policia_roupaPM.paa"];};
		if ((call life_coplevel) == 7) then {player setObjectTextureGlobal [0,"textures\Cop\policia_roupaPM.paa"];};
		if ((call life_coplevel) == 8) then {player setObjectTextureGlobal [0,"textures\Cop\policia_roupaPM.paa"];};
		if ((call life_coplevel) == 9) then {player setObjectTextureGlobal [0,"textures\Cop\policia_roupaPM.paa"];};
		if ((call life_coplevel) == 10) then {player setObjectTextureGlobal [0,"textures\Cop\policia_roupaPM.paa"];};
		if ((call life_coplevel) == 11) then {player setObjectTextureGlobal [0,"textures\Cop\policia_roupaPM.paa"];};
		waitUntil {uniform player != "U_B_CombatUniform_mcam"};
	};
};
