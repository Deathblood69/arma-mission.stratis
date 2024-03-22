//================================================//
// == ARMEE ======================================//
//================================================//

	class AAF {
        id=1;
		idType=0;
		side= "Resistance";
		size="Army";
		type="HQ";
		texture="a3\missions_f_epa\data\img\orbat\I_AAF_ca.paa";
		color[]= {255,255,255,1};
		insignia="a3\missions_f_epa\data\img\orbat\I_AAF_ca.paa";
		colorInsignia[]= {0,0,0,1};
		commanderRank="General";
		commander="Akhenteros";
		text="Forces Armées d'Altis";
		textShort="AAF";
		description="Forces armées de l'après-guerre civile, loyales au nouveau gouvernement radical d'Altis. Faction restreinte mais en pleine croissance, au prise depuis longtemps avec les rebelles de la FIA";
		subordinates[]= {"AAF_R1","AAF_R2","AAF_R3","AAF_R4"};
	};

//================================================//
// == REGIMENTS ==================================//
//================================================//

	//== RÉGIMENT MÉCANISÉ ==//
	#include "r1\aaf_army_r1.hpp"

    //== RÉGIMENT DE SOUTIEN ==//
	#include "r2\aaf_army_r2.hpp"

	//== RÉGIMENT AÉRIEN ==//
    #include "r3\aaf_army_r3.hpp"

    //== RÉGIMENT NAVAL ==//
	#include "r4\aaf_army_r4.hpp"
