class CarShops {
    /*
    *    ARRAY FORMAT:
    *        0: STRING (Classname)
    *        1: ARRAY (This is for limiting items to certain things)
    *            0: Variable to read from
    *            1: Variable Value Type (SCALAR / BOOL /EQUAL)
    *            2: What to compare to (-1 = Check Disabled)
    *
    *   BLUFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_WEST
    *   OPFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EAST
    *   Independent Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_GUER
    *   Civilian Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_CIV
    */
    class civ_car {
        side = "civ";
        vehicles[] = {
            { "B_Quadbike_01_F", { "", "", -1 } },
            { "cl3_xr_1000_Blk", { "", "", -1 } },
            { "cl3_xr_1000_Yel", { "", "", -1 } },
            { "cl3_xr_1000_Blu", { "", "", -1 } },
            { "cl3_xr_1000_Red", { "", "", -1 } },
            { "cl3_xr_1000_Green", { "", "", -1 } },
            { "cl3_xr_1000_Org", { "", "", -1 } },
            { "C_Hatchback_01_F", { "", "", -1 } },
            { "Mrshounka_a3_smart_civ", { "", "", -1 } },
            { "Mrshounka_a3_smart_civ_noir", { "", "", -1 } },
            { "Mrshounka_a3_smart_civ_bleu", { "", "", -1 } },
            { "C_Offroad_01_F", { "", "", -1 } },
            { "C_SUV_01_F", { "", "", -1 } },
            { "C_Hatchback_01_sport_F", { "", "", -1 } },
            { "C_Van_01_transport_F", { "", "", -1 } },
            { "sfp_wheelchair", { "", "", -1 } },
            { "Jonzie_Datsun_510", { "", "", -1 } },
            { "Jonzie_Datsun_Z432", { "", "", -1 } },
            { "Mrshounka_corbillard_c", { "", "", -1 } },
            { "Jonzie_30CSLJonzie_30CSL", { "", "", -1 } },
            { "Mrshounka_golfvi_civ", { "", "", -1 } },
            { "cl3_civic_vti_black", { "", "", -1 } },
            { "cl3_civic_vti_red", { "", "", -1 } },
            { "cl3_civic_vti_white", { "", "", -1 } },
            { "cl3_civic_vti_violet", { "", "", -1 } },
            { "Jonzie_Galant", { "", "", -1 } },
            { "Jonzie_Corolla", { "", "", -1 } },
            { "ivory_evox", { "", "", -1 } },
            { "Mrshounka_yamaha_p", { "", "", -1 } },
            { "Mrshounka_yamaha_p_yel", { "", "", -1 } },
            { "Mrshounka_yamaha_p_noir", { "", "", -1 } },
            { "Mrshounka_yamaha_p_white", { "", "", -1 } },
            { "ivory_supra", { "", "", -1 } },
            { "ivory_supra_topsecret", { "", "", -1 } },
            { "ivory_190e", { "", "", -1 } },
            { "Jonzie_Mini_Cooper", { "", "", -1 } },
            { "Jonzie_Mini_Cooper_R_spec", { "", "", -1 } },
            { "ivory_r34", { "", "", -1 } },
            { "Mrshounka_mercedes_190_p_civ", { "", "", -1 } },
            { "Mrshounka_mercedes_190_p_violet", { "", "", -1 } },
            { "Mrshounka_mercedes_190_p_orange", { "", "", -1 } },
            { "Mrshounka_megane_rs_2015_civ", { "", "", -1 } },
            { "Mrshounka_megane_rs_2015_violet", { "", "", -1 } },
            { "Mrshounka_megane_rs_2015_orange", { "", "", -1 } },
            { "cl3_q7_black", { "", "", -1 } },
            { "cl3_q7_blue", { "", "", -1 } },
            { "cl3_q7_light_blue", { "", "", -1 } },
            { "cl3_q7_light_yellow", { "", "", -1 } },
            { "vip_q7_orange", { "", "", -1 } },
            { "vip_q7_silver", { "", "", -1 } },
            { "shounka_transam", { "", "", -1 } },
            { "shounka_transam_bleufonce", { "", "", -1 } },
            { "shounka_transam_violet", { "", "", -1 } },
            { "shounka_transam_orange", { "", "", -1 } },
            { "cl3_e63_amg_black", { "", "", -1 } },
            { "cl3_e63_amg_blue", { "", "", -1 } },
            { "cl3_e63_amg_white", { "", "", -1 } },
            { "cl3_e63_amg_violet", { "", "", -1 } },
            { "cl3_range_rover_black", { "", "", -1 } },
            { "cl3_range_rover_blue", { "", "", -1 } },
            { "cl3_range_rover_white", { "", "", -1 } },
            { "cl3_range_rover_violet", { "", "", -1 } },
            { "Mrshounka_Volkswagen_Touareg_civ", { "", "", -1 } },
            { "Mrshounka_Volkswagen_Touareg_bleufonce", { "", "", -1 } },
            { "Mrshounka_Volkswagen_Touareg_violet", { "", "", -1 } },
            { "Mrshounka_Volkswagen_Touareg_orange", { "", "", -1 } },
            { "Mrshounka_subaru08_civ", { "", "", -1 } },
            { "Mrshounka_subaru08_bleufonce", { "", "", -1 } },
            { "Mrshounka_subaru08_violet", { "", "", -1 } },
            { "Mrshounka_subaru08_orange", { "", "", -1 } },
            { "Mrshounka_r5_noir", { "", "", -1 } },
            { "cl3_s5_yellow", { "", "", -1 } },
            { "cl3_s5_black", { "", "", -1 } },
            { "cl3_s5_red", { "", "", -1 } },
            { "cl3_s5_white", { "", "", -1 } },
            { "cl3_s5_violet", { "", "", -1 } },
            { "ivory_gt500", { "", "", -1 } },
            { "cl3_golf_learner_white", { "", "", -1 } },
            { "A3L_JeepWhiteBlack", { "", "", -1 } },
            { "A3L_JeepGreenBlack", { "", "", -1 } },
            { "A3L_JeepRedTan", { "", "", -1 } },
            { "A3L_JeepRedBlack", { "", "", -1 } },
            { "C_Offroad_02_unarmed_F", { "", "", -1 } },
            { "I_C_Offroad_02_unarmed_F", { "", "", -1 } },
            { "Mrshounka_evox_violet", { "", "", -1 } },
            { "Mrshounka_lincoln_bleufonce", { "", "", -1 } },
            { "Mrshounka_lincoln_rose", { "", "", -1 } },
            { "Mrshounka_lincoln_violet", { "", "", -1 } },
            { "Mrshounka_lincoln_orange", { "", "", -1 } },
            { "Jonzie_Quattroporte", { "", "", -1 } },
            { "Mrshounka_cherokee_noir_bleu", { "", "", -1 } },
            { "Mrshounka_cherokee_noir_bleu_mat", { "", "", -1 } },
            { "Mrshounka_cherokee_noir_violet", { "", "", -1 } },
            { "Mrshounka_cherokee_noir_violet_mat", { "", "", -1 } },
            { "shounka_a3_cliors_civ", { "", "", -1 } },
            { "shounka_a3_cliors_civ_bleufonce", { "", "", -1 } },
            { "shounka_a3_cliors_civ_violet", { "", "", -1 } },
            { "shounka_a3_cliors_civ_orange", { "", "", -1 } },
            { "cl3_volha_grey", { "", "", -1 } },
            { "cl3_volha_black", { "", "", -1 } },
            { "Mrshounka_Vandura_civ", { "", "", -1 } },
            { "Mrshounka_Vandura_civ_bleufonce", { "", "", -1 } },
            { "Mrshounka_Vandura_civ_violet", { "", "", -1 } },
            { "Mrshounka_Vandura_civ_orange", { "", "", -1 } },
            { "Jonzie_VE", { "", "", -1 } },
            { "Jonzie_Ute", { "", "", -1 } },
            { "shounka_a3_ds4_bleufonce", { "", "", -1 } },
            { "shounka_a3_ds4_violet", { "", "", -1 } },
            { "shounka_a3_ds4_orange", { "", "", -1 } },
            { "Jonzie_XB", { "", "", -1 } },
            { "shounka_gt", { "", "", -1 } },
            { "shounka_gt_bleufonce", { "", "", -1 } },
            { "shounka_gt_violet", { "", "", -1 } },
            { "shounka_gt_orange", { "", "", -1 } },
            { "Mrshounka_mustang_civ", { "", "", -1 } },
            { "Mrshounka_Bowler_c", { "", "", -1 } },
            { "Mrshounka_Bowler_c_bleufonce", { "", "", -1 } },
            { "Mrshounka_Bowler_c_violet", { "", "", -1 } },
            { "Mrshounka_Bowler_c_orange", { "", "", -1 } },
            { "ivory_e36", { "", "", -1 } },
            { "Jonzie_Escalade", { "", "", -1 } },
            { "ivory_m3", { "", "", -1 } },
            { "cl3_challenger_2009_F", { "", "", -1 } },
            { "Mrshounka_Alfa_Romeo_bleufonce", { "", "", -1 } },
            { "Mrshounka_Alfa_Romeo_violet", { "", "", -1 } },
            { "Mrshounka_Alfa_Romeo_orange", { "", "", -1 } },
            { "Mrshounka_rs4_civ_bleufonce", { "", "", -1 } },
            { "Mrshounka_rs4_civ_violet", { "", "", -1 } },
            { "Mrshounka_rs4_civ_orange", { "", "", -1 } },
            { "ivory_rs4", { "", "", -1 } },
            { "shounka_rs6", { "", "", -1 } },
            { "shounka_rs6_bleufonce", { "", "", -1 } },
            { "shounka_rs6_violet", { "", "", -1 } },
            { "shounka_rs6_orange", { "", "", -1 } },
            { "Mrshounka_bmwm1_civ", { "", "", -1 } },
            { "Mrshounka_bmwm1_civ_bleufonce", { "", "", -1 } },
            { "Mrshounka_bmwm1_civ_violet", { "", "", -1 } },
            { "Mrshounka_bmwm1_civ_orange", { "", "", -1 } },
            { "Jonzie_Raptor", { "", "", -1 } },
            { "shounka_avalanche", { "", "", -1 } },
            { "shounka_avalanche_bleufonce", { "", "", -1 } },
            { "shounka_avalanche_violet", { "", "", -1 } },
            { "shounka_avalanche_orange", { "", "", -1 } },
            { "Mrshounka_a3_dodge15_civ_bleufonce", { "", "", -1 } },
            { "Mrshounka_a3_dodge15_civ_violet", { "", "", -1 } },
            { "Mrshounka_a3_dodge15_civ_orange", { "", "", -1 } },
            { "shounka_monsteur_bleufonce", { "", "", -1 } },
            { "shounka_monsteur_violet", { "", "", -1 } },
            { "shounka_monsteur_orange", { "", "", -1 } },
            { "Mrshounka_raptor2_civ", { "", "", -1 } },
            { "Mrshounka_raptor2_bleufonce", { "", "", -1 } },
            { "Mrshounka_raptor2_violet", { "", "", -1 } },
            { "Mrshounka_raptor2_orange", { "", "", -1 } },
            { "Mrshounka_raptor_civ", { "", "", -1 } },
            { "Mrshounka_raptor_bleufonce", { "", "", -1 } },
            { "Mrshounka_raptor_violet", { "", "", -1 } },
            { "Mrshounka_raptor_orange", { "", "", -1 } }
        };
    };
	
