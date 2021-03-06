#include <macro.h>
/*
		Filename: fn_insurance.sqf
		Author: Kevin Webb
		Description: 
		Simple way of insuring the vehicle. Will be modified in the future.
*/
private["_nearVehicles","_vehicle","_price"];
		if (vehicle player != player)
      then
    {_vehicle = vehicle player;}

      else
	  {	_nearVehicles = nearestObjects[getPos player,["Car","Air","Ship"],50];

		if(count _nearVehicles > 0)

	  then	
	  
		{{if (!isNil "_vehicle") exitWith {}; //Kill the loop.
	  
	  _vehData = _x getVariable["vehicle_info_owners",[]];

		if(count _vehData  > 0) then
	  {	_vehOwner = (_vehData select 0) select 0;
	  
		if((getPlayerUID player) == _vehOwner) exitWith {	_vehicle = _x;};};}
	  foreach _nearVehicles;};};
	  
		if (isNil "_vehicle") exitWith {hint "Verifique se o seu veículo está mais próximo do NPC e tente novamente";};
	  
		if(isNull _vehicle) exitWith {};
	  	  
		if(_vehicle getVariable["isInsured",false]) exitWith { hint "Este veículo já tem seguro."; };
	  
		if(!(_vehicle in life_vehicles)) exitWith {hint "O veículo não parece ser o seu próprio."; }; 
	  	  
	  _price = switch(typeOf _vehicle) do {
	  
	  case "B_Heli_Light_01_F": { 25000 }; 
	  case "C_SUV_01_F": { 11000};case "C_Offroad_01_F": { 4000};
	  case "C_Hatchback_01_sport_F": { 22500};
	  case "O_Heli_Light_02_unarmed_F": { 50000};
	  case "B_Quadbike_01_F": { 700};case "C_Van_01_transport_F": { 12000};
	  case "C_Van_01_box_F": { 18000};
	  case "C_Van_01_fuel_F": { 21000};
	  case "I_Truck_02_transport_F": { 22500};
	  case "I_Truck_02_covered_F": { 30000};
	  case "B_Truck_01_fuel_F": { 40000};
	  case "B_Truck_01_transport_F": { 40000};
	  case "B_Truck_01_box_F": { 45000};
	  case "B_Truck_01_covered_F": { 41500};
	  case "O_Truck_03_fuel_F": { 32000};
	  case "O_Truck_03_covered_F": { 38000};
	  case "O_Truck_03_device_F": { 44000};
	  case "I_G_Offroad_01_F": { 4500};
	  case "I_G_Offroad_01_armed_F": { 76000};
	  case "O_MRAP_02_F": { 58000};
	  case "I_Heli_Transport_02_F": { 100000};
	  case "I_Heli_light_03_unarmed_F": { 50000};
	  case "B_Heli_Transport_01_F": { 15000};
	  case "C_Rubberboat": { 1500};
	  case "C_Boat_Civil_01_F": { 6600};
	  case "C_Boat_Civil_01_rescue_F": { 6600};
	  case "O_SDV_01_F": { 30000};
	  case "B_Boat_Transport_01_F": { 900};
	  case "C_Boat_Civil_01_police_F": { 6000};
	  case "B_SDV_01_F": { 30000};
	  case "B_Boat_Armed_01_minigun_F": { 40000};
	  case "B_Heli_Transport_03_F": {50000};
	  case "B_Heli_Transport_03_unarmed_F": {50000};
	  case "O_Heli_Transport_04_F": {50000};
	  case "O_Heli_Transport_04_ammo_F": {50000};
	  case "O_Heli_Transport_04_box_F": {50000};
	  case "O_Heli_Transport_04_medevac_F": {50000};
	  case "O_Heli_Transport_04_fuel_F": {50000};
	  case "O_Heli_Transport_04_bench_F": {50000};
	  case "O_Heli_Transport_04_repair_F": {50000};
	  case "O_Heli_Transport_04_covered_F": {50000};
	  case "C_Heli_Light_01_civil_F": {25000};
	  
	  default { -1};
	 };
	  
		if(_price == -1) exitWith { hint "Você não pode segurar este tipo de veículo";
	};
	  
		if(playerSide == independent) then 
	  { _price = _price / 4; };
	  
	  _price = (_price * __GETC__(life_vip_discount));
	  
		if(life_myfunds < _price) exitWith { hint format["Você não tem dinheiro suficiente em sua conta bancária para concluir esta transação, que exige $%1",_price];
		};
	  hint format["Você foi cobrado $%1 para segurar este veículo . Se ele explode, ele será colocado de volta dentro de sua garagem .",_price];
	  
	  ["atm","take",_price] call life_fnc_updateCash;closeDialog 0;
	  
	  _vehicle setVariable["isInsured",true,true];
	  
	  [[_vehicle],"TON_fnc_vehicleInsurance",false,false] spawn life_fnc_MP; 
