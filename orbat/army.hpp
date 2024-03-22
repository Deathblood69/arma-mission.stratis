//================================================//
// == REGIMENTS ==================================//
//================================================//

	class RegimentInfanterieMecanise {
        idType=0;
		side="Unknown";
		size="Regiment";
		type="MechanizedInfantry";
        commanderRank="Colonel";
		text="%1 %3 %2";
		textShort="%1 %3 %2";
    };

    class RegimentAppui {
        idType=0;
        side="Unknown";
        size="Regiment";
        type="Support";
        commanderRank="Colonel";
        text="%1 %3 %2";
        textShort="%3 %2";
    };

    class EscadreAerien {
        idType=2;
        side="Unknown";
        size="Regiment";
        type="CombatAviation";
        commanderRank="Colonel";
        text="%1 %3 %2";
        textShort="%3 %2";
        subordinates[]= {};
    };

    class RegimentNaval {
        idType=2;
		side="Unknown";
		size="Regiment";
		type="Maritime";
        commanderRank="Colonel";
        text="%3 %2";
        textShort="%3 %2";
 	};

//================================================//
// == COMPAGNIES =================================//
//================================================//

	class CompagnieCommandement {
        idType=2;
        side="Unknown";
        size="Company";
        type="HQ";
        commanderRank="Captain";
        text="%3 %2";
        textShort="%3";
	};

	class CompagnieInfanterie {
        idType=2;
        side="Unknown";
        size="Company";
        type="Infantry";
        commanderRank="Captain";
        text="%3 %2 %1";
        textShort="%3 %1";
	};

	class CompagnieInfanterieMecanise {
        idType=2;
        side="Unknown";
        size="Company";
        type="MechanizedInfantry";
        commanderRank="Captain";
        text="%3 %2 %1";
        textShort="%3 %1";
	};

	class CompagnieBlinde {
        idType=2;
        side="Unknown";
        size="Company";
        type="Armored";
        commanderRank="Captain";
        text="%3 %2 %1";
        textShort="%3 %1";
    };


	class CompagnieSupport {
        idType=2;
        side="Unknown";
        size="Company";
        type="Support";
        commanderRank="Captain";
        text="%3 %2 %1";
        textShort="%3 %2";
	};

	class EscadronCommandement {
        idType=0;
        side="Unknown";
        size="Squadron";
        type="HQ";
        commanderRank="Captain";
        text="%3 %2";
        textShort="%2";
	};

	class EscadronAviation {
	    idType=0;
	    side="Unknown";
	    size="Squadron";
	    type="Fighter";
	    commanderRank="Captain";
	    text=" %1 %3 %2";
	    textShort="%1 %3";
	};

//================================================//
// == SECTIONS ===================================//
//================================================//

	class SectionCommandement {
        idType=0;
        side="Unknown";
        size="Section";
        type="HQ";
        commanderRank="Captain";
        text="%3 %2";
        textShort="%3 %2";
	};

    class SectionInfanterie {
        idType=0;
        side="Unknown";
        size="Section";
        type="Infantry";
		commanderRank="Lieutenant";
	    text="%1 %3 ";
	    textShort="%1 %3";
	};

//================================================//
// == ESCOUADES ==================================//
//================================================//

	class EscouadeCommandementInfanterie {
        idType=0;
        side="Unknown";
        size="Squad";
        type="HQ";
        commanderRank="Major";
        text="%3 %2";
        textShort="%3 %2";
	};

    class EscouadeInfanterie {
        idType=0;
        side="Unknown";
        size="Squad";
        type="Infantry";
		commanderRank="Sergeant";
	    text="%1 %3 ";
	    textShort="%1 %3";
	};
