/*
*    ARRAY FORMAT:
*        0: STRING (Classname)
*        1: STRING (Display Name, leave as "" for default)
*        2: SCALAR (Price)
*        4: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*
*   Clothing classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Equipment
*   Backpacks/remaining classnames can be found here (TIP: Search page for "pack"): https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EMPTY
*
*/
class Clothing {
    class bruce {
        title = "STR_Shops_C_Bruce";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_C_Poloshirt_stripped", "Poloshirt stripped", 125, { "", "", -1 } },
            { "U_C_Poloshirt_redwhite", "Poloshirt Red/White", 150, { "", "", -1 } },
            { "U_C_Poloshirt_salmon", "Poloshirt Salmon", 175, { "", "", -1 } },
            { "U_C_Poloshirt_blue", "Poloshirt Blue", 250, { "", "", -1 } },
            { "U_C_Poor_2", "Rag tagged clothes", 250, { "", "", -1 } },
            { "U_C_Poloshirt_burgundy", "Poloshirt Burgundy", 275, { "", "", -1 } },
            { "U_C_Poloshirt_tricolour", "Poloshirt Tricolor", 350, { "", "", -1 } },
            { "U_IG_Guerilla2_2", "Green stripped shirt & Pants", 650, { "", "", -1 } },
            { "U_IG_Guerilla3_1", "Brown Jacket & Pants", 735, { "", "", -1 } },
            { "U_OrestesBody", "Surfing On Land", 1100, { "", "", -1 } },
            { "U_IG_Guerilla2_3", "The Outback Rangler", 1200, { "", "", -1 } },
            { "U_C_HunterBody_grn", "The Hunters Look", 1500, { "", "", -1 } },
            { "U_C_WorkerCoveralls", "Mechanic Coveralls", 2500, { "", "", -1 } },
            { "U_NikosAgedBody", "Casual Wears", 5000, { "", "", -1 } },
            { "A3L_Character_Uniform", "", 2500, { "", "", -1 } },
            { "A3LShirt", "", 2500, { "", "", -1 } },
            { "A3L_Farmer_Outfit", "", 4000, { "", "", -1 } },
            { "A3L_A3LogoPants", "", 5000, { "", "", -1 } },
            { "A3L_Poop2day", "", 2500, { "", "", -1 } },
            { "KAEL_SUITS_BR_F24", "", 15000, { "", "", -1 } },
            { "KAEL_SUITS_BR_F25", "", 15000, { "", "", -1 } },
            { "KAEL_SUITS_BR_F16", "", 15000, { "", "", -1 } },
            { "KAEL_SUITS_BR_F17", "", 15000, { "", "", -1 } },
            { "KAEL_SUITS_BR_F18", "", 15000, { "", "", -1 } },
            { "KAEL_SUITS_BR_F19", "", 15000, { "", "", -1 } },
            { "KAEL_SUITS_BR_F20", "", 15000, { "", "", -1 } },
            { "KAEL_SUITS_BR_F22", "", 15000, { "", "", -1 } },
            { "arma3", "", 5000, { "", "", -1 } },
            { "arma3black", "", 5000, { "", "", -1 } },
            { "ATI", "", 5000, { "", "", -1 } },
            { "BreakingBad", "", 5000, { "", "", -1 } },
            { "Caiden69", "", 5000, { "", "", -1 } },
            { "U_C_Man_casual_2_F", "", 6000, { "", "", -1 } },
            { "U_C_Man_casual_3_F", "", 6000, { "", "", -1 } },
            { "U_C_Man_casual_1_F", "", 6000, { "", "", -1 } },
            { "U_C_Poloshirt_blue", "", 2000, { "", "", -1 } },
            { "U_C_Poloshirt_burgundy", "", 2000, { "", "", -1 } },
            { "U_C_Poloshirt_redwhite", "", 2000, { "", "", -1 } },
            { "U_C_Poloshirt_stripped", "", 2000, { "", "", -1 } },
            { "tacobell", "", 8000, { "", "", -1 } },
            { "dutch", "", 5000, { "", "", -1 } },
            { "hanacd", "", 5000, { "", "", -1 } },
            { "U_OrestesBody", "", 4000, { "", "", -1 } },
            { "nvidia", "", 4000, { "", "", -1 } },
            { "phalps", "", 6000, { "", "", -1 } },
            { "PH", "", 6000, { "", "", -1 } },
            { "RFShirt", "", 3000, { "", "", -1 } },
            { "SFG", "", 7000, { "", "", -1 } },
            { "A3L_SkidRow", "", 3000, { "", "", -1 } },
            { "A3L_SkullBlack", "", 3000, { "", "", -1 } },
            { "TRYK_shirts_DENIM_BK", "", 4000, { "", "", -1 } },
            { "TRYK_U_B_PCUGs_OD_R", "", 5000, { "", "", -1 } },
            { "TRYK_shirts_DENIM_BWH", "", 5000, { "", "", -1 } },
            { "TRYK_shirts_DENIM_od", "", 5000, { "", "", -1 } },
            { "TRYK_shirts_DENIM_R", "", 5000, { "", "", -1 } },
            { "TRYK_shirts_DENIM_RED2", "", 5000, { "", "", -1 } },
            { "TRYK_shirts_DENIM_WH", "", 5000, { "", "", -1 } },
            { "TRYK_shirts_DENIM_WHB", "", 5000, { "", "", -1 } },
            { "TRYK_shirts_DENIM_ylb", "", 5000, { "", "", -1 } },
            { "TRYK_shirts_PAD_BK", "", 5000, { "", "", -1 } },
            { "TRYK_shirts_BLK_PAD_BK", "", 5000, { "", "", -1 } },
            { "TRYK_shirts_OD_PAD_BK", "", 5000, { "", "", -1 } },
            { "TRYK_shirts_TAN_PAD_BK", "", 5000, { "", "", -1 } },
            { "TRYK_shirts_PAD_BL", "", 5000, { "", "", -1 } },
            { "TRYK_shirts_BLK_PAD_BL", "", 5000, { "", "", -1 } },
            { "TRYK_U_pad_hood_CSATBlk", "", 5000, { "", "", -1 } },
            { "U_C_WorkerCoveralls", "", 8000, { "", "", -1 } },
            { "U_C_WorkerCoveralls", "", 8000, { "", "", -1 } },
            { "cg_chelsea1", "", 6000, { "", "", -1 } },
            { "cg_arsenal1", "", 6000, { "", "", -1 } },
            { "cg_australia1", "", 6000, { "", "", -1 } },
            { "cg_awesome1", "", 6000, { "", "", -1 } },
            { "cg_barcelona1", "", 6000, { "", "", -1 } },
            { "cg_bb1", "", 6000, { "", "", -1 } },
            { "cg_beats1", "", 6000, { "", "", -1 } },
            { "cg_bipolar1", "", 6000, { "", "", -1 } },
            { "cg_brazil1", "", 6000, { "", "", -1 } },
            { "cg_burgerking1", "", 6000, { "", "", -1 } },
            { "cg_catvideos1", "", 6000, { "", "", -1 } },
            { "cg_chickens1", "", 6000, { "", "", -1 } },
            { "cg_condoms1", "", 6000, { "", "", -1 } },
            { "cg_csgo1", "", 6000, { "", "", -1 } },
            { "cg_dad1", "", 6000, { "", "", -1 } },
            { "cg_deeznuts1", "", 6000, { "", "", -1 } },
            { "cg_ea1", "", 6000, { "", "", -1 } },
            { "cg_et1", "", 6000, { "", "", -1 } },
            { "cg_evolution1", "", 6000, { "", "", -1 } },
            { "cg_ferrari1", "", 6000, { "", "", -1 } },
            { "cg_fightclub1", "", 6000, { "", "", -1 } },
            { "cg_gamerepeat1", "", 6500, { "", "", -1 } },
            { "cg_herpderp1", "", 6500, { "", "", -1 } },
            { "cg_got1", "", 6500, { "", "", -1 } },
            { "cg_hand1", "", 6500, { "", "", -1 } },
            { "cg_hearts1", "", 6500, { "", "", -1 } },
            { "cg_homer1", "", 6500, { "", "", -1 } },
            { "cg_iamstupid1", "", 6500, { "", "", -1 } },
            { "cg_illuminati1", "", 6500, { "", "", -1 } },
            { "cg_jason1", "", 6500, { "", "", -1 } },
            { "cg_joker1", "", 6500, { "", "", -1 } },
            { "cg_mancity1", "", 8000, { "", "", -1 } },
            { "cg_manchester1", "", 8000, { "", "", -1 } },
            { "cg_turtles1", "", 10000, { "", "", -1 } },
            { "cg_upyours1", "", 11000, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Bandanna_camo", "Camo Bandanna", 120, { "", "", -1 } },
            { "H_Bandanna_surfer", "Surfer Bandanna", 130, { "", "", -1 } },
            { "H_Bandanna_surfer", "", 135, { "", "", -1 } },
            { "H_Bandanna_khk", "Khaki Bandanna", 145, { "", "", -1 } },
            { "H_Cap_blu", "", 150, { "", "", -1 } },
            { "H_Cap_grn", "", 150, { "", "", -1 } },
            { "H_Cap_grn_BI", "", 150, { "", "", -1 } },
            { "H_Cap_oli", "", 150, { "", "", -1 } },
            { "H_Cap_red", "", 150, { "", "", -1 } },
            { "H_Cap_tan", "", 150, { "", "", -1 } },
            { "H_Bandanna_gry", "Grey Bandanna", 150, { "", "", -1 } },
            { "H_Bandanna_sgg", "Sage Bandanna", 160, { "", "", -1 } },
            { "H_Bandanna_cbr", "", 165, { "", "", -1 } },
            { "H_StrawHat", "Straw Fedora", 225, { "", "", -1 } },
            { "H_Hat_tan", "", 265, { "", "", -1 } },
            { "H_Hat_brown", "", 276, { "", "", -1 } },
            { "H_Hat_grey", "", 280, { "", "", -1 } },
            { "H_BandMask_blk", "Hat & Bandanna", 300, { "", "", -1 } },
            { "H_Hat_blue", "", 310, { "", "", -1 } },
            { "H_Hat_checker", "", 340, { "", "", -1 } },
            { "H_Booniehat_tan", "", 425, { "", "", -1 } },
            { "H_Bandanna_surfer", "", 1200, { "", "", -1 } },
            { "H_Bandanna_surfer_blk", "", 1200, { "", "", -1 } },
            { "H_Bandanna_surfer_grn", "", 1200, { "", "", -1 } },
            { "H_Cap_grn_BI", "", 1200, { "", "", -1 } },
            { "H_Cap_blk", "", 1200, { "", "", -1 } },
            { "H_Cap_blk_CMMG", "", 1200, { "", "", -1 } },
            { "H_Cap_grn", "", 1200, { "", "", -1 } },
            { "H_Cap_blk_ION", "", 1200, { "", "", -1 } },
            { "H_Cap_oli", "", 1200, { "", "", -1 } },
            { "H_Cap_oli_hs", "", 1200, { "", "", -1 } },
            { "H_Cap_red", "", 1200, { "", "", -1 } },
            { "H_Cap_surfer", "", 1200, { "", "", -1 } },
            { "H_Cap_tan", "", 1200, { "", "", -1 } },
            { "H_Cap_usblack", "", 1200, { "", "", -1 } },
            { "Kio_Capital_Hat", "", 1200, { "", "", -1 } },
            { "ALE_H_Cowboy_Brown", "", 1500, { "", "", -1 } },
            { "ALE_H_Cowboy_Black", "", 1500, { "", "", -1 } },
            { "ALE_H_Cowboy_White", "", 1500, { "", "", -1 } },
            { "cowboyhat", "", 1500, { "", "", -1 } },
            { "H_Hat_blue", "", 1500, { "", "", -1 } },
            { "H_Hat_brown", "", 1500, { "", "", -1 } },
            { "H_Hat_checker", "", 1500, { "", "", -1 } },
            { "H_Hat_grey", "", 1500, { "", "", -1 } },
            { "H_Hat_tan", "", 1500, { "", "", -1 } },
            { "A3L_mexicanhat", "", 2000, { "", "", -1 } },
            { "ALE_H_NewEra_Redsox", "", 1500, { "", "", -1 } },
            { "ALE_H_NewEra_Rouge", "", 1500, { "", "", -1 } },
            { "ALE_H_NewEra_Lakers", "", 1500, { "", "", -1 } },
            { "ALE_H_NewEra_Superman", "", 1500, { "", "", -1 } },
            { "Kio_Pirate_Hat", "", 1500, { "", "", -1 } },
            { "A3L_sombrero", "", 2000, { "", "", -1 } },
            { "Kio_Spinning_Hat", "", 1400, { "", "", -1 } },
            { "H_StrawHat", "", 1400, { "", "", -1 } },
            { "H_StrawHat_dark", "", 1400, { "", "", -1 } },
            { "TRYK_UA_CAP", "", 1400, { "", "", -1 } },
            { "TRYK_UA_CAP_GR", "", 1400, { "", "", -1 } },
            { "A3L_soa_helmet", "", 1600, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 20, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Shades_Green", "", 20, { "", "", -1 } },
            { "G_Shades_Red", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 25, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 25, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 25, { "", "", -1 } },
            { "G_Sport_Checkered", "", 25, { "", "", -1 } },
            { "G_Sport_Greenblack", "", 25, { "", "", -1 } },
            { "G_Sport_Red", "", 25, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
            { "G_Squares", "", 50, { "", "", -1 } },
            { "G_Aviator", "", 100, { "", "", -1 } },
            { "G_Combat", "", 125, { "", "", -1 } },
            { "G_Lady_Mirror", "", 150, { "", "", -1 } },
            { "G_Lady_Dark", "", 150, { "", "", -1 } },
            { "G_Lady_Blue", "", 150, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_OutdoorPack_blk", "", 500, { "", "", -1 } },
            { "B_AssaultPack_khk", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_dgtl", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_rgr", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_sgg", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_blk", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_mcamo", "", 2000, { "", "", -1 } },
            { "B_TacticalPack_oli", "", 2500, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 3500, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 3500, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 3500, { "", "", -1 } },
            { "B_FieldPack_blk", "", 5000, { "", "", -1 } },
            { "B_FieldPack_ocamo", "", 5000, { "", "", -1 } },
            { "B_FieldPack_oucamo", "", 5000, { "", "", -1 } },
            { "B_Bergen_sgg", "", 6500, { "", "", -1 } },
            { "B_Bergen_mcamo", "", 6500, { "", "", -1 } },
            { "B_Bergen_rgr", "", 6500, { "", "", -1 } },
            { "B_Bergen_blk", "", 6500, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oli", "", 7500, { "", "", -1 } },
            { "B_Carryall_khk", "", 7500, { "", "", -1 } },
            { "B_Carryall_cbr", "", 7500, { "", "", -1 } },
            { "koilbp_19", "", 10000, { "", "", -1 } },
            { "koilbp_2", "", 10000, { "", "", -1 } },
            { "koilaiden", "", 10000, { "", "", -1 } },
            { "koilbatman_1", "", 10000, { "", "", -1 } },
            { "koilbender_1", "", 10000, { "", "", -1 } },
            { "koilbender_2", "", 10000, { "", "", -1 } },
            { "koilbp_10", "", 10000, { "", "", -1 } },
            { "koilbp_11", "", 10000, { "", "", -1 } },
            { "koilbp_6", "", 10000, { "", "", -1 } },
            { "koilbp_5", "", 10000, { "", "", -1 } },
            { "koilbp_12", "", 10000, { "", "", -1 } },
            { "koilbp_3", "", 10000, { "", "", -1 } },
            { "koilclint_1", "", 10000, { "", "", -1 } },
            { "koileagle", "", 10000, { "", "", -1 } },
            { "koileminem_1", "", 10000, { "", "", -1 } },
            { "koilbp_8", "", 10000, { "", "", -1 } },
            { "koilbp_4", "", 10000, { "", "", -1 } },
            { "koilkatie", "", 10000, { "", "", -1 } },
            { "koilgoonsquad", "", 10000, { "", "", -1 } },
            { "koilgraf_1", "", 10000, { "", "", -1 } },
            { "koilgraf_2", "", 10000, { "", "", -1 } },
            { "koilgraf_3", "", 10000, { "", "", -1 } },
            { "koilgucci", "", 10000, { "", "", -1 } },
            { "koilhulk_1", "", 10000, { "", "", -1 } },
            { "koilbp_9", "", 10000, { "", "", -1 } },
            { "koiljoker_1", "", 10000, { "", "", -1 } },
            { "kaelmario", "", 10000, { "", "", -1 } },
            { "kaelmonty", "", 10000, { "", "", -1 } }
        };
    };

    class cop {
        title = "STR_Shops_C_Police";
        license = "";
        side = "cop";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_Rangemaster", "Cop Uniform", 25, { "", "", -1 } },
            { "U_B_CombatUniform_mcam_tshirt", "", 350, { "life_coplevel", "SCALAR", 1 } },
            { "U_B_CombatUniform_mcam_worn", "", 550, { "life_coplevel", "SCALAR", 2 } },
            { "U_B_survival_uniform", "", 1250, { "life_coplevel", "SCALAR", 1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Cap_police", "", 25, { "", "", -1 } },
            { "H_Beret_blk_POLICE", "", 50, { "life_coplevel", "SCALAR", 2 } },
            { "H_HelmetB_plain_mcamo", "", 75, { "life_coplevel", "SCALAR", 1 } },
            { "H_MilCap_mcamo", "", 100, { "life_coplevel", "SCALAR", 2 } },
            { "H_Booniehat_mcamo", "", 120, { "life_coplevel", "SCALAR", 1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Squares", "", 10, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 20, { "", "", -1 } },
            { "G_Sport_Checkered", "", 20, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
            { "G_Shades_Black", "", 25, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
            { "G_Combat", "", 55, { "", "", -1 } },
            { "G_Aviator", "", 100, { "", "", -1 } },
            { "G_Lady_Mirror", "", 150, { "", "", -1 } },
            { "G_Lady_Dark", "", 150, { "", "", -1 } },
            { "G_Lady_Blue", "", 150, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "", 800, { "", "", -1 } },
            { "V_TacVest_blk_POLICE", "", 1000, { "life_coplevel", "SCALAR", 1 } },
            { "V_PlateCarrier2_rgr", "", 1500, { "life_coplevel", "SCALAR", 2 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_FieldPack_cbr", "", 500, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 700, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 800, { "", "", -1 } },
            { "B_Bergen_sgg", "", 2500, { "", "", -1 } },
            { "B_Carryall_cbr", "", 3500, { "", "", -1 } }
        };
    };

    class dive {
        title = "STR_Shops_C_Diving";
        license = "dive";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_B_Wetsuit", "", 2000, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Diving", "", 500, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_RebreatherB", "", 5000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class gun_clothing {
        title = "STR_Shops_C_Gun";
        license = "gun";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "", 4900, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class gang_clothing {
        title = "STR_Shops_C_Gang";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "", 1900, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class med_clothing {
        title = "STR_MAR_EMS_Clothing_Shop";
        license = "";
        side = "med";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_Rangemaster", "EMS Uniform", 50, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Cap_blu", "", 10, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Blue", "", 10, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_FieldPack_oli", "EMS Backpack", 3000, { "", "", -1 } }
        };
    };

    class reb {
        title = "STR_Shops_C_Rebel";
        license = "rebel";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_IG_Guerilla1_1", "", 5000, {"", "", -1} },
            { "U_I_G_Story_Protagonist_F", "", 7500, { "", "", -1 } },
            { "U_I_G_resistanceLeader_F", "", 11500, { "", "", -1 } },
            { "U_IG_leader", "Guerilla Leader", 15340, { "", "", -1 } },
            { "U_O_PilotCoveralls", "", 15610, { "", "", -1 } },
            { "U_O_SpecopsUniform_ocamo", "", 17500, { "", "", -1 } },
            { "U_O_GhillieSuit", "", 50000, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Bandanna_camo", "", 650, { "", "", -1 } },
            { "H_ShemagOpen_khk", "", 800, { "", "", -1 } },
            { "H_ShemagOpen_tan", "", 850, { "", "", -1 } },
            { "H_Shemag_olive", "", 850, { "", "", -1 } },
            { "H_MilCap_oucamo", "", 1200, { "", "", -1 } },
            { "H_HelmetO_ocamo", "", 2500, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 20, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 25, { "", "", -1 } },
            { "G_Sport_Checkered", "", 25, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 25, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 25, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
            { "G_Squares", "", 50, { "", "", -1 } },
            { "G_Combat", "", 125, { "", "", -1 } },
            { "G_Balaclava_blk", "", 150, { "", "", -1 } },
            { "G_Balaclava_combat", "", 150, { "", "", -1 } },
            { "G_Balaclava_lowprofile", "", 150, { "", "", -1 } },
            { "G_Balaclava_oli", "", 150, { "", "", -1 } },
            { "G_Bandanna_aviator", "", 150, { "", "", -1 } },
            { "G_Bandanna_beast", "", 150, { "", "", -1 } },
            { "G_Bandanna_blk", "", 150, { "", "", -1 } },
            { "G_Bandanna_khk", "", 150, { "", "", -1 } },
            { "G_Bandanna_oli", "", 150, { "", "", -1 } },
            { "G_Bandanna_shades", "", 150, { "", "", -1 } },
            { "G_Bandanna_sport", "", 150, { "", "", -1 } },
            { "G_Bandanna_tan", "", 150, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_BandollierB_cbr", "", 4500, { "", "", -1 } },
            { "V_HarnessO_brn", "", 7500, { "", "", -1 } },
            { "V_TacVest_khk", "", 12500, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_OutdoorPack_blk", "", 500, { "", "", -1 } },
            { "B_AssaultPack_khk", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_dgtl", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_rgr", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_sgg", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_blk", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_mcamo", "", 2000, { "", "", -1 } },
            { "B_TacticalPack_oli", "", 2500, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 3500, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 3500, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 3500, { "", "", -1 } },
            { "B_FieldPack_blk", "", 5000, { "", "", -1 } },
            { "B_FieldPack_ocamo", "", 5000, { "", "", -1 } },
            { "B_FieldPack_oucamo", "", 5000, { "", "", -1 } },
            { "B_Bergen_sgg", "", 6500, { "", "", -1 } },
            { "B_Bergen_mcamo", "", 6500, { "", "", -1 } },
            { "B_Bergen_rgr", "", 6500, { "", "", -1 } },
            { "B_Bergen_blk", "", 6500, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oli", "", 7500, { "", "", -1 } },
            { "B_Carryall_khk", "", 7500, { "", "", -1 } },
            { "B_Carryall_cbr", "", 7500, { "", "", -1 } }
        };
    };

    class kart {
        title = "STR_Shops_C_Kart";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_C_Driver_1_black", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_blue", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_red", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_orange", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_green", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_white", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_yellow", "", 1500, { "", "", -1 } },
            { "U_C_Driver_2", "", 3500, { "", "", -1 } },
            { "U_C_Driver_1", "", 3600, { "", "", -1 } },
            { "U_C_Driver_3", "", 3700, { "", "", -1 } },
            { "U_C_Driver_4", "", 3700, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_RacingHelmet_1_black_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_red_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_white_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_blue_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_yellow_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_green_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_2_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_3_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_4_F", "", 2500, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };
};
