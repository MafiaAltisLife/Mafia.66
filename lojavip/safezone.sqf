#include <macro.h>
/*
    GrenadeStop v0.8 for ArmA 3 Alpha by Bake (tweaked slightly by Rarek)
    
    DESCRIPTION:
    Stops players from throwing grenades in safety zones.
    
    CONFIGURATION:
    Edit the #defines below.
*/

#define SAFETY_ZONES [
["safe_kavala", 300], 
["safe_athira", 200], 
["safe_vip", 70], 
["safe_rebelde_1", 70],
["safe_rebelde_2", 100],
["safe_hqkavala", 100], 
["safe_hqathira", 50]] 

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
