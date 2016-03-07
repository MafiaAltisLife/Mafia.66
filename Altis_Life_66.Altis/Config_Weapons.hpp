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
            { "hgun_Rook40_F", "", 30000, 15000 },
            { "hgun_Pistol_heavy_02_F", "", 40000, 20000 },
            { "hgun_ACPC2_F", "", 50000, 25000 },
            { "hgun_PDW2000_F", "", 60000, 30000 },
            { "SMG_01_F", "", 70000, 35000 },
            { "SMG_02_F", "", 80000, 40000 },
            
            { "optic_ACO_grn_smg", "", 950, 250 },
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
            { "Binocular", "", 150, -1 },
            { "Rangefinder", "", 300, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ToolKit", "", 250, 75 },
            { "FirstAidKit", "", 150, 65 },
            { "Medikit", "", 1000, 450 },
            { "NVGoggles", "", 2000, 980 },
            
            { "hgun_Rook40_F", "", 30000, 15000 },
            { "hgun_Pistol_heavy_02_F", "", 40000, 20000 },
            { "hgun_ACPC2_F", "", 50000, 25000 },
            { "hgun_PDW2000_F", "", 60000, 30000 },
            { "SMG_01_F", "", 70000, 35000 },
            { "SMG_02_F", "", 80000, 40000 },
            { "arifle_Mk20_F", "", 250000, 125000 },
            { "arifle_TRG21_F", "", 260000, 130000 },
            { "arifle_Katiba_F", "", 340000, 170000 },
            { "arifle_Katiba_C_F", "", 350000, 175000 },
            { "arifle_MX_Black_F", "", 380000, 190000 },
            { "arifle_MXC_F", "", 400000, 200000 },
            { "arifle_MXC_Black_F", "", 400000, 200000 },
            { "arifle_MXM_Black_F", "", 440000, 220000 },
            { "arifle_MX_SW_F", "", 480000, 240000 },
            { "srifle_DMR_01_F", "", 500000, 250000 },
            { "srifle_DMR_03_F", "", 530000, 265000 },
            { "srifle_DMR_03_khaki_F", "", 530000, 265000 },
            { "srifle_DMR_03_tan_F", "", 530000, 265000 },
            { "srifle_DMR_03_multicam_F", "", 530000, 265000 },
            { "srifle_DMR_03_woodland_F", "", 530000, 265000 },
            { "srifle_EBR_F", "", 520000, 260000 },
            { "LMG_Mk200_F", "", 550000, 225000 },
            { "LMG_Zafir_F", "", 550000, 225000 },
            { "srifle_DMR_06_camo_F", "", 580000, 290000},
            { "srifle_DMR_06_olive_F", "", 580000, 290000},
            { "srifle_DMR_05_blk_F", "", 1000000, 500000 },
            { "srifle_DMR_05_hex_F", "", 1000000, 500000 },
            { "srifle_DMR_05_tan_f", "", 1000000, 500000},
            { "srifle_DMR_02_F", "", 1000000, 50000 },
            { "srifle_DMR_02_camo_F", "", 1000000, 50000 },
            { "srifle_DMR_02_sniper_F", "", 1000000, 500000 },
            { "srifle_DMR_04_F", "", 1500000, 750000 },
            { "srifle_DMR_04_Tan_F", "", 1500000, 750000 },

            { "optic_Hamr", "", 2000, 1000 },
            { "optic_Holosight_smg", "", 2000, 100 },
            { "optic_Arco", "", 8000, 4000 },
            { "optic_ACO_grn_smg", "", 8000, 4000 },
            { "optic_MRCO", "", 8000, 4000 },
            { "optic_SOS", "", 20000, 10000 },
            { "optic_DMS", "", 38000, 19000 },
            
            { "bipod_01_F_blk", "", 5000, 2500 },
            { "bipod_01_F_mtp", "", 5000, 2500 },
            { "bipod_01_F_snd", "", 5000, 2500 },
            { "bipod_01_F_tan", "", 5000, 2500 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 500 },
            { "11Rnd_45ACP_Mag", "", 500 },
            { "6Rnd_45ACP_Cylinder", "", 700 },
            { "9Rnd_45ACP_Mag", "", 800 },
            { "30Rnd_9x21_Mag", "", 1000 },
            { "30Rnd_45ACP_Mag_SMG_01", "", 1200 },
            { "30Rnd_45ACP_Mag_SMG_01_tracer_green", "", 1200 },
            { "30Rnd_9x21_Mag", "", 1000 },
            { "10Rnd_762x54_Mag", "", 1000 },
            { "200Rnd_65x39_cased_Box", "", 2500 },
            { "200Rnd_65x39_cased_Box_Tracer", "", 2500 },
            { "30Rnd_65x39_caseless_green", "", 2000 },
            { "30Rnd_65x39_caseless_green_mag_Tracer", "", 2000 },
            { "30Rnd_556x45_Stanag", "", 2000 },
            { "30Rnd_65x39_caseless_mag", "", 2000 },
            { "30Rnd_65x39_caseless_mag_Tracer", "", 2000 },
            { "100Rnd_65x39_caseless_mag_Tracer", "", 2250 },
            { "100Rnd_65x39_caseless_mag", "", 2250 },
            { "30Rnd_65x39_caseless_mag", "", 1500 },
            { "30Rnd_65x39_caseless_mag_Tracer", "", 1500 },
            { "10Rnd_338_Mag", "", 1600 },
            { "10Rnd_127x54_Mag", "", 1800 },
            { "150Rnd_762x54_Box", "", 3500 },
            { "150Rnd_762x54_Box_Tracer", "", 3500},
            { "20Rnd_762x51_Mag", "", 3000 },
            { "10Rnd_93x64_DMR_05_Mag", "", 3000 }
        };
    };
    
