//================================================//
// == ARMEE ======================================//
//================================================//

	class NATO {
        id=1;
		idType=0;
		side="West";
		size="Army";
		type="HQ";
		texture="a3\missions_f_epa\data\img\orbat\B_NATO_ca.paa";
		insignia="a3\missions_f_epa\data\img\orbat\B_Aegis_ca.paa";
		commanderRank="Major";
		commander="Akhenteros";
		text="Organisation de l'Atlantique Nord";
		textShort="OTAN";
		description="";
		subordinates[]= {};
	};

//================================================//
// == REGIMENTS ==================================//
//================================================//

//================================================//
// == COMPAGNIES =================================//
//================================================//

//================================================//
// == SECTIONS ===================================//
//================================================//

    class NATO_S1 : SectionInfanterie {
        id=1;
        side= "West";
        commander="Miller";
        text="Falcon"
        textShort="Falcon"
        description="Les derniers survivants de la FO Aegis, dirigé par le capitaine Scott Miller (UKSF)"
    	subordinates[]= {"NATO_S1_E1", "NATO_S1_E2", "NATO_S1_E3", "NATO_S1_E4"};
    };

//================================================//
// == ESCOUADES ==================================//
//================================================//

    class NATO_EscouadeInfanterie : EscouadeInfanterie {
        idType=2
        side= "West";
        text="%3 %1"
        textShort="%3 %1"

    }

    class NATO_S1_E1 : NATO_EscouadeInfanterie {
        id=1;
        commander="Conway";
    	assets[]= {};
    };


    class NATO_S1_E2 : NATO_EscouadeInfanterie {
        id=2;
        commander="Lacey";
    	assets[]= {};
    };

    class NATO_S1_E3 : NATO_EscouadeInfanterie {
        id=3;
        commander="Mitchell";
        assets[]= {};
    };

    class NATO_S1_E4 : NATO_EscouadeInfanterie {
        id=4;
        commander="James";
        assets[]= {};
    };

