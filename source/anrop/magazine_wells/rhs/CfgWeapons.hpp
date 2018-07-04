class cfgWeapons {
    class arifle_MX_Base_F;
    class Launcher_Base_F;
    class Pistol_Base_F;
    class Rifle_Base_F;
    class srifle_EBR_F;
    class UGL_F;

    class rhs_weap_ak74m;
    class rhs_weap_m70_base;
    class rhs_weap_M249_base;

    class GP25_Base : UGL_F {
        magazineWell[] = {"CBA_40mm_GP"};
    };

    class rhs_weap_ak74m_Base_F : Rifle_Base_F {
        magazineWell[] = {"CBA_545x39_AK"};
    };

    class rhs_weap_akm : rhs_weap_ak74m {
        magazineWell[] = {"CBA_762x39_AK"};
    };

    class rhs_weap_asval : rhs_weap_ak74m {
        magazineWell[] = {"CBA_9x39_VSS"};
    };

    class rhs_weap_m4_Base : arifle_MX_Base_F {
        magazineWell[] = {"CBA_556x45_STANAG"};
    };

    class rhs_weap_m14ebrri : srifle_EBR_F {
        magazineWell[] = {"CBA_762x51_M14"};
    };

    class rhs_weap_m70ab2 : rhs_weap_m70_base {
        magazineWell[] = {"CBA_762x39_AK"};
    };

    class rhs_weap_m92 : rhs_weap_m70_base {
        magazineWell[] = {"CBA_762x39_AK"};
    };

    class rhs_weap_m240_base : rhs_weap_M249_base {
        magazineWell[] = {"CBA_762x51_LINKS"};
    };

    class rhs_weap_M320_Base_F : Pistol_Base_F {
        magazineWell[] = {"CBA_40mm_M203"};
    };

    class rhs_weap_rpg7 : Launcher_Base_F {
        magazineWell[] = {"CBA_RPG7"};
    };

    class rhs_weap_saw_base : Rifle_Base_F {
        magazineWell[] = {"CBA_556x45_MINIMI", "CBA_556x45_STANAG"};
    };

    class rhs_weap_sr25 : rhs_weap_m14ebrri {
        magazineWell[] = {"CBA_762x51_SR25"};
    };

    class rhs_weap_svd : rhs_weap_ak74m {
        magazineWell[] = {"CBA_762x54R_SVD"};
    };

    class rhs_weap_XM2010_Base_F: Rifle_Base_F {
        magazineWell[] = {"CBA_300WM_AI"};
    };
};
