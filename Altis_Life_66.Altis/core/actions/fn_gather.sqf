#include <macro.h>
/*
	File: fn_gather.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Main functionality for gathering.
*/
if(player getVariable "surrender") exitWith {hint "Você está tentando bugar o farm, isto pode lhe render um BAN!"};
if(isNil "life_action_gathering") then {life_action_gathering = false;};
private["_gather","_itemWeight","_diff","_itemName","_resourceZones","_zone"];
_resourceZones = ["apple_1","apple_2","apple_3","apple_4","peaches_1","peaches_2","peaches_3","peaches_4","heroin_1","heroin_2","cocaine_1","cocaine_2","weed_1","weed_2","weed_3","meth_1","meth_2","lead_1","lead_2","iron_1","iron_2","salt_1","salt_2","sand_1","sand_2","diamond_1","diamond_2","oil_1","oil_2","oil_3","oil_4","rock_1","rock_2","Pretoleo_1","Petroleo_2","logging","logging_2","logging","logging_2","metal_1","metal_2","prata_1","prata_1","perola_1"];
_zone = "";
_tool = "";
if((time - life_action_delay) < 1) exitWith {hint "Você está tentando bugar o farm, isto pode lhe render um BAN!"; _this SVAR ["inUse",false,true];};
if(life_action_gathering) exitWith {}; //Action is in use, exit to prevent spamming.
life_action_gathering = true;

//Find out what zone we're near
{

	if(player distance (getMarkerPos _x) < 30) exitWith {_zone = _x;};
} foreach _resourceZones;

if(EQUAL(_zone,"")) exitWith {life_action_gathering = false;};

//Get the resource that will be gathered from the zone name...
switch(true) do {
	case (_zone in ["apple_1","apple_2","apple_3","apple_4"]): {_gather = ["apple",5];};
	case (_zone in ["peaches_1","peaches_2","peaches_3","peaches_4"]): {_gather = ["peach",5];};
	case (_zone in ["heroin_1","heroin_2"]): {_gather = ["heroin_unprocessed",3];};
	case (_zone in ["cocaine_1","cocaine_2","cocaine_3"]): {_gather = ["cocaine_unprocessed",4];};
	case (_zone in ["weed_1","weed_2","weed_3"]): {_gather = ["cannabis",4];};
	case (_zone in ["meth_1","meth_2"]): {_gather = ["meth_unprocessed",3];};
	
	//Mine Zones
	case (_zone in ["lead_1","lead_2"]): {_gather = ["copper_unrefined",3];_tool = "pickaxe";};
	case (_zone in ["iron_1","iron_2"]): {_gather = ["iron_unrefined",3];_tool = "pickaxe";};
	case (_zone in ["salt_1","salt_2"]): {_gather = ["salt_unrefined",5];_tool = "pickaxe";};
	case (_zone in ["sand_1","sand_2"]): {_gather = ["sand",5];_tool = "pickaxe";};
	case (_zone in ["diamond_1","diamond_2","oil_3","oil_4"]): {_gather = ["diamond_uncut",3];_tool = "pickaxe";};
	case (_zone in ["oil_1","oil_2","oil_3","oil_4"]): {_gather = ["oil_unprocessed",4];_tool = "pickaxe";};
	case (_zone in ["rock_1","rock_2"]): {_gather = ["rock",3];_tool = "pickaxe";};
	case (_zone in ["Pretoleo_1","Petroleo_2"]): {_gather = ["oil_unprocessed",4];_tool = "pickaxe";};
	case (_zone in ["logging","logging_2"]): {_gather = ["logsu",5];_tool = "chainsaw";};
	case (_zone in ["metal_1","metal_2"]): {_gather = ["metalu",3];_tool = "pickaxe";};
	case (_zone in ["prata_1"]): {_gather = ["prata_uncut",3];_tool = "pickaxe";};
	case (_zone in ["ouro_1"]): {_gather = ["ouro_uncut",3];_tool = "pickaxe";};
	case (_zone in ["perola_1"]): {_gather = ["perola_uncut",3];};
	default {""};
};
//gather check??
if(vehicle player != player) exitWith {};

if (SEL(_gather,2) != "" && {if (EQUAL(ITEM_VALUE(SEL(_gather,2)),0)) exitWith { true };false}) exitWith {
	hint format ["You lack the %1",ITEM_NAME(SEL(_gather,2))];
	life_action_gathering = false;
};

if (_tool != "" && {if (EQUAL(ITEM_VALUE(_tool),0)) exitWith { true };false}) exitWith {hint format ["Você precisa de %1",ITEM_NAME(_tool)];life_action_gathering = false;};

_diff = [SEL(_gather,0),SEL(_gather,1),life_carryWeight,life_maxWeight] call life_fnc_calWeightDiff;
if(EQUAL(_diff,0)) exitWith {hint localize "STR_NOTF_InvFull"};
life_action_gathering = true;

for "_i" from 0 to 2 do {
	player playMove "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
	waitUntil{animationState player != "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";};
	sleep 2.5;
};

if(([true,SEL(_gather,0),_diff] call life_fnc_handleInv)) then {
	_itemName = M_CONFIG(getText,"VirtualItems",SEL(_gather,0),"displayName");
	titleText[format[localize "STR_NOTF_Gather_Success",(localize _itemName),_diff],"PLAIN"];
};

life_action_gathering = false;