    class civ_carSuper {
        side = "civ";
        vehicles[] = {
            { "cl3_chopper_gold", { "", "", -1 } },
            { "cl3_chopper_blue", { "", "", -1 } },
            { "cl3_chopper_green", { "", "", -1 } },
            { "cl3_chopper_red", { "", "", -1 } },
            { "cl3_chopper_silver", { "", "", -1 } },
            { "cl3_lamborghini_gt1_black", { "", "", -1 } },
            { "cl3_lamborghini_gt1_blue", { "", "", -1 } },
            { "cl3_lamborghini_gt1_white", { "", "", -1 } },
            { "cl3_lamborghini_gt1_violet", { "", "", -1 } },
            { "cl3_lamborghini_gt1_flame", { "", "", -1 } },
            { "cl3_lamborghini_gt1_flame1", { "", "", -1 } },
            { "cl3_lamborghini_gt1_flame2", { "", "", -1 } },
            { "cl3_lamborghini_gt1_2tone1", { "", "", -1 } },
            { "cl3_lamborghini_gt1_2tone2", { "", "", -1 } },
            { "cl3_lamborghini_gt1_2tone3", { "", "", -1 } },
            { "Mrshounka_ducati_p_yel", { "", "", -1 } },
            { "Mrshounka_ducati_p_g", { "", "", -1 } },
            { "Mrshounka_ducati_p_v", { "", "", -1 } },
            { "Mrshounka_ducati_p_o", { "", "", -1 } },
            { "Mrshounka_ducati_p_lp", { "", "", -1 } },
            { "Mrshounka_ducati_p_gold", { "", "", -1 } },
            { "Mrshounka_pagani_c_bleufonce", { "", "", -1 } },
            { "Mrshounka_pagani_c_violet", { "", "", -1 } },
            { "Mrshounka_pagani_c_orange", { "", "", -1 } },
            { "cl3_carrera_gt_black", { "", "", -1 } },
            { "cl3_carrera_gt_white", { "", "", -1 } },
            { "cl3_carrera_gt_violet", { "", "", -1 } },
            { "cl3_458_yellow", { "", "", -1 } },
            { "cl3_458_black", { "", "", -1 } },
            { "cl3_458_blue", { "", "", -1 } },
            { "cl3_458_white", { "", "", -1 } },
            { "cl3_458_violet", { "", "", -1 } },
            { "cl3_458_flame1", { "", "", -1 } },
            { "cl3_458_flame2", { "", "", -1 } },
            { "cl3_458_2tone1", { "", "", -1 } },
            { "cl3_458_2tone2", { "", "", -1 } },
            { "cl3_458_2tone3", { "", "", -1 } },
            { "cl3_murcielago_black", { "", "", -1 } },
            { "cl3_murcielago_blue", { "", "", -1 } },
            { "cl3_murcielago_white", { "", "", -1 } },
            { "cl3_murcielago_violet", { "", "", -1 } },
            { "cl3_murcielago_flame", { "", "", -1 } },
            { "cl3_murcielago_flame1", { "", "", -1 } },
            { "cl3_murcielago_flame2", { "", "", -1 } },
            { "cl3_murcielago_2tone1", { "", "", -1 } },
            { "cl3_murcielago_2tone2", { "", "", -1 } },
            { "cl3_murcielago_2tone3", { "", "", -1 } },
            { "cl3_r8_spyder_black", { "", "", -1 } },
            { "cl3_r8_spyder_blue", { "", "", -1 } },
            { "vip_r8_spyder_white", { "", "", -1 } },
            { "vip_r8_spyder_violet", { "", "", -1 } },
            { "vip_r8_spyder_flame", { "", "", -1 } },
            { "vip_r8_spyder_flame1", { "", "", -1 } },
            { "vip_r8_spyder_flame2", { "", "", -1 } },
            { "vip_r8_spyder_2tone1", { "", "", -1 } },
            { "vip_r8_spyder_2tone2", { "", "", -1 } },
            { "vip_r8_spyder_2tone5", { "", "", -1 } },
            { "cl3_reventon_black", { "", "", -1 } },
            { "cl3_reventon_blue", { "", "", -1 } },
            { "cl3_reventon_white", { "", "", -1 } },
            { "cl3_reventon_violet", { "", "", -1 } },
            { "cl3_reventon_flame", { "", "", -1 } },
            { "cl3_reventon_flame1", { "", "", -1 } },
            { "cl3_reventon_flame2", { "", "", -1 } },
            { "cl3_reventon_2tone1", { "", "", -1 } },
            { "cl3_reventon_2tone2", { "", "", -1 } },
            { "cl3_reventon_2tone3", { "", "", -1 } },
            { "cl3_aventador_lp7004_black", { "", "", -1 } },
            { "cl3_aventador_lp7004_blue", { "", "", -1 } },
            { "cl3_aventador_lp7004_white", { "", "", -1 } },
            { "cl3_aventador_lp7004_violet", { "", "", -1 } },
            { "cl3_aventador_lp7004_flame1", { "", "", -1 } },
            { "cl3_aventador_lp7004_flame2", { "", "", -1 } },
            { "cl3_aventador_lp7004_2tone1", { "", "", -1 } },
            { "cl3_aventador_lp7004_2tone2", { "", "", -1 } },
            { "cl3_aventador_lp7004_2tone3", { "", "", -1 } },
            { "ivory_f1", { "", "", -1 } },
            { "Mrshounka_lykan_c", { "", "", -1 } },
            { "Mrshounka_lykan_c_yel", { "", "", -1 } },
            { "Mrshounka_lykan_c_bleufonce", { "", "", -1 } },
            { "Mrshounka_lykan_c_white", { "", "", -1 } },
            { "Mrshounka_lykan_c_violet", { "", "", -1 } },
            { "Mrshounka_lykan_c_orange", { "", "", -1 } },
            { "ivory_mp4", { "", "", -1 } },
            { "Mrshounka_veneno_c", { "", "", -1 } },
            { "Mrshounka_veneno_c_noir", { "", "", -1 } },
            { "Mrshounka_veneno_c_bleu", { "", "", -1 } },
            { "Mrshounka_veneno_c_jaune", { "", "", -1 } },
            { "ivory_lfa", { "", "", -1 } },
            { "Mrshounka_agera_p", { "", "", -1 } },
            { "mrshounka_huracan_c_bleufonce", { "", "", -1 } },
            { "mrshounka_huracan_c_violet", { "", "", -1 } },
            { "mrshounka_huracan_c_orange", { "", "", -1 } },
            { "ivory_veyron", { "", "", -1 } },
            { "shounka_mp4_bleufonce", { "", "", -1 } },
            { "shounka_mp4_violet", { "", "", -1 } },
            { "shounka_mp4_orange", { "", "", -1 } },
            { "shounka_limo_civ", { "", "", -1 } },
            { "shounka_limo_civ_bleufonce", { "", "", -1 } },
            { "shounka_limo_civ_violet", { "", "", -1 } },
            { "shounka_limo_civ_orange", { "", "", -1 } },
            { "cl3_dbs_volante_black", { "", "", -1 } },
            { "cl3_dbs_volante_blue", { "", "", -1 } },
            { "cl3_dbs_volante_red", { "", "", -1 } },
            { "cl3_dbs_volante_flame", { "", "", -1 } },
            { "cl3_dbs_volante_flame1", { "", "", -1 } },
            { "cl3_dbs_volante_flame2", { "", "", -1 } },
            { "shounka_clk_bleufonce", { "", "", -1 } },
            { "shounka_clk_violet", { "", "", -1 } },
            { "shounka_clk_orange", { "", "", -1 } },
            { "cl3_veyron_F", { "", "", -1 } },
            { "cl3_veyron_lblue_dblue", { "", "", -1 } },
            { "cl3_veyron_black", { "", "", -1 } },
            { "cl3_veyron_red_red", { "", "", -1 } },
            { "ivory_c", { "", "", -1 } },
            { "ivory_elise", { "", "", -1 } },
            { "Mrshounka_bmwm6_civ", { "", "", -1 } },
            { "Mrshounka_bmwm6_bleufonce", { "", "", -1 } },
            { "Mrshounka_bmwm6_violet", { "", "", -1 } },
            { "Mrshounka_bmwm6_orange", { "", "", -1 } },
            { "Mrshounka_jeep_blinde_bleu", { "", "", -1 } },
            { "Mrshounka_jeep_blinde_bleu_mat", { "", "", -1 } },
            { "Mrshounka_jeep_blinde_violet", { "", "", -1 } },
            { "Mrshounka_jeep_blinde_violet_mat", { "", "", -1 } },
            { "Mrshounka_jeep_blinde_rouge", { "", "", -1 } },
            { "Mrshounka_jeep_blinde_rouge_mat", { "", "", -1 } },
            { "shounka_h2", { "", "", -1 } },
            { "shounka_h2_bleufonce", { "", "", -1 } },
            { "shounka_h2_violet", { "", "", -1 } },
            { "shounka_h2_orange", { "", "", -1 } },
            { "Mrshounka_hummer_civ", { "", "", -1 } },
            { "Mrshounka_hummer_civ_bleufonce", { "", "", -1 } },
            { "Mrshounka_hummer_civ_violet", { "", "", -1 } },
            { "Mrshounka_hummer_civ_orange", { "", "", -1 } },
            { "cl3_z4_2008_black", { "", "", -1 } },
            { "cl3_z4_2008_blue", { "", "", -1 } },
            { "cl3_z4_2008_orange", { "", "", -1 } },
            { "cl3_z4_2008_purple", { "", "", -1 } },
            { "cl3_z4_2008_white", { "", "", -1 } },
            { "shounka_f430_spider", { "", "", -1 } },
            { "shounka_f430_spider_bleufonce", { "", "", -1 } },
            { "shounka_f430_spider_jaune", { "", "", -1 } },
            { "shounka_f430_spider_violet", { "", "", -1 } },
            { "shounka_f430_spider_orange", { "", "", -1 } },
            { "Jonzie_Viper", { "", "", -1 } },
            { "shounka_porsche911", { "", "", -1 } },
            { "shounka_porsche911_bleufonce", { "", "", -1 } },
            { "shounka_porsche911_violet", { "", "", -1 } },
            { "shounka_porsche911_orange", { "", "", -1 } },
            { "mrshounka_92_civ", { "", "", -1 } },
            { "mrshounka_92_civ_bleufonce", { "", "", -1 } },
            { "mrshounka_92_civ_violet", { "", "", -1 } },
            { "mrshounka_92_civ_orange", { "", "", -1 } },
            { "ivory_isf", { "", "", -1 } },
            { "Mrshounka_a3_gtr_civ", { "", "", -1 } },
            { "Mrshounka_a3_gtr_civ_bleu", { "", "", -1 } },
            { "Mrshounka_cayenne_p_civ", { "", "", -1 } },
            { "Mrshounka_c63_2015_bleufonce", { "", "", -1 } },
            { "Mrshounka_c63_2015_violet", { "", "", -1 } },
            { "Mrshounka_c63_2015_orange", { "", "", -1 } },
            { "cl3_arielatom_race_black", { "", "", -1 } },
            { "cl3_arielatom_race_blue", { "", "", -1 } },
            { "cl3_arielatom_race_red", { "", "", -1 } },
            { "cl3_arielatom_race_green", { "", "", -1 } },
            { "Mrshounka_a3_308_rcz", { "", "", -1 } },
            { "Mrshounka_a3_308_rcz_bleufonce", { "", "", -1 } },
            { "Mrshounka_a3_308_rcz_violet", { "", "", -1 } },
            { "Mrshounka_a3_308_rcz_orange", { "", "", -1 } }
        };
    };

