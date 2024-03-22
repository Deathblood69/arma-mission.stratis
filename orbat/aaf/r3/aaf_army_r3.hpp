//================================================//
// == REGIMENTS ==================================//
//================================================//

    //== RÉGIMENT AÉRIEN ==//
    class AAF_R3 : EscadreAerien {
        id=3;
        side= "Resistance";
        commander="Athaniasiadis";
    	subordinates[]= {"AAF_R3_CC","AAF_R3_C1","AAF_R3_C2","AAF_R3_C3"};
    };

//================================================//
// == ESCADRONS ==================================//
//================================================//

    #include "aaf_army_r3_c1.hpp"
    #include "aaf_army_r3_c2.hpp"
    #include "aaf_army_r3_c3.hpp"
    #include "aaf_army_r3_cc.hpp"