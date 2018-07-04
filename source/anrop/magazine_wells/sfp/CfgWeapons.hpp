class cfgWeapons {
    class Pistol_Base_F;
    class Rifle_Base_F;
    class Rifle_Long_Base_F;
    class srifle_GM6_F;
    class UGL_F;

    class sfp_ag90_base : srifle_GM6_F {
        magazineWell[] = {}; // Not yet defined in CBA
    };

    class sfp_ak4_base : Rifle_Base_F {
        magazineWell[] = {"CBA_762x51_G3"};
    };

    class sfp_ak5_base : Rifle_Base_F {
        magazineWell[] = {"CBA_556x45_STANAG"};

        class sfp_m203 : UGL_F {
            magazineWell[] = {"CBA_40mm_M203"};
        };
    };

    class sfp_g36c_base : Rifle_Base_F {
        magazineWell[] = {"CBA_556x45_G36"};
    };

    class sfp_ksp58 : Rifle_Long_Base_F {
        magazineWell[] = {"CBA_762x51_LINKS"};
    };

    class sfp_ksp90b : Rifle_Long_Base_F {
        magazineWell[] = {"CBA_556x45_MINIMI", "CBA_556x45_STANAG"};
    };

    class sfp_mp5_base : Rifle_Base_F {
        magazineWell[] = {"CBA_9x19_MP5"};
    };

    class sfp_p88: Pistol_Base_F {
        magazineWell[] = {}; // Not yet defined in CBA
    };

    class sfp_p226: Pistol_Base_F {
        magazineWell[] = {"CBA_9x19_P226"};
    };

    class sfp_psg90_base : Rifle_Base_F {
        magazineWell[] = {}; // Not yet defined in CBA
    };
};
