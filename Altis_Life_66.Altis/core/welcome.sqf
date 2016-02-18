/*
File: welcome.sqf
Author: ZedBuster
Link: opendayz.net/threads/dayz-welcome-message-credits-style.13071/
Description:
Creates an intro on the bottom-right hand corner of the screen.
*/
_onScreenTime = 7; //Zeit wie lange ein Text angezeigt wird
_role1 = "Corleone, Digone e Adrianu"; //In Gelb
_role1names = ["Projetistas"]; //In Weiß
_role2 = "IMPERADOR, Adrianu e Corleone";
_role2names = ["Script"]; 
_role3 = "Corleone e Digone";
_role3names = ["Diretor'"];
_role4 = "Digone";
_role4names = ["Design"];
_role5 = "mafiaaltisbrasil.meuts3.com.br";
_role5names = ["Ts Adress"];
_role6 = "http://hostgamesmafia.forumeiros.com/forum";
_role6names = ["Forum"];
{
sleep 2;
_memberFunction = _x select 0;
_memberNames = _x select 1;
_finalText = format ["<t size='0.70' color='#FFFFFF' align='right'>%1<br /></t>", _memberFunction]; //Changes colours
_finalText = _finalText + "<t size='0.40' color='#f2cb0b' align='right'>";
{_finalText = _finalText + format ["%1<br />", _x]} forEach _memberNames;
_finalText = _finalText + "</t>";
_onScreenTime + (((count _memberNames) - 1) * 0.5);
[
_finalText,
[safezoneX + safezoneW - 0.8,0.50], //DEFAULT: 0.5,0.35
[safezoneY + safezoneH - 0.8,0.7], //DEFAULT: 0.8,0.7
_onScreenTime,
0.5
] spawn BIS_fnc_dynamicText;
sleep (_onScreenTime);
} forEach [
//The list below should have exactly the same amount of roles as the list above
[_role1, _role1names],
[_role2, _role2names],
[_role3, _role3names],
[_role4, _role4names],
[_role5, _role5names],
[_role6, _role6names]
];
