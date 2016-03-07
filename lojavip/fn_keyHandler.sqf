#include <macro.h>
/*
	File: fn_keyHandler.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Main key handler for event 'keyDown'
*/
private ["_handled","_shift","_alt","_code","_ctrl","_alt","_ctrlKey","_veh","_locked","_interactionKey","_mapKey","_interruptionKeys"];
_ctrl = SEL(_this,0);
_code = SEL(_this,1);
_shift = SEL(_this,2);
_ctrlKey = SEL(_this,3);
_alt = SEL(_this,4);
_speed = speed cursorTarget;
_handled = false;

_interactionKey = if((EQUAL(count (actionKeys "User10"),0))) then {219} else {(actionKeys "User10") select 0};
_mapKey = SEL(actionKeys "ShowMap",0);
//hint str _code;
_interruptionKeys = [17,30,31,32]; //A,S,W,D

//Vault handling...
if((_code in (actionKeys "GetOver") || _code in (actionKeys "salute")) && {(player GVAR ["restrained",false])}) exitWith {
	true;
};

if(life_action_inUse) exitWith {
	if(!life_interrupted && _code in _interruptionKeys) then {life_interrupted = true;};
	_handled;
};

//Hotfix for Interaction key not being able to be bound on some operation systems.
if(!(EQUAL(count (actionKeys "User10"),0)) && {(inputAction "User10" > 0)}) exitWith {
	//Interaction key (default is Left Windows, can be mapped via Controls -> Custom -> User Action 10)
	if(!life_action_inUse) then {
		[] spawn {
			private "_handle";
			_handle = [] spawn life_fnc_actionKeyHandler;
			waitUntil {scriptDone _handle};
			life_action_inUse = false;
		};
	};
	true;
};

