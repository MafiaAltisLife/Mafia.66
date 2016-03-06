#include "..\..\script_macros.hpp"
/*
	File: fn_chopShopSell.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Sells the selected vehicle off.
*/
disableSerialization;
private["_control","_price","_vehicle","_nearVehicles","_price2"];

if((life_spam != 0) && ((time - life_spam) < 0.2)) then {
titleText ["AUTOCLICKER", "BLACK OUT", 3];
[[0,"STR_ANOTF_autoclicker",true,[profileName]],"life_fnc_broadcast",true,false] call life_fnc_MP;
sleep 2;
[99] call SOCK_fnc_updatePartial;
["TEMPBAN",false,true] call BIS_fnc_endMission;

_control = CONTROL(39400,39402);
_price = _control lbValue (lbCurSel _control);
_vehicle = _control lbData (lbCurSel _control);
_vehicle = call compile format["%1", _vehicle];
_nearVehicles = nearestObjects [getMarkerPos life_chopShop,["Car","Truck"],25];
_vehicle = SEL(_nearVehicles,_vehicle);
if(isNull _vehicle) exitWith {};

hint localize "STR_Shop_ChopShopSelling";
life_action_inUse = true;
_price2 = CASH + _price;
[player,_vehicle,_price,_price2] remoteExecCall ["TON_fnc_chopShopSell",RSERV];
closeDialog 0;
