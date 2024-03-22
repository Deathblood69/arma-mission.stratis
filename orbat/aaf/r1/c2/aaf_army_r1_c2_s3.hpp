//================================================//
// == SECTIONS ===================================//
//================================================//

    class AAF_R1_C2_S3 : SectionInfanterie {
	    id=3;
	    side= "Resistance";
		commander="";
		subordinates[]= {"AAF_R1_C2_S3_E1", "AAF_R1_C2_S3_E2", "AAF_R1_C2_S3_E3", "AAF_R1_C2_S3_E4"};
	};

//================================================//
// == ESCOUADES ==================================//
//================================================//

    class AAF_R1_C2_S3_E1 : EscouadeInfanterie {
        id=1;
        side= "Resistance";
		commander="";
		assets[]= {};
	};

    class AAF_R1_C2_S3_E2 : EscouadeInfanterie {
        id=2;
        side= "Resistance";
		commander="";
		assets[]= {};
    };

    class AAF_R1_C2_S3_E3 : EscouadeInfanterie {
        id=3;
        side= "Resistance";
		commander="";
		assets[]= {};
    };

    class AAF_R1_C2_S3_E4 : EscouadeInfanterie {
        id=4;
        side= "Resistance";
		commander="";
		assets[]= {};
    };
