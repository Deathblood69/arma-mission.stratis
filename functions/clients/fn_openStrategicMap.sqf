/*
	author: Romain
	description: none
	returns: nothing
*/

this addAction [
      "<img size='2' image='icons\map_ca.paa'/><t>Ouvrir Carte Stratégique</t>",
      {
         trigger_strategicMap setTriggerStatements ["true", "", ""];
      }
];