    class kart_shop {
        side = "civ";
        vehicles[] = {
            { "C_Kart_01_Blu_F", { "", "", -1 } },
            { "C_Kart_01_Fuel_F", { "", "", -1 } },
            { "C_Kart_01_Red_F", { "", "", -1 } },
            { "C_Kart_01_Vrana_F", { "", "", -1 } }
        };
    };

    class civ_truck {
        side = "civ";
        vehicles[] = {
            { "C_Van_01_box_F", { "", "", -1 } },
            { "I_Truck_02_transport_F", { "", "", -1 } },
            { "I_Truck_02_covered_F", { "", "", -1 } },
            { "B_Truck_01_transport_F", { "", "", -1 } },
            { "O_Truck_03_transport_F", { "", "", -1 } },
            { "O_Truck_03_covered_F", { "", "", -1 } },
            { "B_Truck_01_box_F", { "", "", -1 } },
            { "O_Truck_03_device_F", { "", "", -1 } },
            { "C_Van_01_fuel_F", { "", "", -1 } },
            { "I_Truck_02_fuel_F", { "", "", -1 } },
            { "B_Truck_01_fuel_F", { "", "", -1 } }
        };
    };

    class civ_air {
        side = "civ";
        vehicles[] = {
            { "C_Heli_Light_01_civil_F", { "", "", -1 } },
            { "B_Heli_Light_01_F", { "", "", -1 } },
            { "O_Heli_Light_02_unarmed_F", { "", "", -1 } }
        };
    };

