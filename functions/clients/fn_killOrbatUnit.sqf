/*
	author: Romain
	description: none
	returns: nothing
*/
params ["_orbat"];

hint(_orbat);
[missionConfigFile >> "CfgORBAT" >> _orbat, "mil_destroy", [1,0,0,1], 1.2,1.2,45] call BIS_fnc_ORBATAddGroupOverlay;