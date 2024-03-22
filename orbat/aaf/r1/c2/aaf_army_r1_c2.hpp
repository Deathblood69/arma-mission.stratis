//================================================//
// == COMPAGNIES =================================//
//================================================//

	class AAF_R1_C2 : CompagnieInfanterie {
        id=2;
        side= "Resistance";
		commander="Malas";
		subordinates[]= {"AAF_R1_C2_SC", "AAF_R1_C2_S1", "AAF_R1_C2_S2", "AAF_R1_C2_S3", "AAF_R1_C2_S4", "AAF_R1_C2_S5", };
	};

//================================================//
// == SECTIONS ===================================//
//================================================//

	#include "aaf_army_r1_c2_s1.hpp"
	#include "aaf_army_r1_c2_s2.hpp"
	#include "aaf_army_r1_c2_s3.hpp"
	#include "aaf_army_r1_c2_s4.hpp"
	#include "aaf_army_r1_c2_s5.hpp"
	#include "aaf_army_r1_c2_sc.hpp"