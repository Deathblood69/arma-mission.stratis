/*
	author: Romain
	description: Permet de téléporter le joueur et son groupe sur le lieu de la mission
	returns: nothing
*/

params ["_unit", "_marker"];

private _position = getMarkerPos _marker;

private _group = group _unit;

private _leader = leader _group;

{
	private _dir = _leader getDir _x;
	private _dist = _x distance2D _leader;
	_x setPos (_position getPos [_dist, _dir]);
}
forEach units _group - [_leader];

_leader setPos (_position getPos [0, 0]);


