class cfgWeapons {
    class Pistol_Base_F;
    class Rifle_Base_F;
    class UGL_F;

    // HLC AK
    class hlc_ak_base : Rifle_Base_F {
        magazineWell[] = {"CBA_545x39_AK"};

        class hlc_GP30 : UGL_F {
            magazineWell[] = {"CBA_40mm_GP"};
        };
    };
    class hlc_rifle_ak47 : hlc_ak_base {
        magazineWell[] = {"CBA_762x39_AK"};
    };
    class hlc_rifle_RK62 : hlc_ak_base {
        magazineWell[] = {"CBA_762x39_AK"};
    };
    class hlc_rifle_rpk : hlc_ak_base {
        magazineWell[] = {"CBA_762x39_AK"};
    };
    class hlc_rifle_saiga12k : hlc_ak_base {
        magazineWell[] = {"CBA_762x39_AK"};
    };

    class hlc_rifle_slr107u : hlc_ak_base {
        magazineWell[] = {"CBA_762x39_AK"};
    };

    // HLC AR15
    class hlc_ar15_base : Rifle_Base_F {
        magazineWell[] = {"CBA_556x45_STANAG"};

        class hlc_M203 : UGL_F {
            magazineWell[] = {"CBA_40mm_M203"};
        };
    };
    class hlc_rifle_bcmjack;
    class hlc_rifle_bcmblackjack :hlc_rifle_bcmjack
    {
        magazineWell[] = {"CBA_762x35_STANAG"};
    };
    class hlc_rifle_Bushmaster300 : hlc_ar15_base {
        magazineWell[] = {};
    };

    // HLC AWC
    class hlc_AWC_base : Rifle_Base_F {
        magazineWell[] = {"CBA_300WM_AI"};
    };
    
    // HLC G3
    class hlc_g3_base : Rifle_Base_F {
        magazineWell[] = {"CBA_762x51_G3"};
    };
    class hlc_rifle_hk33a2 : hlc_g3_base {
        magazineWell[] = {"CBA_556x45_HK33"};
    };
    class hlc_rifle_hk53 : hlc_g3_base {
        magazineWell[] = {"CBA_556x45_HK33"};
    };

    // HLC MP5
    class hlc_MP5_base : Rifle_Base_F {
        magazineWell[] = {"CBA_9x19_MP5"};
    };
    class hlc_smg_MP5N;
    class hlc_smg_mp510 :hlc_smg_MP5N {
        magazineWell[] = {"CBA_10x25_MP5"};
    };

    // HLC M14
    class hlc_M14_base : Rifle_Base_F {
        magazineWell[] = {"CBA_762x51_M14"};
    };

    // HLC P226
    class hlc_p226_base : Pistol_Base_F {
        magazineWell[] = {"CBA_9x19_P226"};
    };
    class hlc_P226357_Base : hlc_P226_Base {
        magazineWell[] = {"CBA_357SIG_P226"};
    };
    class hlc_P22640_Base : hlc_P226_Base {
        magazineWell[] = {"CBA_40SW_P226"};
    };
    class hlc_P228_Base : hlc_p226_base {
        magazineWell[] = {"CBA_9x19_P228"};
    };
    class hlc_P228357_Base : hlc_P228_Base {
        magazineWell[] = {"CBA_357SIG_P239"};
    };
    class hlc_P22840_Base : hlc_P228_Base {
        magazineWell[] = {"CBA_40SW_P239"};
    };
    class hlc_pistol_P239 : hlc_p226_base {
        magazineWell[] = {"CBA_9x19_P239"};
    };
    class hlc_pistol_P239_357 : hlc_p226_base {
        magazineWell[] = {"CBA_357SIG_P239"};
    };
    class hlc_pistol_P239_40 : hlc_p226_base {
        magazineWell[] = {"CBA_40SW_P239"};
    };

    // HLC SAW
    class hlc_saw_base;
    class hlc_lmg_minimipara : hlc_saw_base {
        magazineWell[] = {"CBA_556x45_MINIMI", "CBA_556x45_STANAG"};
    };
    class hlc_lmg_minimi_railed;
    class hlc_lmg_mk46 : hlc_lmg_minimi_railed {
        magazineWell[] = {"CBA_556x45_MINIMI"};
    };
    class hlc_lmg_mk48 : hlc_saw_base {
        magazineWell[] = {"CBA_762x51_LINKS"};
    };
};
