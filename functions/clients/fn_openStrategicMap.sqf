/*
	author: Romain
	description: none
	returns: nothing
*/

this addAction [
      "<img size='2' image='icons\map_ca.paa'/><t>Ouvrir Carte Stratégique</t>",
      {
        [openStrategicMap] spawn BIS_fnc_moduleStrategicMapOpen;
      }
];