switch (_code) do {
	//Space key for Jumping
	case 57: {
		if(isNil "jumpActionTime") then {jumpActionTime = 0;};
		if(_shift && {!(EQUAL(animationState player,"AovrPercMrunSrasWrflDf"))} && {isTouchingGround player} && {EQUAL(stance player,"STAND")} && {speed player > 2} && {!life_is_arrested} && {SEL((velocity player),2) < 2.5} && {time - jumpActionTime > 1.5}) then {
			jumpActionTime = time; //Update the time.
			[player,true] spawn life_fnc_jumpFnc; //Local execution
			[[player,false],"life_fnc_jumpFnc",nil,FALSE] call life_fnc_MP; //Global execution
			_handled = true;
		};
	};

	case 2:
	{
		if (player getVariable["restrained",false]) then
		{
			hint "You're restrained!";
		}
		else
		{
			if(dialog) exitWith {};
			[] call life_fnc_wantedMenu;
		};
	};

	case 3:
	{
		if (player getVariable["restrained",true]) then
		{
			hint "You cannot open your cell phone when you're restrained!";
		}
		else
		{
			createDialog "life_my_smartphone";
		};
	};

	//Lower Sound - KEY SHIFT + P
	
	//case 25:
	//{
	//if(_shift) then
	//	{
	//		[] call life_fnc_earplugs;
	//		_handled = true;
	//	};
	//};
	
	
			case 25:
				{	
					if(_shift) then 
						{		
							switch (player getVariable["Earplugs",0]) do 
								{			
								case 0: {hintSilent "Ear Plugs 90%"; 1 fadeSound 0.1; player setVariable ["Earplugs", 10]; };			
								case 10: {hintSilent "Ear Plugs 60%"; 1 fadeSound 0.4; player setVariable ["Earplugs", 40]; };			
								case 40: {hintSilent "Ear Plugs 30%"; 1 fadeSound 0.7; player setVariable ["Earplugs", 70]; };			
								case 70: {hintSilent "Ear Plugs Removido"; 1 fadeSound 1; player setVariable ["Earplugs", 0]; };		
								};	
						};
				};

	//Pushup(Shift + 5)
	case 7:
	{
	if(_shift) then {_handled = true;};
		if ((_shift) && (vehicle player == player)) then
		{
			cutText [format["Pushup!!!!!!"], "PLAIN DOWN"];
			player playMove "AmovPercMstpSnonWnonDnon_exercisePushup";
		};
	};

	//Map Key
	case _mapKey: {
		switch (playerSide) do {
			case west: {if(!visibleMap) then {[] spawn life_fnc_copMarkers;}};
			case independent: {if(!visibleMap) then {[] spawn life_fnc_medicMarkers;}};
			case civilian: {if(!visibleMap) then {[] spawn life_fnc_gangMarkers;}};
		};
	};

	//3 = Dynamic Market
	case 4:
	{
		if(playerSide == civilian && player getVariable["restrained",true])  then
		{
			hint "You cannot open the market prices while restrained"
		}
		else
		{
		createDialog "life_dynmarket_prices";
		};
	};

	//Holster / recall weapon.
	case 35: {
		if ((vehicle player) == player) then {
			if(!(EQUAL(currentWeapon player,""))) then {
				life_curWep_h = currentWeapon player;
				player action ["SwitchWeapon", player, player, 100];
				player switchCamera cameraView;
			}else{
				if(life_curWep_h in [RIFLE,LAUNCHER,PISTOL]) then {
					player selectWeapon life_curWep_h;
				};
			};
		};
	};

	//Interaction key (default is Left Windows, can be mapped via Controls -> Custom -> User Action 10)
	case _interactionKey: {
	if((life_nottoofast != 0) && ((time - life_nottoofast) < 1)) exitWith {};
		life_nottoofast = time;
		if(!life_action_inUse) then {
			[] spawn  {
				private "_handle";
				_handle = [] spawn life_fnc_actionKeyHandler;
				waitUntil {scriptDone _handle};
				life_action_inUse = false;
			};
		};
	};

	//Restraining or robbing (Shift + R)
	case 19:
	{
		if(_shift) then {_handled = true;};
		if(_shift && playerSide == west && !isNull cursorTarget && cursorTarget isKindOf "Man" && (isPlayer cursorTarget) && ((side cursorTarget == civilian) or (side cursorTarget == independent)) && alive cursorTarget && cursorTarget distance player < 3.5 && !(cursorTarget GVAR "Escorting") && !(cursorTarget GVAR "restrained") && speed cursorTarget < 1) then
		{
			[] call life_fnc_restrainAction;
		};
	};

	//Knock out, this is experimental and yeah...
	case 34: {
		if(_shift) then {_handled = true;};
		if(_shift && playerSide == civilian && {!isNull cursorTarget} && {cursorTarget isKindOf "Man"} && {isPlayer cursorTarget} && {alive cursorTarget} && {cursorTarget distance player < 4} && {speed cursorTarget < 1}) then {
			if(!(EQUAL(animationState cursorTarget,"Incapacitated")) && {(EQUAL(currentWeapon player,RIFLE))} OR {EQUAL(currentWeapon player,PISTOL)} && {!(EQUAL(currentWeapon player,""))} && {!life_knockout} && {!(player GVAR ["restrained",false])} && {!life_istazed}) then {
				[cursorTarget] spawn life_fnc_knockoutAction;
			};
		};
	};

	//Tab (surrender)
	case 15:
	{
		if(!_alt && !_ctrlKey && !_shift) then {
			{
				[] call SOCK_fnc_updateRequest;
			};
		if((life_nottoofast != 0) && ((time - life_nottoofast) < 1)) exitWith {};
		life_nottoofast = time;
		
			if (vehicle player == player && !(player GVAR ["restrained", false]) && (animationState player) != "Incapacitated" && !life_istazed) then
			{
				if (player GVAR ["surrender", false]) then
				{
					player SVAR ["surrender", false, true];
				} else
				{
					[] spawn life_fnc_surrender;
				};
			};
		};
	};

	//T Key (Trunk)
	case 20: {
		if(!_alt && !_ctrlKey && !life_is_processing) then {
			if(vehicle player != player && alive vehicle player) then {
				if((vehicle player) in life_vehicles) then {
				
				if((life_nottoofastTrunk != 0) && ((time - life_nottoofastTrunk) < 0.2)) exitWith {};
				life_nottoofastTrunk = time;
				
					player say3D "trunk_open";
					[vehicle player] spawn life_fnc_openInventory;
				};
			} else {
				private "_list";
				_list = ["landVehicle","Air","Ship","House_F"];
				if(KINDOF_ARRAY(cursorTarget,_list) && {player distance cursorTarget < 7} && {vehicle player == player} && {alive cursorTarget}) then {
					if(cursorTarget in life_vehicles OR {!(cursorTarget GVAR ["locked",true])}) then {
					if((life_nottoofastTrunk != 0) && ((time - life_nottoofastTrunk) < 0.2)) exitWith {};
					life_nottoofastTrunk = time;
					
						player say3D "trunk_open";
						[cursorTarget] spawn life_fnc_openInventory;
					};
				};
			};
		} else {
			if (_ctrlKey) then {
				if(isPlayer cursorTarget) then {
					life_smartphoneTarget = cursorTarget;
					_uid = getPlayerUID life_smartphoneTarget;
					{
						if(_uid == getPlayerUID _x) then{
							life_smartphoneTarget = _x;
						};
					} foreach playableUnits;
					createDialog "Life_smartphone_schreiben";
					ctrlSetText[88886, "Message To Target"];
					if((FETCH_CONST(life_adminlevel) < 1)) then
					{
						ctrlShow[888897,false];
					};
				};
			};
		};

		if(!_alt && !_ctrlKey && !life_is_processing) then {
			if(vehicle player != player && alive vehicle player) then {
				if((vehicle player) in life_vehicles) then {
					[vehicle player] call life_fnc_openInventory;
				};
			} else {
				private "_list";
				_list = ["Land_CargoBox_V1_F"];
				if(KINDOF_ARRAY(cursorTarget,_list) && {player distance cursorTarget < 7}) then {
					[cursorTarget] call life_fnc_openInventory;
				};
			};
		};
	};
	
	//F Key
    case 33:
    {
        if(_shift) then
        {
            if(playerSide in [west,independent] && vehicle player != player && !life_siren2_active && ((driver vehicle player) == player)) then {
                if((life_nottoofast != 0) && ((time - life_nottoofast) < 0.2)) exitWith {};
				life_nottoofast = time;
				[] spawn {
                    life_siren2_active = true;
                    sleep 5.199;
                    life_siren2_active = false;
                };

                _veh = vehicle player;
                if(isNil {_veh getVariable "siren2"}) then {_veh setVariable["siren2",false,true];};
                if((_veh getVariable "siren2")) then
                {
                    titleText ["Sirene Secundária OFF","PLAIN"];
                     _veh setVariable["siren2",false,true];
                } else {
                    titleText ["Sirene Secundária ON","PLAIN"];
                    _veh setVariable["siren2",true,true];
                    if(playerSide == west) then {
                        [[_veh],"life_fnc_copSiren2",nil,true] spawn life_fnc_MP;
                    } else {
                        [[_veh],"life_fnc_medicSiren2",nil,true] spawn life_fnc_MP;
                    };
                };
            };
        };

        if (!_shift) then
        {
            if(playerSide in [west,independent] && vehicle player != player && !life_siren_active && ((driver vehicle player) == player)) then
            {
                if((life_nottoofast != 0) && ((time - life_nottoofast) < 0.2)) exitWith {};
				life_nottoofast = time;
				[] spawn
                {
                    life_siren_active = true;
                    sleep 4.943;
                    life_siren_active = false;
                };
                _veh = vehicle player;
                if(isNil {_veh getVariable "siren"}) then {_veh setVariable["siren",false,true];};
                if((_veh getVariable "siren")) then
                {
                    titleText [localize "STR_MISC_SirensOFF","PLAIN"];
                     _veh setVariable["siren",false,true];
                } else {
                    titleText [localize "STR_MISC_SirensON","PLAIN"];
                    _veh setVariable["siren",true,true];
                    if(playerSide == west) then {
                        [[_veh],"life_fnc_copSiren",nil,true] spawn life_fnc_MP;
                    } else {
                        [[_veh],"life_fnc_medicSiren",nil,true] spawn life_fnc_MP;
                    };
                };
            };
        };
    };
	
	//KEYS ANTI-DISCONNECT

	case 62:
	{
		if(_alt) then
			{
				[] spawn
            {
                private["_handle"];
                _handle = [] spawn life_fnc_clearPlayer;
                waitUntil {scriptDone _handle};
				[[1,format["O jogador %1 apertou ALT+F4 e perdeu todos os seus itens.",name player]],"life_fnc_broadcast",nil,false] spawn life_fnc_MP;
				_msg = format["O jogador %1 apertou ALT+F4 e perdeu todos os seus itens.",name player];
				[[0,_msg],"life_fnc_broadcast",true,false] spawn life_fnc_MP;
                [] call SOCK_fnc_updateRequest;
            };		
		};
	};
	case 211:
	{
		if(_ctrlKey && _alt) then
			{
				[] spawn
            {
                private["_handle"];
                _handle = [] spawn life_fnc_clearPlayer;
                waitUntil {scriptDone _handle};
				[[1,format["O jogador %1 apertou CTRL + ALT + DEL e perdeu todos os seus itens.",name player]],"life_fnc_broadcast",nil,false] spawn life_fnc_MP;
				_msg = format["O jogador %1 apertou CTRL + ALT + DEL e perdeu todos os seus itens.",name player];
				[[0,_msg],"life_fnc_broadcast",true,false] spawn life_fnc_MP;
                [] call SOCK_fnc_updateRequest;
			};
		};
	};
	case 1:
	{
		if(_ctrlKey) then
			{
				[] spawn
            {
                private["_handle"];
                _handle = [] spawn life_fnc_clearPlayer;
                waitUntil {scriptDone _handle};
				[[1,format["O jogador %1 apertou CTRL + ESC e perdeu todos os seus itens.",name player]],"life_fnc_broadcast",nil,false] spawn life_fnc_MP;
				_msg = format["O jogador %1 apertou CTRL + ESC e perdeu todos os seus itens.",name player];
				[[0,_msg],"life_fnc_broadcast",true,false] spawn life_fnc_MP;
                [] call SOCK_fnc_updateRequest;
			};
		};
	};
	
	//Picareta
	
	case 16:
		{
		if((!life_action_inUse) && (vehicle player == player)) then                
			{                     
				if(life_inv_pickaxe > 0) then                     
					{                     
						[] spawn life_fnc_pickAxeUse;        	     
					};                
			}	
		};
		
	
	//L Key?
	case 38: {
		//If cop run checks for turning lights on.
		if(_shift && playerSide in [west,independent]) then {
			if(vehicle player != player) then {
				if(playerSide != civilian) then {
					if(playerSide == west) then {
						[vehicle player] call life_fnc_sirenLights;
					} else {
						[vehicle player] call life_fnc_medicSirenLights;
					};
					_handled = true;
				};
			};
		};

		if(!_alt && !_ctrlKey) then { [] call life_fnc_radar; };
	};

	//Y Player Menu
	case 21: {
		if(!_alt && !_ctrlKey && !dialog && !life_is_processing) then {
			[] call life_fnc_p_openMenu;
		};
	};

	 // O, police gate opener
    case 24: {
		if (!_shift && !_alt && !_ctrlKey && (vehicle player != player)) then {
			[] call life_fnc_copOpener;
		};
	};

	//F Key
	case 33:
	{	if (!_shift) then
		{
		if(playerSide in [west,independent] && vehicle player != player && !life_siren_active && ((driver vehicle player) == player)) then
		{
		if((life_nottoofast != 0) && ((time - life_nottoofast) < 0.2)) exitWith {};
				life_nottoofast = time;
			[] spawn
			{
				life_siren_active = true;
				sleep 4.7;
				life_siren_active = false;
			};
			_veh = vehicle player;
			if(isNil {_veh GVAR "siren"}) then {_veh setVariable["siren",false,true];};
			if((_veh GVAR "siren")) then
			{
				titleText ["Sirens Off","PLAIN"];
				_veh setVariable["siren",false,true];
			}
				else
			{
				titleText ["Sirens On","PLAIN"];
				_veh setVariable["siren",true,true];
				if(playerSide == west) then {
					[[_veh],"life_fnc_copSiren",nil,true] spawn life_fnc_MP;
				} else {
					[[_veh],"life_fnc_medicSiren",nil,true] spawn life_fnc_MP;
				};
			};
		};
	};
		if (_shift) then
		{
		if(playerSide in [west] && vehicle player != player && !life_siren2_active && ((driver vehicle player) == player)) then
		{
		if((life_nottoofast != 0) && ((time - life_nottoofast) < 0.2)) exitWith {};
				life_nottoofast = time;
			[] spawn
			{
				life_siren2_active = true;
				sleep 4.7;
				life_siren2_active = false;
			};
			_veh = vehicle player;
			if(isNil {_veh GVAR "siren2"}) then {_veh setVariable["siren2",false,true];};
			if((_veh GVAR "siren2")) then
			{
				titleText ["Yelp Off","PLAIN"];
				_veh setVariable["siren2",false,true];
			}
				else
			{
				titleText ["Yelp On","PLAIN"];
				_veh setVariable["siren2",true,true];
				if(playerSide == west) then {
					[[_veh],"life_fnc_copSiren2",nil,true] spawn life_fnc_MP;
				} else {
					[[_veh],"life_fnc_medicSiren",nil,true] spawn life_fnc_MP;
				};
			};
		};
	};
};

	//U Key [open house/car]
	case 22: {
		if(!_alt && !_ctrlKey) then {
			if(vehicle player == player) then {
				_veh = cursorTarget;
			} else {
				_veh = vehicle player;
			};

			if(_veh isKindOf "House_F" && {playerSide == civilian}) then {
				if(_veh in life_vehicles && player distance _veh < 13) then {
					_door = [_veh] call life_fnc_nearestDoor;
					if(EQUAL(_door,0)) exitWith {hint localize "STR_House_Door_NotNear"};
					_locked = _veh GVAR [format["bis_disabled_Door_%1",_door],0];

					if(EQUAL(_locked,0)) then {
						_veh SVAR [format["bis_disabled_Door_%1",_door],1,true];
						_veh animate [format["door_%1_rot",_door],0];
						systemChat localize "STR_House_Door_Lock";
						_veh say3D "unlock";
					} else {
						_veh SVAR [format["bis_disabled_Door_%1",_door],0,true];
						_veh animate [format["door_%1_rot",_door],1];
						systemChat localize "STR_House_Door_Unlock";
						_veh say3D "unlock";
					};
				};
			} else {
				_locked = locked _veh;
				if(_veh in life_vehicles && player distance _veh < 13) then {
					if(EQUAL(_locked,2)) then {
						if(local _veh) then {
							_veh lock 0;
							_veh animateDoor ["door_back_R",1];
							_veh animateDoor ["door_back_L",1];
							_veh animateDoor ['door_R',1];
							_veh animateDoor ['door_L',1];
							_veh animateDoor ['Door_rear',1];
							_veh animateDoor ['Door_LM',1];
							_veh animateDoor ['Door_RM',1];
							_veh animateDoor ['Door_LF',1];
							_veh animateDoor ['Door_RF',1];
							_veh animateDoor ['Door_LB',1];
							_veh animateDoor ['Door_RB',1];
						} else {
							[[_veh,0],"life_fnc_lockVehicle",_veh,false] call life_fnc_MP;
							_veh animateDoor ["door_back_R",1];
							_veh animateDoor ["door_back_L",1];
							_veh animateDoor ['door_R',1];
							_veh animateDoor ['door_L',1];
							_veh animateDoor ['Door_rear',1];
							_veh animateDoor ['Door_LM',1];
							_veh animateDoor ['Door_RM',1];
							_veh animateDoor ['Door_LF',1];
							_veh animateDoor ['Door_RF',1];
							_veh animateDoor ['Door_LB',1];
							_veh animateDoor ['Door_RB',1];
						};
						if (_veh getVariable ["hooks",false]) then {
							diag_log "Vehicle Unlocked: Hooks upgrade on: Sling Load Ready";
							[[_veh,true],"TON_fnc_changeSlingLoad",false,false] spawn life_fnc_MP;
						};
						systemChat localize "STR_MISC_VehUnlock";
						_veh say3D "unlock";
						if ((typeOf _veh) == "C_SUV_01_F") then {
							[_veh] call life_fnc_lowerCenter;
						};
						if ((typeOf _veh) == "I_Heli_light_03_unarmed_F") then {
							_veh disableTIEquipment true;
						};

					} else {
						if(local _veh) then {
							_veh lock 2;
							_veh animateDoor ["door_back_R",0];
							_veh animateDoor ["door_back_L",0];
							_veh animateDoor ['door_R',0];
							_veh animateDoor ['door_L',0];
							_veh animateDoor ['Door_rear',0];
							_veh animateDoor ['Door_LM',0];
							_veh animateDoor ['Door_RM',0];
							_veh animateDoor ['Door_LF',0];
							_veh animateDoor ['Door_RF',0];
							_veh animateDoor ['Door_LB',0];
							_veh animateDoor ['Door_RB',0];
						} else {
							[[_veh,2],"life_fnc_lockVehicle",_veh,false] call life_fnc_MP;
							_veh animateDoor ["door_back_R",0];
							_veh animateDoor ["door_back_L",0];
							_veh animateDoor ['door_R',0];
							_veh animateDoor ['door_L',0];
							_veh animateDoor ['Door_rear',0];
							_veh animateDoor ['Door_LM',0];
							_veh animateDoor ['Door_RM',0];
							_veh animateDoor ['Door_LF',0];
							_veh animateDoor ['Door_RF',0];
							_veh animateDoor ['Door_LB',0];
							_veh animateDoor ['Door_RB',0];
						};
						if (_veh getVariable ["hooks",false]) then {
							diag_log "Vehicle Locked: Hooks upgrade on: Sling Load Off";
							[[_veh,false],"TON_fnc_changeSlingLoad",false,false] spawn life_fnc_MP;
						};
						systemChat localize "STR_MISC_VehLock";
						_veh say3D "car_lock";
						if ((typeOf _veh) == "I_Heli_light_03_unarmed_F") then {
							_veh disableTIEquipment true;
						};
					};
				};
			};
		};
	};
};


	//Shift+P = Faded Sound