     class civ_ship {
        side = "civ";
        vehicles[] = {
            { "C_Rubberboat", { "", "", -1 } },
            { "C_Boat_Civil_01_F", { "", "", -1 } },
            { "B_SDV_01_F", { "", "", -1 } }
        };
    };

    class reb_car {
        side = "civ";
        vehicles[] = {
            { "B_Quadbike_01_F", { "", "", -1 } },
            { "B_G_Offroad_01_F", { "", "", -1 } },
            { "O_MRAP_02_F", { "", "", -1 } },
            { "B_Heli_Light_01_stripped_F", { "", "", -1 } },
            { "B_G_Offroad_01_armed_F", { "", "", -1 } }
        };
    };

    class med_shop {
        side = "med";
        vehicles[] = {
            { "C_Offroad_01_F", { "", "", -1 } },
            { "I_Truck_02_medical_F", { "", "", -1 } },
            { "O_Truck_03_medical_F", { "", "", -1 } },
            { "B_Truck_01_medical_F", { "", "", -1 } }
        };
    };

    class med_air_hs {
        side = "med";
        vehicles[] = {
            { "B_Heli_Light_01_F", { "", "", -1 } },
            { "O_Heli_Light_02_unarmed_F", { "", "", -1 } }
        };
    };

    class cop_car {
        side = "cop";
        vehicles[] = {
            { "C_Offroad_01_F", { "", "", -1 } },
            { "C_SUV_01_F", { "", "", -1 } },
            { "C_Hatchback_01_sport_F", { "life_coplevel", "SCALAR", 1 } },
            { "B_MRAP_01_F", { "life_coplevel", "SCALAR", 2 } },
            { "B_MRAP_01_hmg_F", { "life_coplevel", "SCALAR", 3 } }
        };
    };

    class cop_air {
        side = "cop";
        vehicles[] = {
            { "B_Heli_Light_01_F", { "", "", -1 } },
            { "B_Heli_Transport_01_F", { "life_coplevel", "SCALAR", 3 } }
        };
    };

    class cop_ship {
        side = "cop";
        vehicles[] = {
            { "B_Boat_Transport_01_F", { "", "", -1 } },
            { "C_Boat_Civil_01_police_F", { "", "", -1 } },
            { "B_Boat_Armed_01_minigun_F", { "life_coplevel", "SCALAR", 3 } },
            { "B_SDV_01_F", { "", "", -1 } }
        };
    };
};

class LifeCfgVehicles {
    /*
    *    Vehicle Configs (Contains textures and other stuff)
    *
    *    "price" is the price before any multipliers set in Master_Config are applied.
    *
    *    Default Multiplier Values & Calculations:
    *       Civilian [Purchase, Sell]: [1.0, 0.5]
    *       Cop [Purchase, Sell]: [0.5, 0.5]
    *       Medic [Purchase, Sell]: [0.75, 0.5]
    *       ChopShop: Payout = price * 0.25
    *       GarageSell: Payout = price * [0.5, 0.5, 0.5, -1]
    *       Cop Impound: Payout = price * 0.1
    *       Pull Vehicle from Garage: Cost = price * [1, 0.5, 0.75, -1] * [0.5, 0.5, 0.5, -1]
    *           -- Pull Vehicle & GarageSell Array Explanation = [civ,cop,medic,west]
    *
    *       1: ARRAY (license required)
    *         Ex: { "driver", "" , "" , "" } //civilian, independent, east, west
    *         licenses[] = { {"CIV"}, {"COP"}, {"MEDIC"}, {"EAST"} };
    *    Textures config follows { Texture Name, side, {texture(s)path}}
    *    Texture(s)path follows this format:
    *    INDEX 0: Texture Layer 0
    *    INDEX 1: Texture Layer 1
    *    INDEX 2: Texture Layer 2
    *    etc etc etc
    *
    */

    class Default {
        vItemSpace = -1;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

    class I_Truck_02_medical_F {
        vItemSpace = 150;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 25000;
        textures[] = {};
    };

    class O_Truck_03_medical_F {
        vItemSpace = 200;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 45000;
        textures[] = {};
    };

    class B_Truck_01_medical_F {
        vItemSpace = 250;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 60000;
        textures[] = {};
    };

    class C_Rubberboat {
        vItemSpace = 45;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 5000;
        textures[] = { };
    };

    class B_Heli_Transport_01_F {
        vItemSpace = 200;
        licenses[] = { {""}, {"cAir"}, {""}, {""} };
        price = 200000;
        textures[] = {};
    };

    class B_MRAP_01_hmg_F {
        vItemSpace = 100;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 750000;
        textures[] = {
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

    class B_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
        licenses[] = { {""}, {"cg"}, {""}, {""} };
        price = 75000;
        textures[] = { };
    };

    class B_Boat_Transport_01_F {
        vItemSpace = 45;
        licenses[] = { {""}, {"cg"}, {""}, {""} };
        price = 3000;
        textures[] = { };
    };

    class O_Truck_03_transport_F {
        vItemSpace = 285;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 200000;
        textures[] = { };
    };

    class O_Truck_03_device_F {
        vItemSpace = 350;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 450000;
        textures[] = { };
    };

    class Land_CargoBox_V1_F {
        vItemSpace = 5000;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

    class Box_IND_Grenades_F {
        vItemSpace = 350;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

    class B_supplyCrate_F {
        vItemSpace = 700;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

    class B_G_Offroad_01_F {
        vItemSpace = 65;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 12500;
        textures[] = { };
    };

    class B_G_Offroad_01_armed_F {
        vItemSpace = 65;
        licenses[] = { {"rebel"}, {""}, {""}, {""} };
        price = 750000;
        textures[] = { };
    };

    class C_Boat_Civil_01_F {
        vItemSpace = 85;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 22000;
        textures[] = { };
    };

    class C_Boat_Civil_01_police_F {
        vItemSpace = 85;
        licenses[] = { {""}, {"cg"}, {""}, {""} };
        price = 20000;
        textures[] = { };
    };

    class B_Truck_01_box_F {
        vItemSpace = 450;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 350000;
        textures[] = { };
    };

    class B_Truck_01_transport_F {
        vItemSpace = 325;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 275000;
        textures[] = { };
    };

    class O_MRAP_02_F {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = { };
    };

    class C_Offroad_01_F {
        vItemSpace = 65;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 12500;
        textures[] = {
            { "Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa"
            } },
            { "Yellow", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa"
            } },
            { "White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa"
            } },
            { "Blue", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa"
            } },
            { "Dark Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa"
            } },
            { "Blue / White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa"
            } },
            { "Taxi", "civ", {
                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            } },
            { "Police", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            } }
        };
    };

    class C_Kart_01_Blu_F {
        vItemSpace = 20;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 15000;
        textures[] = {};
    };
