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
            { "hgun_Rook40_F", "", 25000, 7500 },
            { "hgun_Pistol_heavy_02_F", "", 35000, 7500 },
            { "hgun_ACPC2_F", "", 45000, 12500 },
            { "hgun_PDW2000_F", "", 55000, 15000 },
            { "SMG_01_F", "", 70000, 20000 },
            { "SMG_02_F", "", 80000, 25000 },
            
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
            
            { "hgun_Rook40_F", "", 25000, 7500 },
            { "hgun_Pistol_heavy_02_F", "", 35000, 7500 },
            { "hgun_ACPC2_F", "", 45000, 12500 },
            { "hgun_PDW2000_F", "", 55000, 15000 },
            { "SMG_01_F", "", 70000, 20000 },
            { "SMG_02_F", "", 80000, 25000 },
            { "arifle_Mk20_F", "", 200000, 60000 },
            { "arifle_TRG21_F", "", 220000, 115000 },
            { "arifle_Katiba_F", "", 320000, 75000 },
            { "arifle_Katiba_C_F", "", 320000, 75600 },
            { "arifle_MX_Black_F", "", 370000, 145000 },
            { "arifle_MXC_F", "", 380000, 140000 },
            { "arifle_MXM_Black_F", "", 380000, 140000 },
            { "arifle_MXC_Black_F", "", 380000, 140000 },
            { "arifle_MX_SW_F", "", 400000, 160000 },
            { "srifle_DMR_01_F", "", 400000, 160000 },
            { "srifle_EBR_F", "", 420000, 150000 },
            { "LMG_Mk200_F", "", 500000, 175000 },
            { "LMG_Zafir_F", "", 450000, 160000 },
            { "srifle_DMR_03_F", "", 450000, 145000 },
            { "srifle_DMR_03_khaki_F", "", 450000, 145000 },
            { "srifle_DMR_03_tan_F", "", 450000, 145000 },
            { "srifle_DMR_03_multicam_F", "", 450000, 145000 },
            { "srifle_DMR_03_woodland_F", "", 450000, 145000 },
            { "srifle_DMR_06_camo_F", "", 550000, 195000},
            { "srifle_DMR_06_olive_F", "", 550000, 195000},
            { "srifle_DMR_05_blk_F", "", 800000, 300000 },
            { "srifle_DMR_05_hex_F", "", 800000, 300000 },
            { "srifle_DMR_05_tan_f", "", 800000, 300000},
            { "srifle_DMR_02_F", "", 800000, 250000 },
            { "srifle_DMR_02_camo_F", "", 800000, 250000 },
            { "srifle_DMR_02_sniper_F", "", 800000, 250000 },
            { "srifle_DMR_04_F", "", 1000000, 350000 },
            { "srifle_DMR_04_Tan_F", "", 1000000, 350000 },

            { "optic_Hamr", "", 1000, 500 },
            { "optic_ACO_grn_smg", "", 4000, 100 },
            { "optic_MRCO", "", 4000, 1000 },
            { "optic_SOS", "", 10000, 1500 },
            { "optic_DMS", "", 18000, 6000 },
            { "optic_AMS_snd", "", 20000, 5000 },
            { "optic_Arco", "", 4000, 2000 },
            { "optic_Holosight_smg", "", 1000, 500 },
            
            { "bipod_01_F_blk", "", 4000, 1000 },
            { "bipod_01_F_mtp", "", 4000, 1000 },
            { "bipod_01_F_snd", "", 4000, 1000 },
            { "bipod_01_F_tan", "", 4000, 1000 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 100 },
            { "11Rnd_45ACP_Mag", "", 140 },
            { "6Rnd_45ACP_Cylinder", "", 200 },
            { "9Rnd_45ACP_Mag", "", 180 },
            { "30Rnd_9x21_Mag", "", 300 },
            { "30Rnd_45ACP_Mag_SMG_01", "", 400 },
            { "30Rnd_45ACP_Mag_SMG_01_tracer_green", "", 400 },
            { "30Rnd_9x21_Mag", "", 440 },
            { "10Rnd_762x54_Mag", "", 520 },
            { "200Rnd_65x39_cased_Box", "", 600 },
            { "200Rnd_65x39_cased_Box_Tracer", "", 600 },
            { "30Rnd_65x39_caseless_green", "", 520 },
            { "30Rnd_65x39_caseless_green_mag_Tracer", "", 520 },
            { "30Rnd_556x45_Stanag", "", 400 },
            { "30Rnd_65x39_caseless_mag", "", 440 },
            { "30Rnd_65x39_caseless_mag_Tracer", "", 440 },
            { "100Rnd_65x39_caseless_mag_Tracer", "", 600 },
            { "100Rnd_65x39_caseless_mag", "", 600 },
            { "30Rnd_65x39_caseless_mag", "", 520 },
            { "30Rnd_65x39_caseless_mag_Tracer", "", 520 },
            { "10Rnd_338_Mag", "", 800 },
            { "10Rnd_127x54_Mag", "", 960 },
            { "150Rnd_762x54_Box", "", 960 },
            { "150Rnd_762x54_Box_Tracer", "", 960 },
            { "20Rnd_762x51_Mag", "", 440 },
            { "10Rnd_93x64_DMR_05_Mag", "", 1000 }
        };
    };
    
