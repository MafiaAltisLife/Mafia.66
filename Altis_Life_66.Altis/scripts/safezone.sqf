#include <macro.h>
/*
    GrenadeStop v0.8 for ArmA 3 Alpha by Bake (tweaked slightly by Rarek)
    
    DESCRIPTION:
    Stops players from throwing grenades in safety zones.
    
    CONFIGURATION:
    Edit the #defines below.
*/

#define SAFETY_ZONES [["safe_area_1", 300], ["safe_area_2", 125], ["safe_area_3", 125], ["safe_area_4", 125], ["safe_area_5", 90], ["safe_area_6", 130], ["safe_area_7", 60], ["safe_area_8", 40], ["safe_area_9", 70], ["safe_area_10", 30], ["safe_area_11", 60], ["safe_area_12", 40], ["safe_area_13", 70], ["safe_area_14", 50]] // Syntax: [["marker1", radius1], ["marker2", radius2], ...]

// Exemplo: [["marker1", radius1], ["marker2", radius2], ...]

#define MESSAGE "Você está em uma safe zone, é proibido cometer crimes aqui!"

     if (isDedicated) exitWith {};
     waitUntil {!isNull player};

    player addEventHandler ["Fired", {
        if ({(_this select 0) distance getMarkerPos (_x select 0) < _x select 1} count SAFETY_ZONES > 0) then{               
            deleteVehicle (_this select 6);
            hint parseText format["<t color='#81bd41'><t align='center'><t size='2'>ATENÇÃO<br/><t color='#d84840'><t size ='1.2'<t align='center'>Você está em uma SafeZone!<br/><t color='#FFFFFF'><t align='center'><t size='1'>Proíbido Matar!<br/><t color='#FFFFFF'><t align='center'><t size='1'>Proíbido Violência!<br/><t color='#FFFFFF'><t align='center'><t size='1'>Proíbido Nocautear!<br/><t color='#FFFFFF'><t align='center'><t size='1'>Proíbido Roubar!<br/>"];
            //titleText [MESSAGE, "PLAIN", 3];          
        };      
    }]; 