class Doador {
        name = "Loja de Armas";
        side = "civ";
        license = "donator";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 75, -1 },
            { "Rangefinder", "", 150, -1 },
            { "ItemGPS", "", 50, 45 },
            { "ToolKit", "", 125, 75 },
            { "FirstAidKit", "", 75, -1 },
            { "Medikit", "", 500, -1 },
            { "NVGoggles", "", 1000, -1 },
            
            { "hgun_Rook40_F", "", 15000, 7500 },
            { "hgun_Pistol_heavy_02_F", "", 20000, 10000 },
            { "hgun_ACPC2_F", "", 25000, 12500 },
            { "hgun_PDW2000_F", "", 30000, 15000 },
            { "SMG_01_F", "", 35000, 17500 },
            { "SMG_02_F", "", 40000, 20000 },
            { "arifle_Mk20_F", "", 125000, 62500 },
            { "arifle_TRG21_F", "", 130000, 65000 },
            { "arifle_Katiba_F", "", 170000, 85000 },
            { "arifle_Katiba_C_F", "", 175000, 87500 },
            { "arifle_MX_Black_F", "", 190000, 95000 },
            { "arifle_MXC_F", "", 200000, 100000 },
            { "arifle_MXC_Black_F", "", 200000, 100000 },
            { "arifle_MXM_Black_F", "", 220000, 110000 },
            { "arifle_MX_SW_F", "", 240000, 120000 },
            { "srifle_DMR_01_F", "", 250000, 175000 },
            { "srifle_DMR_03_F", "", 265000, 132000 },
            { "srifle_DMR_03_khaki_F", "", 265000, 132000 },
            { "srifle_DMR_03_tan_F", "", 265000, 132000 },
            { "srifle_DMR_03_multicam_F", "", 265000, 132000 },
            { "srifle_DMR_03_woodland_F", "", 265000, 132000 },
            { "srifle_EBR_F", "", 260000, 130000 },
            { "LMG_Mk200_F", "", 225000, 112500 },
            { "LMG_Zafir_F", "", 225000, 112500 },
            { "srifle_DMR_06_camo_F", "", 290000, 145000},
            { "srifle_DMR_06_olive_F", "", 290000, 145000},
            { "srifle_DMR_05_blk_F", "", 500000, 250000 },
            { "srifle_DMR_05_hex_F", "", 500000, 250000 },
            { "srifle_DMR_05_tan_f", "", 500000, 250000},
            { "srifle_DMR_02_F", "", 500000, 250000 },
            { "srifle_DMR_02_camo_F", "", 500000, 250000 },
            { "srifle_DMR_02_sniper_F", "", 500000, 250000 },
            { "srifle_DMR_04_F", "", 750000, 375000 },
            { "srifle_DMR_04_Tan_F", "", 750000, 375000 },

            { "optic_Hamr", "", 1000, 500 },
            { "optic_Holosight_smg", "", 1000, 500 },
            { "optic_Arco", "", 4000, 2000 },
            { "optic_ACO_grn_smg", "", 4000, 2000 },
            { "optic_MRCO", "", 4000, 2000 },
            { "optic_SOS", "", 10000, 5000 },
            { "optic_DMS", "", 19000, 9500 },
            
            { "bipod_01_F_blk", "", 2500, 1250 },
            { "bipod_01_F_mtp", "", 2500, 1250 },
            { "bipod_01_F_snd", "", 2500, 1250 },
            { "bipod_01_F_tan", "", 2500, 1250 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 250 },
            { "11Rnd_45ACP_Mag", "", 250 },
            { "6Rnd_45ACP_Cylinder", "", 350 },
            { "9Rnd_45ACP_Mag", "", 400 },
            { "30Rnd_9x21_Mag", "", 500 },
            { "30Rnd_45ACP_Mag_SMG_01", "", 600 },
            { "30Rnd_45ACP_Mag_SMG_01_tracer_green", "", 600 },
            { "30Rnd_9x21_Mag", "", 500 },
            { "10Rnd_762x54_Mag", "", 500 },
            { "200Rnd_65x39_cased_Box", "", 1250 },
            { "200Rnd_65x39_cased_Box_Tracer", "", 1250 },
            { "30Rnd_65x39_caseless_green", "", 1000 },
            { "30Rnd_65x39_caseless_green_mag_Tracer", "", 1000 },
            { "30Rnd_556x45_Stanag", "", 1000 },
            { "30Rnd_65x39_caseless_mag", "", 1000 },
            { "30Rnd_65x39_caseless_mag_Tracer", "", 1000 },
            { "100Rnd_65x39_caseless_mag_Tracer", "", 1125 },
            { "100Rnd_65x39_caseless_mag", "", 1125 },
            { "30Rnd_65x39_caseless_mag", "", 750 },
            { "30Rnd_65x39_caseless_mag_Tracer", "", 750 },
            { "10Rnd_338_Mag", "", 800 },
            { "10Rnd_127x54_Mag", "", 900 },
            { "150Rnd_762x54_Box", "", 1750 },
            { "150Rnd_762x54_Box_Tracer", "", 1750},
            { "20Rnd_762x51_Mag", "", 1500 },
            { "10Rnd_93x64_DMR_05_Mag", "", 1500 }
        };
    };
    
    class gang {
        name = "Hideout Armament";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 150, -1 },
            { "Rangefinder", "", 300, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ToolKit", "", 250, 75 },
            { "muzzle_snds_L", "", 650, -1 },
            { "FirstAidKit", "", 150, 65 },
            { "Medikit", "", 1000, 450 },
            { "NVGoggles", "", 2000, 980 },
           
            { "hgun_Rook40_F", "", 15000, 7500 },
            { "hgun_Pistol_heavy_02_F", "", 20000, 10000 },
            { "hgun_ACPC2_F", "", 25000, 12500 },
            { "hgun_PDW2000_F", "", 30000, 15000 },
            { "SMG_01_F", "", 35000, 17500 },
            { "SMG_02_F", "", 40000, 20000 },
            { "arifle_MX_Black_F", "", 190000, 95000 },
        
            { "optic_Hamr", "", 1000, 500 },
            { "optic_ACO_grn_smg", "", 4000, 2000 }, 
            
            { "bipod_01_F_blk", "", 2500, 1250 },
            { "bipod_01_F_mtp", "", 2500, 1250 },
            { "bipod_01_F_snd", "", 2500, 1250 },
            { "bipod_01_F_tan", "", 2500, 1250 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 250 },
            { "11Rnd_45ACP_Mag", "", 250 },
            { "6Rnd_45ACP_Cylinder", "", 350 },
            { "9Rnd_45ACP_Mag", "", 400 },
            { "30Rnd_9x21_Mag", "", 500 },
            { "30Rnd_45ACP_Mag_SMG_01", "", 600 },
            { "30Rnd_45ACP_Mag_SMG_01_tracer_green", "", 600 },
            { "30Rnd_9x21_Mag", "", 500 },
            { "30Rnd_65x39_caseless_mag", "", 1000 },
            { "30Rnd_65x39_caseless_mag_Tracer", "", 1000 },
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
            { "Rangefinder", "", 300, -1 },
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
            { "Rangefinder", "", 300, -1 },
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
            { "Rangefinder", "", 300, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ToolKit", "", 250, 75 },
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
            
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "Binocular", "", 150, -1 },
            { "Rangefinder", "", 300, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ToolKit", "", 250, 75 },
            { "FirstAidKit", "", 150, 65 },
            { "Medikit", "", 1000, 450 },
            { "NVGoggles", "", 2000, 980 },
            
            { "optic_Hamr", "", 950, 250 },
            { "optic_ACO_grn_smg", "", 950, 250 },
            { "optic_MRCO", "", 1200, 600 },
            { "optic_SOS", "", 1500, 750 },
            { "optic_DMS", "", 1800, 900 },
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
            { "200Rnd_65x39_cased_Box", "", 300 },
            { "200Rnd_65x39_cased_Box_Tracer", "", 300 },
            { "30Rnd_65x39_caseless_mag_Tracer", "", 130 }
        };
    };

    class cop_sergeant {
        name = "Altis Sergeant Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 3, "You must be a Sergeant Rank!" };
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
            { "LMG_Zafir_F", "", 20000, -1 },
             
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "Binocular", "", 150, -1 },
            { "Rangefinder", "", 300, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ToolKit", "", 250, 75 },
            { "FirstAidKit", "", 150, 65 },
            { "Medikit", "", 1000, 450 },
            { "NVGoggles", "", 2000, 980 },
            
            { "optic_Hamr", "", 950, 250 },
            { "optic_ACO_grn_smg", "", 950, 250 },
            { "optic_SOS", "", 1500, 750 },
            { "optic_DMS", "", 1800, 900 },
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
            { "10Rnd_93x64_DMR_05_Mag", "", 100, -1 },
            { "10Rnd_338_Mag", "", 300, -1 },
            { "150Rnd_762x54_Box", "", 600 },
            { "150Rnd_762x54_Box_Tracer", "", 600},
            { "10Rnd_127x54_Mag", "", 100, -1 }
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
            { "Rangefinder", "", 300, -1 },
            { "ItemMap", "", 50, 35 },
            { "ToolKit", "", 250, 75 },
            { "FirstAidKit", "", 150, 65 },
            { "Medikit", "", 500, 450 },
            { "NVGoggles", "", 1200, 980 }
        };
        mags[] = {};
    };
};
