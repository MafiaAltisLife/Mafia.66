/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
*
*    items: { Classname, Itemname, BuyPrice, SellPrice }
*
*    Itemname only needs to be filled if you want to rename the original object name.
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        license = "gun";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 6500, 500 },
            { "hgun_Pistol_heavy_02_F", "", 9850, -1 },
            { "hgun_ACPC2_F", "", 11500, -1 },
            { "hgun_PDW2000_F", "", 20000, -1 },
            { "optic_ACO_grn_smg", "", 2500, 250 }			
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "30Rnd_9x21_Mag", "", 75 }
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 6500, 3250 },
            { "hgun_Pistol_heavy_01_F", "", 8000, 4000 },
            { "hgun_Pistol_heavy_02_F", "", 9850, 4500 },
            { "hgun_ACPC2_F", "", 11500, 5000 },
            { "hgun_PDW2000_F", "", 20000, 10000 },
            { "SMG_01_F", "", 22000, 11000 },
            { "SMG_02_F", "", 24000, 12000 },
            { "srifle_DMR_01_F", "", 40000, 20000 },
            { "srifle_EBR_F", "", 40000, 20000 },
            { "LMG_Mk200_F", "", 80000, 40000 },
            { "LMG_Zafir_F", "", 80000, 40000 },
            { "arifle_Katiba_F", "", 38000, 19000 },
            { "arifle_Katiba_C_F", "", 39000, 19500 },
            { "arifle_Mk20_F", "", 26000, 13000 },
            { "arifle_MXC_F", "", 28000, 14000 },
            { "arifle_MX_SW_F", "", 35000, 17500 },
            { "arifle_MXM_F", "", 32000, 16000 },
            { "arifle_MXC_Black_F", "", 28000, 17500 },
            { "arifle_MX_Black_F", "", 29000, 14500 },
            { "arifle_MXM_Black_F", "", 32000, 16000 },
            { "arifle_TRG21_F", "", 24000, 12000 },
            { "srifle_DMR_02_F", "", 200000, 100000 },
            { "srifle_DMR_02_camo_F", "", 200000, 100000 },
            { "srifle_DMR_02_sniper_F", "", 200000, 100000 },
            { "srifle_DMR_03_F", "", 160000, 80000 },
            { "srifle_DMR_03_khaki_F", "", 160000, 80000 },
            { "srifle_DMR_03_tan_F", "", 160000, 80000 },
            { "srifle_DMR_03_multicam_F", "", 160000, 80000 },
            { "srifle_DMR_03_woodland_F", "", 160000, 80000 },
            { "srifle_DMR_04_F", "", 280000, 140000 },
            { "srifle_DMR_04_Tan_F", "", 280000, 14000 },
            { "srifle_DMR_05_blk_F", "", 320000, 340000 },
            { "srifle_DMR_05_hex_F", "", 320000, 34000 },
            { "srifle_DMR_05_tan_f", "", 320000, 34000}
            { " srifle_DMR_06_camo_F", "", 320000, 34000}
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "11Rnd_45ACP_Mag", "", 40 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "30Rnd_9x21_Mag", "", 75 },
            { "30Rnd_45ACP_Mag_SMG_01", "", 100 },
            { "30Rnd_45ACP_Mag_SMG_01_tracer_green", "", 100 },
            { "30Rnd_9x21_Mag", "", 110 },
            { "10Rnd_762x54_Mag", "", 130 },
            { "200Rnd_65x39_cased_Box", "", 150 },
            { "200Rnd_65x39_cased_Box_Tracer", "", 150 },
            { "30Rnd_65x39_caseless_green", "", 130 },
            { "30Rnd_65x39_caseless_green_mag_Tracer", "", 130 },
            { "30Rnd_556x45_Stanag", "", 100 },
            { "30Rnd_556x45_Stanag_Tracer_Red", "", 100 },
            { "30Rnd_556x45_Stanag_Tracer_Green", "", 100 },
            { "30Rnd_556x45_Stanag_Tracer_Yellow", "", 100 },
            { "30Rnd_65x39_caseless_mag", "", 110 },
            { "30Rnd_65x39_caseless_mag_Tracer", "", 110 },
            { "100Rnd_65x39_caseless_mag_Tracer", "", 150 },
            { "100Rnd_65x39_caseless_mag", "", 150 },
            { "30Rnd_65x39_caseless_mag", "", 130 },
            { "30Rnd_65x39_caseless_mag_Tracer", "", 130 },
            { "10Rnd_338_Mag", "", 200 },
            { "20Rnd_762x51_Mag", "", 220 },
            { "10Rnd_127x54_Mag", "", 240 },
            { "10Rnd_93x64_DMR_05_Mag", "", 250 },
            { "", "",  },
            { "", "",  },
            { "", "",  },
            { "", "",  },
            { "", "",  },
            { "", "",  },
            { "", "",  },
            { "", "",  },
            { "", "",  },
            { "", "",  },
            { "", "",  },
            { "", "",  }
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 1500, 500 },
            { "hgun_Pistol_heavy_02_F", "", 2500, -1 },
            { "hgun_ACPC2_F", "", 4500, -1 },
            { "hgun_PDW2000_F", "", 9500, -1 },
            { "optic_ACO_grn_smg", "", 950, 250 },
			
			{ "srifle_EBR_ARCO_pointer_snds_F", "", 3000000, 500000 },
			{ "srifle_EBR_F", "", 3000000, 500000 },
			{ "srifle_DMR_02_sniper_AMS_LP_S_F", "", 3000000, 500000 },
			{ "srifle_DMR_03_woodland_F", "", 3000000, 500000 },
			{ "srifle_DMR_04_MRCO_F", "", 3000000, 500000 },
			{ "srifle_DMR_05_hex_F", "", 3000000, 500000 },
			{ "srifle_DMR_06_camo_khs_F", "", 3000000, 500000 },
			{ "MMG_01_hex_ARCO_LP_F", "", 3000000, 500000 },
			{ "MMG_02_sand_RCO_LP_F", "", 3000000, 500000 }	
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "30Rnd_9x21_Mag", "", 75 },
			{ "20Rnd_762x51_Mag", "", 500 },
			{ "20Rnd_762x51_Mag", "", 500 },
			{ "10Rnd_338_Mag", "", 500 },
			{ "20Rnd_762x51_Mag", "", 500 },
			{ "10Rnd_127x54_Mag", "", 500 },
			{ "10Rnd_93x64_DMR_05_Mag", "", 500 },
			{ "20Rnd_762x51_Mag", "", 500 },
			{ "150Rnd_93x64_Mag", "", 500 },
			{ "130Rnd_338_Mag", "", 500 }	
        };
    };

    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ItemMap", "", 50, 35 },
            { "ItemCompass", "", 50, 25 },
            { "ItemWatch", "", 50, -1 },
            { "ToolKit", "", 250, 75 },
            { "FirstAidKit", "", 150, 65 },
            { "NVGoggles", "", 2000, 980 },
            { "Chemlight_red", "", 300, -1 },
            { "Chemlight_yellow", "", 300, 50 },
            { "Chemlight_green", "", 300, 50 },
            { "Chemlight_blue", "", 300, 50 }
        };
        mags[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 750, -1 },
            { "ItemGPS", "", 500, 45 },
            { "ItemMap", "", 250, 35 },
            { "ItemCompass", "", 250, 25 },
            { "ItemWatch", "", 250, -1 },
            { "ToolKit", "", 1250, 75 },
            { "FirstAidKit", "", 750, 65 },
            { "NVGoggles", "", 10000, 980 },
            { "Chemlight_red", "", 1500, -1 },
            { "Chemlight_yellow", "", 1500, 50 },
            { "Chemlight_green", "", 1500, 50 },
            { "Chemlight_blue", "", 1500, 50 }
        };
        mags[] = {};
    };

    //Cop Shops
    class cop_basic {
        name = "Altis Cop Shop";
        side = "cop";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "arifle_sdar_F", "Taser Rifle", 20000, 7500 },
            { "hgun_P07_snds_F", "Stun Pistol", 2000, 650 },
            { "SMG_02_ACO_F", "", 30000, -1 },
            { "arifle_MX_F", "", 35000, 7500 },
            { "hgun_P07_F", "", 7500, 1500 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "Binocular", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ToolKit", "", 250, 75 },
            { "muzzle_snds_L", "", 650, -1 },
            { "FirstAidKit", "", 150, 65 },
            { "Medikit", "", 1000, 450 },
            { "NVGoggles", "", 2000, 980 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "20Rnd_556x45_UW_mag", "Taser Rifle Magazine", 45 },
            { "30Rnd_65x39_caseless_mag", "", 130 }
        };
    };

    class cop_patrol {
        name = "Altis Patrol Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 2, "You must be a Patrol Officer Rank!" };
        items[] = {
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "MineDetector", "", 1000, 500 },
            { "acc_flashlight", "", 750, 100 },
            { "optic_Holosight", "", 1200, 275 },
            { "optic_Arco", "", 2500, -1 },
            { "muzzle_snds_H", "", 2750, -1 }
        };
        mags[] = {
            { "30Rnd_65x39_caseless_mag", "", 130 },
            { "30Rnd_9x21_Mag", "", 250 }
        };
    };

    class cop_sergeant {
        name = "Altis Sergeant Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 7, "You must be a Sergeant Rank!" };
        items[] = {
            { "hgun_ACPC2_F", "", 17500, -1 },
            { "SMG_02_ACO_F", "", 15000, -1 },
            { "arifle_MXC_F", "", 30000, 5000 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "optic_Arco", "", 2500, -1 },
            { "muzzle_snds_H", "", 2750, -1 },
			
			{ "srifle_EBR_ARCO_pointer_snds_F", "", 3000, 2000},
			{ "srifle_EBR_F", "", 3000, 2000 },
			{ "srifle_DMR_02_sniper_AMS_LP_S_F", "", 3000, 2000 },
			{ "srifle_DMR_03_woodland_F", "", 3000, 2000 },
			{ "srifle_DMR_04_MRCO_F", "", 3000, 2000 },
			{ "srifle_DMR_05_hex_F", "", 3000, 2000 },
			{ "srifle_DMR_06_camo_khs_F", "", 3000, 2000 },
			{ "MMG_01_hex_ARCO_LP_F", "", 3000, 2000 },
			{ "MMG_02_sand_RCO_LP_F", "", 3000, 2000 }	
        };
        mags[] = {
            { "9Rnd_45ACP_Mag", "", 200 },
            { "30Rnd_9x21_Mag", "", 60 },
            { "30Rnd_65x39_caseless_mag", "", 100, -1 },
			
			{ "20Rnd_762x51_Mag", "", 50 },
			{ "20Rnd_762x51_Mag", "", 50 },
			{ "10Rnd_338_Mag", "", 50 },
			{ "20Rnd_762x51_Mag", "", 50 },
			{ "10Rnd_127x54_Mag", "", 50 },
			{ "10Rnd_93x64_DMR_05_Mag", "", 50 },
			{ "20Rnd_762x51_Mag", "", 50 },
			{ "150Rnd_93x64_Mag", "", 50 },
			{ "130Rnd_338_Mag", "", 50 }	
        };
    };

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "ItemGPS", "", 100, 45 },
            { "Binocular", "", 150, -1 },
            { "ToolKit", "", 250, 75 },
            { "FirstAidKit", "", 150, 65 },
            { "Medikit", "", 500, 450 },
            { "NVGoggles", "", 1200, 980 }
        };
        mags[] = {};
    };
};
