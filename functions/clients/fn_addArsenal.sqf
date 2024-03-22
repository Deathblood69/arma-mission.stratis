/*
	author: Romain
	description: none
	returns: nothing
*/



this addAction [
      " <img size='2' image='icons\reammo_ca.paa'/><t>Ouvrir Arsenal</t>",
      {
        ["Open", true] spawn BIS_fnc_arsenal;
      }
];