/*
To edit another information in this classes you can use this exemple.
class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{
    vItemSpace = 40;
    price = ;
};

will modify the virtual space and the price of the vehicle, but other information such as license and textures will pick up the vehicle declare at : Vehicle {};
*/
    class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{}; // Get all information of C_Kart_01_Blu_F
    class C_Kart_01_Red_F  : C_Kart_01_Blu_F{};
    class C_Kart_01_Vrana_F : C_Kart_01_Blu_F{};

    class C_Hatchback_01_sport_F {
        vItemSpace = 45;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 40000;
        textures[] = {
            { "Red", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport01_co.paa"
            } },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport02_co.paa"
            } },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport03_co.paa"
            } },
            { "Black / White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport04_co.paa"
            } },
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport05_co.paa"
            } },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport06_co.paa"
            } },
            { "Police", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            } }
        };
    };

    class B_Quadbike_01_F {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 2500;
        textures[] = {
            { "Brown", "cop", {
                "\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa"
            } },
            { "Digi Desert", "reb", {
                "\A3\Soft_F\Quadbike_01\Data\quadbike_01_opfor_co.paa"
            } },
            { "Black", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_black_co.paa"
            } },
            { "Blue", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_blue_co.paa"
            } },
            { "Red", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_red_co.paa"
            } },
            { "White", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_white_co.paa"
            } },
            { "Digi Green", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_indp_co.paa"
            } },
            { "Hunter Camo", "civ", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } },
            { "Rebel Camo", "reb", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } }
        };
    };

    class I_Truck_02_covered_F {
        vItemSpace = 250;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

    class I_Truck_02_transport_F {
        vItemSpace = 200;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 75000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

    class O_Truck_03_covered_F {
        vItemSpace = 300;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 250000;
        textures[] = {};
    };

    class C_Hatchback_01_F {
        vItemSpace = 40;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 9500;
        textures[] = {
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"
            } },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa"
            } },
            { "Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa"
            } },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"
            } },
            { "Yellow", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa"
            } },
            { "White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa"
            } },
            { "Grey", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa"
            } },
            { "Black", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa"
            } }
        };
    };

    class C_SUV_01_F {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 30000;
        textures[] = {
            { "Dark Red", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"
            } },
            { "Silver", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_03_co.paa"
            } },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_04_co.paa"
            } },
            { "Police", "cop", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_02_co.paa"
            } }
        };
    };

    class C_Van_01_transport_F {
        vItemSpace = 100;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 45000;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } }
        };
    };

    class C_Van_01_box_F {
        vItemSpace = 150;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 60000;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } }
        };
    };

    class B_MRAP_01_F {
        vItemSpace = 65;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 30000;
        textures[] = {
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

     class B_Heli_Light_01_stripped_F {
        vItemSpace = 90;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 275000;
        textures[] = {
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            } }
        };
    };

    class B_Heli_Light_01_F {
        vItemSpace = 90;
        licenses[] = { {"pilot"}, {"cAir"}, {"mAir"}, {""} };
        price = 245000;
        textures[] = {
            { "Police", "cop", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"
            } },
            { "Sheriff", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"
            } },
            { "Civ Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"
            } },
            { "Civ Red", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"
            } },
            { "Blueline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"
            } },
            { "Elliptical", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
            } },
            { "Furious", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
            } },
            { "Jeans Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
            } },
            { "Speedy Redline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
            } },
            { "Sunset", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
            } },
            { "Vrana", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
            } },
            { "Waves Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
            } },
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            } },
            { "Digi Green", "reb", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
            } },
            { "EMS White", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            } }
        };
    };

    class C_Heli_Light_01_civil_F : B_Heli_Light_01_F {
        vItemSpace = 75;
        price = 245000;
    };

    class O_Heli_Light_02_unarmed_F {
        vItemSpace = 210;
        licenses[] = { {"pilot" }, {""}, {"mAir"}, {""} };
        price = 750000;
        textures[] = {
            { "Black", "cop", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
            } },
            { "White / Blue", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"
            } },
            { "Digi Green", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"
            } },
            { "Desert Digi", "reb", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa"
            } },
            { "EMS White", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            } }
        };
    };

    class B_SDV_01_F {
        vItemSpace = 50;
        licenses[] = { {"boat"}, {"cg"}, {""}, {""} };
        price = 150000;
        textures[] = {};
    };

        class C_Van_01_fuel_F {
        vItemSpace = 20;
        vFuelSpace = 19500;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = {
            { "White", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_co.paa"
            } },
            { "Red", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_red_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_red_co.paa"
            } }
        };
    };

    class I_Truck_02_fuel_F {
        vItemSpace = 40;
        vFuelSpace = 42000;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 200000;
        textures[] = {
            { "White", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_fuel_co.paa"
            } }
        };
    };

    class B_Truck_01_fuel_F {
        vItemSpace = 50;
        vFuelSpace = 50000;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 250000;
        textures[] = {};
    };
	
	class cl3_xr_1000_Blk {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 180000;
        textures[] = {};
    };
    class cl3_xr_1000_Yel : cl3_xr_1000_Blk{};
    class cl3_xr_1000_Blu  : cl3_xr_1000_Blk{};
    class cl3_xr_1000_Red : cl3_xr_1000_Blk{};
    class cl3_xr_1000_Green : cl3_xr_1000_Blk{};
    class cl3_xr_1000_Org : cl3_xr_1000_Blk{};
	
	class Mrshounka_a3_smart_civ {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = {};
    };
    class Mrshounka_a3_smart_civ_noir : Mrshounka_a3_smart_civ{}; 
    class Mrshounka_a3_smart_civ_bleu  : Mrshounka_a3_smart_civ{};
	
	class sfp_wheelchair {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 20000;
        textures[] = {};
    };
	
	class Jonzie_Datsun_510 {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 24000;
        textures[] = {};
    };
    class Jonzie_Datsun_510 : Jonzie_Datsun_510{}; 
	
	class Jonzie_Datsun_Z432 {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 29000;
        textures[] = {};
    };
	
	
	class Mrshounka_corbillard_c {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 30000;
        textures[] = {};
    }; 
	
	
	class Jonzie_30CSLJonzie_30CSL {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 40000;
        textures[] = {};
    };
	
	
	class Mrshounka_golfvi_civ {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 50000;
        textures[] = {};
    };  
	
	class cl3_civic_vti_black {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = {};
    };
    class cl3_civic_vti_red : cl3_civic_vti_black{};
    class cl3_civic_vti_white : cl3_civic_vti_black{};
    class cl3_civic_vti_violet : cl3_civic_vti_black{};  
	
	class Jonzie_Galant {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 60000;
        textures[] = {};
    };
	
	class Jonzie_Corolla {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 58000;
        textures[] = {};
    };
    class Jonzie_Corolla : Jonzie_Corolla{};  
	
	class ivory_evox {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 200000;
        textures[] = {};
    };
	
	class Mrshounka_yamaha_p {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 134000;
        textures[] = {};
    };
    class Mrshounka_yamaha_p_yel : Mrshounka_yamaha_p{};
    class Mrshounka_yamaha_p_noir : Mrshounka_yamaha_p{};
    class Mrshounka_yamaha_p_white : Mrshounka_yamaha_p{};  
	
	class ivory_supra {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 240000;
        textures[] = {};
    }; 
	
	
	class ivory_supra_topsecret {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 400000;
        textures[] = {};
    }; 
	
	
	class ivory_190e {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 110000;
        textures[] = {};
    };
	
	
	class Jonzie_Mini_Cooper {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 140000;
        textures[] = {};
    };
	
	
	class Jonzie_Mini_Cooper_R_spec {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 170000;
        textures[] = {};
    };
	
	
	class ivory_r34 {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 240000;
        textures[] = {};
    };
	
	
	class Mrshounka_mercedes_190_p_civ {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 340000;
        textures[] = {};
    };
    class Mrshounka_mercedes_190_p_violet : Mrshounka_mercedes_190_p_civ{};
    class Mrshounka_mercedes_190_p_orange : Mrshounka_mercedes_190_p_civ{};
	
	
	class Mrshounka_megane_rs_2015_civ {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 500000;
        textures[] = {};
    };
    class Mrshounka_megane_rs_2015_violet : Mrshounka_megane_rs_2015_civ{};
    class Mrshounka_megane_rs_2015_orange : Mrshounka_megane_rs_2015_civ{};
	
	
	class cl3_q7_black {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 700000;
        textures[] = {};
    };
    class cl3_q7_blue : cl3_q7_black{};
    class cl3_q7_light_blue : cl3_q7_black{};
    class cl3_q7_light_yellow : cl3_q7_black{};
    class vip_q7_orange : cl3_q7_black{};
    class vip_q7_silver : cl3_q7_black{};
	
	
	class shounka_transam {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 900000;
        textures[] = {};
    };
    class shounka_transam_bleufonce : shounka_transam{};
    class shounka_transam_violet : shounka_transam{};
    class shounka_transam_orange : shounka_transam{};
  
	
	class cl3_e63_amg_black {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 980000;
        textures[] = {};
    };
    class cl3_e63_amg_blue : cl3_e63_amg_black{};
    class cl3_e63_amg_white : cl3_e63_amg_black{};
    class cl3_e63_amg_violet : cl3_e63_amg_black{};
  
	
	class cl3_range_rover_black {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 280000;
        textures[] = {};
    };
    class cl3_range_rover_blue : cl3_range_rover_black{};
    class cl3_range_rover_white : cl3_range_rover_black{};
    class cl3_range_rover_violet : cl3_range_rover_black{};
  
	
	class Mrshounka_Volkswagen_Touareg_civ {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 720000;
        textures[] = {};
    };
    class Mrshounka_Volkswagen_Touareg_bleufonce : Mrshounka_Volkswagen_Touareg_civ{};
    class Mrshounka_Volkswagen_Touareg_violet : Mrshounka_Volkswagen_Touareg_civ{};
    class Mrshounka_Volkswagen_Touareg_orange : Mrshounka_Volkswagen_Touareg_civ{};
  
	
	class Mrshounka_subaru08_civ {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 400000;
        textures[] = {};
    };
    class Mrshounka_subaru08_bleufonce : Mrshounka_subaru08_civ{};
    class Mrshounka_subaru08_violet : Mrshounka_subaru08_civ{};
    class Mrshounka_subaru08_orange : Mrshounka_subaru08_civ{};
  
	
	class Mrshounka_r5_noir {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 520000;
        textures[] = {};
    };
  
	
	class cl3_s5_yellow {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 1120000;
        textures[] = {};
    };
    class cl3_s5_black : cl3_s5_yellow{};
    class cl3_s5_red : cl3_s5_yellow{};
    class cl3_s5_white : cl3_s5_yellow{};
    class cl3_s5_violet : cl3_s5_yellow{};
  
	
	class ivory_gt500 {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 700000;
        textures[] = {};
    };
  
	
	class cl3_golf_learner_white {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 300000;
        textures[] = {};
    };
  
	
	class A3L_JeepWhiteBlack {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 130000;
        textures[] = {};
    };
    class A3L_JeepGreenBlack : A3L_JeepWhiteBlack{};
    class A3L_JeepRedTan : A3L_JeepWhiteBlack{};
    class A3L_JeepRedBlack : A3L_JeepWhiteBlack{};
  
	
	class C_Offroad_02_unarmed_F {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 240000;
        textures[] = {};
    };
  
	
	class I_C_Offroad_02_unarmed_F {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 220000;
        textures[] = {};
    };

  
	
	class Mrshounka_evox_violet {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 500000;
        textures[] = {};
    };
  
	
	class Mrshounka_lincoln_bleufonce {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 360000;
        textures[] = {};
    };
    class Mrshounka_lincoln_rose : Mrshounka_lincoln_bleufonce{};
    class Mrshounka_lincoln_violet : Mrshounka_lincoln_bleufonce{};
    class Mrshounka_lincoln_orange : Mrshounka_lincoln_bleufonce{};
  
	
	class Jonzie_Quattroporte {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 500000;
        textures[] = {};
    };
  
	
	class Mrshounka_cherokee_noir_bleu {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 140000;
        textures[] = {};
    };
    class Mrshounka_cherokee_noir_bleu_mat : Mrshounka_cherokee_noir_bleu{};
    class Mrshounka_cherokee_noir_violet : Mrshounka_cherokee_noir_bleu{};
    class Mrshounka_cherokee_noir_violet_mat : Mrshounka_cherokee_noir_bleu{};
  
	
	class shounka_a3_cliors_civ {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 80000;
        textures[] = {};
    };
    class shounka_a3_cliors_civ_bleufonce : shounka_a3_cliors_civ{};
    class shounka_a3_cliors_civ_violet : shounka_a3_cliors_civ{};
    class shounka_a3_cliors_civ_orange : shounka_a3_cliors_civ{};
  
	
	class cl3_volha_grey {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100000
        textures[] = {};
    };
    class cl3_volha_black : cl3_volha_grey{};
  
	
	class Mrshounka_Vandura_civ {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 130000
        textures[] = {};
    };
    class Mrshounka_Vandura_civ_bleufonce : Mrshounka_Vandura_civ{};
    class Mrshounka_Vandura_civ_violet : Mrshounka_Vandura_civ{};
    class Mrshounka_Vandura_civ_orange : Mrshounka_Vandura_civ{};
  
	
	class Jonzie_VE {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 136000
        textures[] = {};
    };
  
	
	class Jonzie_Ute {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 180000
        textures[] = {};
    };
  
	
	class shounka_a3_ds4_bleufonce {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 140000
        textures[] = {};
    };
    class shounka_a3_ds4_violet : shounka_a3_ds4_bleufonce{};
    class shounka_a3_ds4_orange : shounka_a3_ds4_bleufonce{};
  
	
	class Jonzie_XB {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 500000
        textures[] = {};
    };
  
	
	class shounka_gt {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 700000
        textures[] = {};
    };
    class shounka_gt_bleufonce : shounka_gt{};
    class shounka_gt_violet : shounka_gt{};
    class shounka_gt_orange : shounka_gt{};
  
	
	class Mrshounka_mustang_civ {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 700000
        textures[] = {};
    };
  
	
	class Mrshounka_Bowler_c {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 180000
        textures[] = {};
    };
    class Mrshounka_Bowler_c_bleufonce : Mrshounka_Bowler_c{};
    class Mrshounka_Bowler_c_violet : Mrshounka_Bowler_c{};
    class Mrshounka_Bowler_c_orange : Mrshounka_Bowler_c{};
  
	
	class ivory_e36 {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 180000
        textures[] = {};
    };
  
	
	class Jonzie_Escalade {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 200000
        textures[] = {};
    };

	
	class ivory_m3 {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 800000
        textures[] = {};
    };
    class ivory_m3 : ivory_m3{};

	
	class cl3_challenger_2009_F {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 600000
        textures[] = {};
    };

	
	class Mrshounka_Alfa_Romeo_bleufonce {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 300000
        textures[] = {};
    };
    class Mrshounka_Alfa_Romeo_violet : Mrshounka_Alfa_Romeo_bleufonce{};
    class Mrshounka_Alfa_Romeo_orange : Mrshounka_Alfa_Romeo_bleufonce{};

	
	class Mrshounka_rs4_civ_bleufonce {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 140000
        textures[] = {};
    };
    class Mrshounka_rs4_civ_violet : Mrshounka_rs4_civ_bleufonce{};
    class Mrshounka_rs4_civ_orange : Mrshounka_rs4_civ_bleufonce{};

	
	class ivory_rs4 {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 220000
        textures[] = {};
    };

	
	class shounka_rs6 {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 260000
        textures[] = {};
    };
    class shounka_rs6_bleufonce : shounka_rs6{};
    class shounka_rs6_violet : shounka_rs6{};
    class shounka_rs6_orange : shounka_rs6{};

	
	class Mrshounka_bmwm1_civ {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 320000
        textures[] = {};
    };
    class Mrshounka_bmwm1_civ_bleufonce : Mrshounka_bmwm1_civ{};
    class Mrshounka_bmwm1_civ_violet : Mrshounka_bmwm1_civ{};
    class Mrshounka_bmwm1_civ_orange : Mrshounka_bmwm1_civ{};

	
	class Jonzie_Raptor {
        vItemSpace = 130;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 360000
        textures[] = {};
    };

	
	class shounka_avalanche {
        vItemSpace = 100;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 200000
        textures[] = {};
    };
    class shounka_avalanche_bleufonce : shounka_avalanche{};
    class shounka_avalanche_violet : shounka_avalanche{};
    class shounka_avalanche_orange : shounka_avalanche{};

	
	class Mrshounka_a3_dodge15_civ_bleufonce {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 3200000
        textures[] = {};
    };
    class Mrshounka_a3_dodge15_civ_violet : Mrshounka_a3_dodge15_civ_bleufonce{};
    class Mrshounka_a3_dodge15_civ_orange : Mrshounka_a3_dodge15_civ_bleufonce{};

	
	class shounka_monsteur_bleufonce {
        vItemSpace = 150;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 400000
        textures[] = {};
    };
    class shounka_monsteur_violet : shounka_monsteur_bleufonce{};
    class shounka_monsteur_orange : shounka_monsteur_bleufonce{};

	
	class Mrshounka_raptor2_civ {
        vItemSpace = 180;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 700000
        textures[] = {};
    };
    class Mrshounka_raptor2_bleufonce : Mrshounka_raptor2_civ{};
    class Mrshounka_raptor2_violet : Mrshounka_raptor2_civ{};
    class Mrshounka_raptor2_orange : Mrshounka_raptor2_civ{};

	
	class Mrshounka_raptor_civ {
        vItemSpace = 250;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 1000000
        textures[] = {};
    };
    class Mrshounka_raptor_bleufonce : Mrshounka_raptor_civ{};
    class Mrshounka_raptor_violet : Mrshounka_raptor_civ{};
    class Mrshounka_raptor_orange : Mrshounka_raptor_civ{};

	
	class cl3_chopper_gold {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 1500000
        textures[] = {};
    };
    class cl3_chopper_blue : cl3_chopper_gold{};
    class cl3_chopper_green : cl3_chopper_gold{};
    class cl3_chopper_red : cl3_chopper_gold{};
    class cl3_chopper_silver : cl3_chopper_gold{};;

	
	class cl3_lamborghini_gt1_black {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 16400000
        textures[] = {};
    };
    class cl3_lamborghini_gt1_blue : cl3_lamborghini_gt1_black{};
    class cl3_lamborghini_gt1_white : cl3_lamborghini_gt1_black{};
    class cl3_lamborghini_gt1_violet : cl3_lamborghini_gt1_black{};
    class cl3_lamborghini_gt1_flame : cl3_lamborghini_gt1_black{};
    class cl3_lamborghini_gt1_flame1 : cl3_lamborghini_gt1_black{};
    class cl3_lamborghini_gt1_flame2 : cl3_lamborghini_gt1_black{};
    class cl3_lamborghini_gt1_2tone1 : cl3_lamborghini_gt1_black{};
    class cl3_lamborghini_gt1_2tone2 : cl3_lamborghini_gt1_black{};
    class cl3_lamborghini_gt1_2tone3 : cl3_lamborghini_gt1_black{};

	
	class Mrshounka_ducati_p_yel {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 1700000
        textures[] = {};
    };
    class Mrshounka_ducati_p_g : Mrshounka_ducati_p_yel{};
    class Mrshounka_ducati_p_v : Mrshounka_ducati_p_yel{};
    class Mrshounka_ducati_p_o : Mrshounka_ducati_p_yel{};
    class Mrshounka_ducati_p_lp : Mrshounka_ducati_p_yel{};
    class Mrshounka_ducati_p_gold : Mrshounka_ducati_p_yel{};

	
	class Mrshounka_pagani_c_bleufonce {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 16000000
        textures[] = {};
    };
    class Mrshounka_pagani_c_violet : Mrshounka_pagani_c_bleufonce{};
    class Mrshounka_pagani_c_orange : Mrshounka_pagani_c_bleufonce{};

	
	class cl3_carrera_gt_black {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 15800000
        textures[] = {};
    };
    class cl3_carrera_gt_white : cl3_carrera_gt_black{};
    class cl3_carrera_gt_violet : cl3_carrera_gt_black{};

	
	class cl3_458_yellow {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 15800000
        textures[] = {};
    };
    class cl3_458_yellow : cl3_458_yellow{};
    class cl3_458_black : cl3_458_yellow{};
    class cl3_458_blue : cl3_458_yellow{};
    class cl3_458_white : cl3_458_yellow{};
    class cl3_458_violet : cl3_458_yellow{};
    class cl3_458_flame1 : cl3_458_yellow{};
    class cl3_458_flame2 : cl3_458_yellow{};
    class cl3_458_2tone1 : cl3_458_yellow{};
    class cl3_458_2tone2 : cl3_458_yellow{};
    class cl3_458_2tone3 : cl3_458_yellow{};

	
	class cl3_murcielago_black {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 15000000
        textures[] = {};
    };
    class cl3_murcielago_blue : cl3_murcielago_black{};
    class cl3_murcielago_white : cl3_murcielago_black{};
    class cl3_murcielago_violet : cl3_murcielago_black{};
    class cl3_murcielago_flame : cl3_murcielago_black{};
    class cl3_murcielago_flame1 : cl3_murcielago_black{};
    class cl3_murcielago_flame2 : cl3_murcielago_black{};
    class cl3_murcielago_2tone1 : cl3_murcielago_black{};
    class cl3_murcielago_2tone2 : cl3_murcielago_black{};
    class cl3_murcielago_2tone3 : cl3_murcielago_black{};

	
	class cl3_r8_spyder_black {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 15000000
        textures[] = {};
    };
    class cl3_r8_spyder_blue : cl3_r8_spyder_black{};

	
	class vip_r8_spyder_white {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 15000000
        textures[] = {};
    };
    class vip_r8_spyder_violet : vip_r8_spyder_white{};
    class vip_r8_spyder_flame : vip_r8_spyder_white{};
    class vip_r8_spyder_flame1 : vip_r8_spyder_white{};
    class vip_r8_spyder_flame2 : vip_r8_spyder_white{};
    class vip_r8_spyder_2tone1 : vip_r8_spyder_white{};
    class vip_r8_spyder_2tone2 : vip_r8_spyder_white{};
    class vip_r8_spyder_2tone5 : vip_r8_spyder_white{};

	
	class cl3_reventon_black {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 13400000
        textures[] = {};
    };
    class cl3_reventon_blue : cl3_reventon_black{};
    class cl3_reventon_white : cl3_reventon_black{};
    class cl3_reventon_violet : cl3_reventon_black{};
    class cl3_reventon_flame : cl3_reventon_black{};
    class cl3_reventon_flame1 : cl3_reventon_black{};
    class cl3_reventon_flame2 : cl3_reventon_black{};
    class cl3_reventon_2tone1 : cl3_reventon_black{};
    class cl3_reventon_2tone2 : cl3_reventon_black{};
    class cl3_reventon_2tone3 : cl3_reventon_black{};

	
	class cl3_aventador_lp7004_black {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 15600000
        textures[] = {};
    };
    class cl3_aventador_lp7004_blue : cl3_aventador_lp7004_black{};
    class cl3_aventador_lp7004_white : cl3_aventador_lp7004_black{};
    class cl3_aventador_lp7004_violet : cl3_aventador_lp7004_black{};
    class cl3_aventador_lp7004_flame1 : cl3_aventador_lp7004_black{};
    class cl3_aventador_lp7004_flame2 : cl3_aventador_lp7004_black{};
    class cl3_aventador_lp7004_2tone1 : cl3_aventador_lp7004_black{};
    class cl3_aventador_lp7004_2tone2 : cl3_aventador_lp7004_black{};
    class cl3_aventador_lp7004_2tone3 : cl3_aventador_lp7004_black{};

	
	class ivory_f1 {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 14400000
        textures[] = {};
    };

	
	class ivory_mp4 {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 15000000
        textures[] = {};
    };

	
	class ivory_lfa {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 13400000
        textures[] = {};
    };

	
	class Mrshounka_agera_p {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 13000000
        textures[] = {};
    };

	
	class ivory_veyron {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 11000000
        textures[] = {};
    };

	
	class Mrshounka_lykan_c {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 14000000
        textures[] = {};
    };
    class Mrshounka_lykan_c_yel : Mrshounka_lykan_c{};
    class Mrshounka_lykan_c_bleufonce : Mrshounka_lykan_c{};
    class Mrshounka_lykan_c_white : Mrshounka_lykan_c{};
    class Mrshounka_lykan_c_violet : Mrshounka_lykan_c{};
    class Mrshounka_lykan_c_orange : Mrshounka_lykan_c{};

	
	class Mrshounka_veneno_c {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 14000000
        textures[] = {};
    };
    class Mrshounka_veneno_c_noir : Mrshounka_veneno_c{};
    class Mrshounka_veneno_c_bleu : Mrshounka_veneno_c{};
    class Mrshounka_veneno_c_jaune : Mrshounka_veneno_c{};

	
	class mrshounka_huracan_c_bleufonce {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 10000000
        textures[] = {};
    };
    class mrshounka_huracan_c_violet : mrshounka_huracan_c_bleufonce{};
    class mrshounka_huracan_c_orange : mrshounka_huracan_c_bleufonce{};

	
	class shounka_mp4_bleufonce {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 10000000
        textures[] = {};
    };
    class shounka_mp4_violet : shounka_mp4_bleufonce{};
    class shounka_mp4_orange : shounka_mp4_bleufonce{};

	
	class shounka_limo_civ {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 10000000
        textures[] = {};
    };
    class shounka_limo_civ_bleufonce : shounka_limo_civ{};
    class shounka_limo_civ_violet : shounka_limo_civ{};
    class shounka_limo_civ_orange : shounka_limo_civ{};


	class cl3_dbs_volante_black {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 8400000
        textures[] = {};
    };
    class cl3_dbs_volante_blue : cl3_dbs_volante_black{};
    class cl3_dbs_volante_red : cl3_dbs_volante_black{};
    class cl3_dbs_volante_flame : cl3_dbs_volante_black{};
    class cl3_dbs_volante_flame1 : cl3_dbs_volante_black{};
    class cl3_dbs_volante_flame2 : cl3_dbs_volante_black{};


	class shounka_clk_bleufonce {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 7600000
        textures[] = {};
    };
    class shounka_clk_violet : shounka_clk_bleufonce{};
    class shounka_clk_orange : shounka_clk_bleufonce{};


	class cl3_veyron_F {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 9000000
        textures[] = {};
    };
    class cl3_veyron_lblue_dblue : cl3_veyron_F{};
    class cl3_veyron_black : cl3_veyron_F{};
    class cl3_veyron_red_red : cl3_veyron_F{};


	class ivory_c {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 4400000
        textures[] = {};
    };


	class ivory_elise {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 8000000
        textures[] = {};
    };


	class Mrshounka_bmwm6_civ {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 7000000
        textures[] = {};
    };
    class Mrshounka_bmwm6_bleufonce : Mrshounka_bmwm6_civ{};
    class Mrshounka_bmwm6_violet : Mrshounka_bmwm6_civ{};
    class Mrshounka_bmwm6_orange : Mrshounka_bmwm6_civ{};


	class Mrshounka_jeep_blinde_bleu {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 5200000
        textures[] = {};
    };
    class Mrshounka_jeep_blinde_bleu_mat : Mrshounka_jeep_blinde_bleu{};
    class Mrshounka_jeep_blinde_violet : Mrshounka_jeep_blinde_bleu{};
    class Mrshounka_jeep_blinde_violet_mat : Mrshounka_jeep_blinde_bleu{};
    class Mrshounka_jeep_blinde_rouge : Mrshounka_jeep_blinde_bleu{};
    class Mrshounka_jeep_blinde_rouge_mat : Mrshounka_jeep_blinde_bleu{};


	class shounka_h2 {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 7600000
        textures[] = {};
    };
    class shounka_h2_bleufonce : shounka_h2{};
    class shounka_h2_violet : shounka_h2{};
    class shounka_h2_orange : shounka_h2{};


	class Mrshounka_hummer_civ {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 6000000
        textures[] = {};
    };
    class Mrshounka_hummer_civ_bleufonce : Mrshounka_hummer_civ{};
    class Mrshounka_hummer_civ_violet : Mrshounka_hummer_civ{};
    class Mrshounka_hummer_civ_orange : Mrshounka_hummer_civ{};


	class cl3_z4_2008_black {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 9000000
        textures[] = {};
    };
    class cl3_z4_2008_blue : cl3_z4_2008_black{};
    class cl3_z4_2008_orange : cl3_z4_2008_black{};
    class cl3_z4_2008_purple : cl3_z4_2008_black{};
    class cl3_z4_2008_white : cl3_z4_2008_black{};


	class shounka_f430_spider {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 8000000
        textures[] = {};
    };
    class shounka_f430_spider_bleufonce : shounka_f430_spider{};
    class shounka_f430_spider_jaune : shounka_f430_spider{};
    class shounka_f430_spider_violet : shounka_f430_spider{};
    class shounka_f430_spider_orange : shounka_f430_spider{};


	class Jonzie_Viper {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 7000000
        textures[] = {};
    };


	class shounka_porsche911 {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 5800000
        textures[] = {};
    };
    class shounka_porsche911_bleufonce : shounka_porsche911{};
    class shounka_porsche911_violet : shounka_porsche911{};
    class shounka_porsche911_orange : shounka_porsche911{};


	class mrshounka_92_civ {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 5800000
        textures[] = {};
    };
    class mrshounka_92_civ_bleufonce : mrshounka_92_civ{};
    class mrshounka_92_civ_violet : mrshounka_92_civ{};
    class mrshounka_92_civ_orange : mrshounka_92_civ{};


	class ivory_isf {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 5000000
        textures[] = {};
    };


	class Mrshounka_a3_gtr_civ {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 3800000
        textures[] = {};
    };
    class Mrshounka_a3_gtr_civ_bleu : Mrshounka_a3_gtr_civ{};
    class Mrshounka_cayenne_p_civ : Mrshounka_a3_gtr_civ{};
    class Mrshounka_c63_2015_bleufonce : Mrshounka_a3_gtr_civ{};
    class Mrshounka_c63_2015_violet : Mrshounka_a3_gtr_civ{};
    class Mrshounka_c63_2015_orange : Mrshounka_a3_gtr_civ{};


	class cl3_arielatom_race_black {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 2400000
        textures[] = {};
    };
    class cl3_arielatom_race_blue : cl3_arielatom_race_black{};
    class cl3_arielatom_race_red : cl3_arielatom_race_black{};
    class cl3_arielatom_race_green : cl3_arielatom_race_black{};


	class Mrshounka_a3_308_rcz {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 2000000
        textures[] = {};
    };
    class Mrshounka_a3_308_rcz_bleufonce : Mrshounka_a3_308_rcz{};
    class Mrshounka_a3_308_rcz_violet : Mrshounka_a3_308_rcz{};
    class Mrshounka_a3_308_rcz_orange : Mrshounka_a3_308_rcz{};

};