if (_code in (actionKeys "User12")) then {
    [] call life_fnc_earplugs;
    _handled = true;
};


if ((player getVariable["restrained",false] || player getVariable ["downed", false]) && _code in (actionKeys "Throw")) then
{
	systemChat "You can't throw something with your hands bound!";
	_handled = true;
};

if (_code in (actionKeys "User2")) then {
	if(!_alt && !_ctrlKey) then {
		if(player getVariable ["restrained", false]) then {
			hint "You cannot pick up items while you're restrained!";
		} else {
			closeDialog 0;
			createDialog "life_pickup_items";
			_handled = true;
		};
	};
};

if (_code in (actionKeys "User3")) then {
	if(!_alt && !_ctrlKey) then {
		if(player getVariable ["restrained", false]) then {
			hint "You cannot access your inventory while you're restrained!";
		} else {
			closeDialog 0;
			createDialog "life_inventory_menu";
			_handled = true;
		};
	};
};


if ((player getVariable["restrained",false]) && (_code in (actionKeys "ShowMap") || _code in (actionKeys "MiniMap") || _code in (actionKeys "MiniMapToggle"))) then
{
	systemChat "You can't view maps while restrained!" ;
	_handled = true;
};



if (_code in (actionKeys "User11")) then {
	closeDialog 0;
	if(([false,"redgull",1] call life_fnc_handleInv)) then
	{
		life_thirst = 100;
		player setFatigue 0;
		life_redgull_effect = time;
		titleText["You now have 3 minutes of Unlimited Stamina!","PLAIN"];
		player enableFatigue false;
		[] spawn
		{
			waitUntil {!alive player OR ((time - life_redgull_effect) > (3 * 60))};
			player enableFatigue true;
		};
		[] call life_fnc_hudUpdate;
	};
	_handled = true;
};

_handled;
