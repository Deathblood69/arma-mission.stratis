//================================================//
// == REGIMENTS ==================================//
//================================================//

    //== RÉGIMENT DE SOUTIEN ==//
	class AAF_R2 : RegimentAppui {
		id=2;
		side= "Resistance";
		commander="Ioannou";
	    description="Régiment de soutien médical et logisitique : sert souvent de nouvelle affectation aux officiers qui ne sont pas assez considérés comme suffisament loyaux pour se voir confier des unités de combat";
	    subordinates[]= {"AAF_R2_C1","AAF_R2_C2","AAF_R2_C3","AAF_R2_C4"};
	};

//================================================//
// == ESCADRONS ==================================//
//================================================//

	#include "aaf_army_r2_c1.hpp"
	#include "aaf_army_r2_c2.hpp"
	#include "aaf_army_r2_c3.hpp"
	#include "aaf_army_r2_c4.hpp"