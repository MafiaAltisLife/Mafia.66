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
            { "hgun_Rook40_F", "", 6500, 3250 },
            { "hgun_Pistol_heavy_02_F", "", 9850, 4750 },
            { "hgun_ACPC2_F", "", 11500, 5750 },
            { "hgun_PDW2000_F", "", 20000, 10000 },
            { "SMG_01_F", "", 22000, 11000 },
            { "SMG_02_F", "", 24000, 12000 },
            
            { "optic_Hamr", "", 950, 250 },
            { "optic_ACO_grn_smg", "", 950, 250 },
            { "optic_MRCO", "", 1200, 600 },
            { "optic_SOS", "", 1500, 750 },
            { "optic_DMS", "", 1800, 900 },
            { "optic_AMS_snd", "", 3000, 1500 },
            { "optic_Arco", "", 2000, 1000 },
            { "optic_Holosight_smg", "", 500, 250 }						
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "30Rnd_9x21_Mag", "", 75 },
            { "30Rnd_45ACP_Mag_SMG_01", "", 100 },
            { "30Rnd_45ACP_Mag_SMG_01_tracer_green", "", 100 },
            { "30Rnd_9x21_Mag", "", 110 },
            { "10Rnd_762x54_Mag", "", 130 }
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
            { "srifle_DMR_04_Tan_F", "", 280000, 145000 },
            { "srifle_DMR_05_blk_F", "", 400000, 200000 },
            { "srifle_DMR_05_hex_F", "", 400000, 200000 },
            { "srifle_DMR_05_tan_f", "", 400000, 200000},
            { "srifle_DMR_06_camo_F", "", 400000, 200000},
            
            { "optic_Hamr", "", 950, 250 },
            { "optic_ACO_grn_smg", "", 950, 250 },
            { "optic_MRCO", "", 1200, 600 },
            { "optic_SOS", "", 1500, 750 },
            { "optic_DMS", "", 1800, 900 },
            { "optic_AMS_snd", "", 3000, 1500 },
            { "optic_Arco", "", 2000, 1000 },
            { "optic_Holosight_smg", "", 500, 250 },
            
            { "bipod_01_F_blk", "", 800, 400 },
            { "bipod_01_F_mtp", "", 800, 400 },
            { "bipod_01_F_snd", "", 800, 400 },
            { "bipod_01_F_tan", "", 800, 400 }
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
            { "10Rnd_93x64_DMR_05_Mag", "", 250 }
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 1500, 750 },
            { "hgun_Pistol_heavy_02_F", "", 2500, 1250 },
            { "hgun_ACPC2_F", "", 4500, -1 },
            { "hgun_PDW2000_F", "", 9500, -1 },
        
            { "optic_Hamr", "", 950, 250 },
            { "optic_ACO_grn_smg", "", 950, 250 },
            { "optic_MRCO", "", 1200, 600 },
            { "optic_SOS", "", 1500, 750 },
            { "optic_DMS", "", 1800, 900 },
            { "optic_AMS_snd", "", 3000, 1500 },
            { "optic_Arco", "", 2000, 1000 },
            { "optic_Holosight_smg", "", 500, 250 },
            
            { "bipod_01_F_blk", "", 800, 400 },
            { "bipod_01_F_mtp", "", 800, 400 },
            { "bipod_01_F_snd", "", 800, 400 },
            { "bipod_01_F_tan", "", 800, 400 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "30Rnd_9x21_Mag", "", 75 }
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
            { "arifle_sdar_F", "Taser Rifle", 20000, -1 },
            { "hgun_P07_snds_F", "Stun Pistol", 2000, -1 },
            { "SMG_02_ACO_F", "", 30000, -1 },
            { "arifle_MX_F", "", 35000, -1 },
            { "hgun_P07_F", "", 7500, 1500 },
            
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "Binocular", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ToolKit", "", 250, 75 },
            { "muzzle_snds_L", "", 650, -1 },
            { "FirstAidKit", "", 150, 65 },
            { "Medikit", "", 1000, 450 },
            { "NVGoggles", "", 2000, 980 },
            
            { "optic_Hamr", "", 950, 250 },
            { "optic_ACO_grn_smg", "", 950, 250 },
            { "optic_MRCO", "", 1200, 600 },
            { "optic_Arco", "", 2000, 1000 },
            { "optic_Holosight_smg", "", 500, 250 },
            
            { "bipod_01_F_blk", "", 800, 400 },
            { "bipod_01_F_mtp", "", 800, 400 },
            { "bipod_01_F_snd", "", 800, 400 },
            { "bipod_01_F_tan", "", 800, 400 }
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
            { "arifle_sdar_F", "Taser Rifle", 20000, -1 },
            { "hgun_P07_snds_F", "Stun Pistol", 2000, -1 },
            { "SMG_02_ACO_F", "", 30000, -1 },
            { "hgun_P07_F", "", 7500, -1 },
            { "arifle_MXC_Black_F", "", 10000, -1 },
            { "arifle_MXM_Black_F", "", 12000, -1 },
            { "arifle_MX_SW_Black_F", "", 15000, -1 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "MineDetector", "", 1000, 500 },
            
            { "optic_Hamr", "", 950, 250 },
            { "optic_ACO_grn_smg", "", 950, 250 },
            { "optic_MRCO", "", 1200, 600 },
            { "optic_SOS", "", 1500, 750 },
            { "optic_DMS", "", 1800, 900 },
            { "optic_AMS_snd", "", 3000, 1500 },
            { "optic_Arco", "", 2000, 1000 },
            { "optic_Holosight_smg", "", 500, 250 },
            
            { "bipod_01_F_blk", "", 800, 400 },
            { "bipod_01_F_mtp", "", 800, 400 },
            { "bipod_01_F_snd", "", 800, 400 },
            { "bipod_01_F_tan", "", 800, 400 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "20Rnd_556x45_UW_mag", "Taser Rifle Magazine", 45 },
            { "30Rnd_65x39_caseless_mag", "", 130 },
            { "100Rnd_65x39_caseless_mag_Tracer", "", 130 },
            { "100Rnd_65x39_caseless_mag", "", 130 },
            { "30Rnd_65x39_caseless_mag_Tracer", "", 130 }
        };
    };

    class cop_sergeant {
        name = "Altis Sergeant Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 7, "You must be a Sergeant Rank!" };
        items[] = {
            { "arifle_sdar_F", "Taser Rifle", 5000, -1 },
            { "hgun_P07_snds_F", "Stun Pistol", 2000, -1 },
            { "SMG_02_ACO_F", "", 6000, -1 },
            { "hgun_P07_F", "", 7500, -1 },
            { "srifle_EBR_F", "", 8500, -1 },
            { "srifle_DMR_03_F", "", 10000, -1 },
            { "srifle_DMR_04_ACO_F", "", 10000, -1 },
            { "srifle_DMR_05_blk_F", "", 12000, -1 },
            { "srifle_DMR_06_camo_F", "", 14000, -1 },
            { "srifle_DMR_02_F", "", 14000, -1 },
            
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            
            { "optic_Hamr", "", 950, 250 },
            { "optic_ACO_grn_smg", "", 950, 250 },
            { "optic_SOS", "", 1500, 750 },
            { "optic_DMS", "", 1800, 900 },
            { "optic_AMS_snd", "", 3000, 1500 },
            { "optic_Arco", "", 2000, 1000 },
            { "optic_Holosight_smg", "", 500, 250 },
            
            { "bipod_01_F_blk", "", 800, 400 },
            { "bipod_01_F_mtp", "", 800, 400 },
            { "bipod_01_F_snd", "", 800, 400 },
            { "bipod_01_F_tan", "", 800, 400 }	
        };
        mags[] = {
            { "9Rnd_45ACP_Mag", "", 200 },
            { "30Rnd_9x21_Mag", "", 60 },
            { "30Rnd_65x39_caseless_mag", "", 100, -1 },
            { "20Rnd_762x51_Mag", "", 100, -1 },
            { "10Rnd_93x64_DMR_05_Mag", "", 100, -1 }
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
            { "ItemMap", "", 50, 35 },
            { "ToolKit", "", 250, 75 },
            { "FirstAidKit", "", 150, 65 },
            { "Medikit", "", 500, 450 },
            { "NVGoggles", "", 1200, 980 }
        };
        mags[] = {};
    };
};
