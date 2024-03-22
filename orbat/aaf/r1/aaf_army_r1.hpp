//================================================//
// == REGIMENTS ==================================//
//================================================//

    //== RÉGIMENT MÉCANISÉ ==//
	class AAF_R1: RegimentInfanterieMecanise {
		id=1;
		side= "Resistance";
		commander="Ioannou";
        subordinates[]= {"AAF_R1_CC","AAF_R1_C1","AAF_R1_C2","AAF_R1_C3","AAF_R1_C4","AAF_R1_C5"};

    };

//================================================//
// == COMPAGNIES =================================//
//================================================//

	#include "c1\aaf_army_r1_c1.hpp"
	#include "c2\aaf_army_r1_c2.hpp"
	#include "c3\aaf_army_r1_c3.hpp"
	#include "c4\aaf_army_r1_c4.hpp"
	#include "c5\aaf_army_r1_c5.hpp"
	#include "cc\aaf_army_r1_cc.hpp"