#include "..\..\script_macros.hpp"
/*
	File: fn_bankDeposit.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Figure it out.
*/
private "_value";

if((life_spam != 0) && ((time - life_spam) < 0.2)) then {
titleText ["AUTOCLICKER", "BLACK OUT", 3];
[[0,"STR_ANOTF_autoclicker",true,[profileName]],"life_fnc_broadcast",true,false] call life_fnc_MP;
sleep 2;
[99] call SOCK_fnc_updatePartial;
["TEMPBAN",false,true] call BIS_fnc_endMission;

_value = parseNumber(ctrlText 2702);

//Series of stupid checks
if(_value > 999999) exitWith {hint localize "STR_ATM_GreaterThan";};
if(_value < 0) exitWith {};
if(!([str(_value)] call life_fnc_isnumeric)) exitWith {hint localize "STR_ATM_notnumeric"};
if(_value > CASH) exitWith {hint localize "STR_ATM_NotEnoughCash"};

CASH = CASH - _value;
BANK = BANK + _value;

hint format[localize "STR_ATM_DepositSuccess",[_value] call life_fnc_numberText];
[] call life_fnc_atmMenu;
[6] call SOCK_fnc_updatePartial;