class Doador {
        name = "Loja de Armas";
        side = "civ";
        license = "donator";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 150, -1 },
            { "Rangefinder", "", 300, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ToolKit", "", 250, 75 },
            { "FirstAidKit", "", 150, 65 },
            { "Medikit", "", 1000, 450 },
            { "NVGoggles", "", 2000, 980 },
           
            { "hgun_Rook40_F", "", 12500, 5000 },
            { "hgun_Pistol_heavy_02_F", "", 17500, 7000 },
            { "hgun_ACPC2_F", "", 22500, 8000 },
            { "hgun_PDW2000_F", "", 27500, 7500 },
            { "SMG_01_F", "", 35000, 10000 },
            { "SMG_02_F", "", 40000, 12500 },
            { "srifle_DMR_01_F", "", 200000, 16000 },
            { "srifle_EBR_F", "", 210000, 100000 },
            { "LMG_Mk200_F", "", 250000, 150000 },
            { "LMG_Zafir_F", "", 225000, 160000 },
            { "arifle_Katiba_F", "", 160000, 50000 },
            { "arifle_Katiba_C_F", "", 170000, 60000 },
            { "arifle_Mk20_F", "", 100000, 40000 },
            { "arifle_MXC_F", "", 190000, 80000 },
            { "arifle_MX_SW_F", "", 200000, 60000 },
            { "arifle_MXM_F", "", 190000, 70000 },
            { "arifle_MXC_Black_F", "", 190000, 70000 },
            { "arifle_MX_Black_F", "", 185000, 100000 },
            { "arifle_MXM_Black_F", "", 190000, 120000 },
            { "arifle_TRG21_F", "", 110000, 60000 },
            { "srifle_DMR_02_F", "", 400000, 125000 },
            { "srifle_DMR_02_camo_F", "", 400000, 125000 },
            { "srifle_DMR_02_sniper_F", "", 400000, 125000 },
            { "srifle_DMR_03_F", "", 225000, 100000 },
            { "srifle_DMR_03_khaki_F", "", 225000, 100000 },
            { "srifle_DMR_03_tan_F", "", 225000, 100000 },
            { "srifle_DMR_03_multicam_F", "", 225000, 100000 },
            { "srifle_DMR_03_woodland_F", "", 225000, 100000 },
            { "srifle_DMR_04_F", "", 500000, 125000 },
            { "srifle_DMR_04_Tan_F", "", 500000, 125000 },
            { "srifle_DMR_05_blk_F", "", 400000, 150000 },
            { "srifle_DMR_05_hex_F", "", 400000, 150000 },
            { "srifle_DMR_05_tan_f", "", 400000, 150000},
            { "srifle_DMR_06_camo_F", "", 275000, 90000},
            { "srifle_DMR_06_olive_F", "", 275000, 90000},

            { "optic_Hamr", "", 500, 250 },
            { "optic_ACO_grn_smg", "", 2000, 500 },
            { "optic_MRCO", "", 3000, 500 },
            { "optic_SOS", "", 5000, 750 },
            { "optic_DMS", "", 9000, 3000 },
            { "optic_AMS_snd", "", 10000, 2500 },
            { "optic_Arco", "", 2000, 1000 },
            { "optic_Holosight_smg", "", 500, 250 },
            
            { "bipod_01_F_blk", "", 2000, 500 },
            { "bipod_01_F_mtp", "", 2000, 500 },
            { "bipod_01_F_snd", "", 2000, 500 },
            { "bipod_01_F_tan", "", 2000, 500 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 50 },
            { "11Rnd_45ACP_Mag", "", 80 },
            { "6Rnd_45ACP_Cylinder", "", 100 },
            { "9Rnd_45ACP_Mag", "", 90 },
            { "30Rnd_9x21_Mag", "", 150 },
            { "30Rnd_45ACP_Mag_SMG_01", "", 200 },
            { "30Rnd_45ACP_Mag_SMG_01_tracer_green", "", 200 },
            { "30Rnd_9x21_Mag", "", 220 },
            { "10Rnd_762x54_Mag", "", 260 },
            { "200Rnd_65x39_cased_Box", "", 300 },
            { "200Rnd_65x39_cased_Box_Tracer", "", 300 },
            { "30Rnd_65x39_caseless_green", "", 260 },
            { "30Rnd_65x39_caseless_green_mag_Tracer", "", 260 },
            { "30Rnd_556x45_Stanag", "", 200 },
            { "30Rnd_65x39_caseless_mag", "", 220 },
            { "30Rnd_65x39_caseless_mag_Tracer", "", 220 },
            { "100Rnd_65x39_caseless_mag_Tracer", "", 300 },
            { "100Rnd_65x39_caseless_mag", "", 300 },
            { "30Rnd_65x39_caseless_mag", "", 260 },
            { "30Rnd_65x39_caseless_mag_Tracer", "", 260 },
            { "10Rnd_338_Mag", "", 400 },
            { "10Rnd_127x54_Mag", "", 480 },
            { "150Rnd_762x54_Box", "", 505 },
            { "150Rnd_762x54_Box_Tracer", "", 505 },
            { "20Rnd_762x51_Mag", "", 220 },
            { "10Rnd_93x64_DMR_05_Mag", "", 1000 }
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
           
            { "hgun_Rook40_F", "", 25000, 7500 },
            { "hgun_Pistol_heavy_02_F", "", 35000, 7500 },
            { "hgun_ACPC2_F", "", 45000, 12500 },
            { "hgun_PDW2000_F", "", 55000, 15000 },
            { "SMG_01_F", "", 70000, 20000 },
            { "SMG_02_F", "", 80000, 25000 },
            { "arifle_MXC_F", "", 180000, 70000 },
        
            { "optic_Hamr", "", 950, 250 },
            { "optic_ACO_grn_smg", "", 950, 250 },
            
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
            { "30Rnd_65x39_caseless_mag", "", 110 },
            { "30Rnd_65x39_caseless_mag_Tracer", "", 110 }
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
            { "10Rnd_93x64_DMR_05_Mag", "", 100, -1 },
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
