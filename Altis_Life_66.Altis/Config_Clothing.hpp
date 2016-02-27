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
            { "U_C_Poloshirt_blue", "Poloshirt Blue", 250, { "", "", -1 } },
            { "U_C_Poor_2", "Rag tagged clothes", 250, { "", "", -1 } },
            { "U_IG_Guerilla2_2", "Green stripped shirt & Pants", 650, { "", "", -1 } },
            { "U_IG_Guerilla3_1", "Brown Jacket & Pants", 735, { "", "", -1 } },
            { "U_IG_Guerilla2_3", "The Outback Rangler", 1200, { "", "", -1 } },
            { "U_C_HunterBody_grn", "The Hunters Look", 1500, { "", "", -1 } },
            { "U_C_WorkerCoveralls", "Mechanic Coveralls", 2500, { "", "", -1 } },
            { "U_OrestesBody", "Surfing On Land", 1100, { "", "", -1 } },
            { "U_NikosAgedBody", "Casual Wears", 5000, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Bandanna_camo", "Camo Bandanna", 120, { "", "", -1 } },
            { "H_Bandanna_surfer", "Surfer Bandanna", 130, { "", "", -1 } },
            { "H_Bandanna_gry", "Grey Bandanna", 150, { "", "", -1 } },
            { "H_Bandanna_cbr", "", 165, { "", "", -1 } },
            { "H_Bandanna_surfer", "", 135, { "", "", -1 } },
            { "H_Bandanna_khk", "Khaki Bandanna", 145, { "", "", -1 } },
            { "H_Bandanna_sgg", "Sage Bandanna", 160, { "", "", -1 } },
            { "H_StrawHat", "Straw Fedora", 225, { "", "", -1 } },
            { "H_Booniehat_tan", "", 425, { "", "", -1 } },
            { "H_Hat_blue", "", 310, { "", "", -1 } },
            { "H_Hat_brown", "", 276, { "", "", -1 } },
            { "H_Hat_checker", "", 340, { "", "", -1 } },
            { "H_Hat_grey", "", 280, { "", "", -1 } },
            { "H_Hat_tan", "", 265, { "", "", -1 } },
            { "H_Cap_blu", "", 150, { "", "", -1 } },
            { "H_Cap_grn", "", 150, { "", "", -1 } },
            { "H_Cap_grn_BI", "", 150, { "", "", -1 } },
            { "H_Cap_oli", "", 150, { "", "", -1 } },
            { "H_Cap_red", "", 150, { "", "", -1 } },
            { "H_Cap_tan", "", 150, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 25, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 20, { "", "", -1 } },
            { "G_Sport_Checkered", "", 20, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
            { "G_Squares", "", 10, { "", "", -1 } },
            { "G_Aviator", "", 100, { "", "", -1 } },
            { "G_Lady_Mirror", "", 150, { "", "", -1 } },
            { "G_Lady_Dark", "", 150, { "", "", -1 } },
            { "G_Lady_Blue", "", 150, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
            { "G_Combat", "", 55, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_AssaultPack_khk", "", 2000, { "", "", -1 } },
            { "V_Press_F", "", 3000, { "", "", -1 } }
            
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
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
            { "B_Bergen_sgg", "", 6500, { "", "", -1 } },
            { "B_Bergen_mcamo", "", 6500, { "", "", -1 } },
            { "B_Bergen_rgr", "", 6500, { "", "", -1 } },
            { "B_Bergen_blk", "", 6500, { "", "", -1 } },
            { "B_FieldPack_blk", "", 5000, { "", "", -1 } },
            { "B_FieldPack_ocamo", "", 5000, { "", "", -1 } },
            { "B_FieldPack_oucamo", "", 5000, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oli", "", 7500, { "", "", -1 } },
            { "B_Carryall_khk", "", 7500, { "", "", -1 } },
            { "B_Carryall_cbr", "", 7500, { "", "", -1 } },
            { "B_OutdoorPack_blk", "", 500, { "", "", -1 } }
        };
    };

    class cop {
        title = "STR_Shops_C_Police";
        license = "";
        side = "cop";
        uniforms[] = {
	    { "NONE", "Remove Uniform", 0, { "", "", -1 } },
	    { "U_B_CombatUniform_mcam", "Uniforme Policial", 50, { "", "textures\Cop\policia_roupa.paa", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Cap_police", "", 100, { "", "", -1 } },
            { "H_HelmetCrew_B", "", 100, { "", "", -1 } },
            { "H_PilotHelmetHeli_B", "", 100, { "", "", -1 } },
            { "H_HelmetSpecO_blk", "", 100, { "", "", -1 } },
            { "H_Beret_blk", "", 100, { "", "", -1 } },
            { "H_Beret_blk_POLICE", "", 100, { "", "", -1 } },
            { "H_Beret_02", "", 100, { "", "", -1 } },
            { "H_Beret_Colonel", "", 100, { "", "", -1 } },
            { "H_Watchcap_blk", "", 100, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 25, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 20, { "", "", -1 } },
            { "G_Sport_Checkered", "", 20, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
            { "G_Squares", "", 10, { "", "", -1 } },
            { "G_Aviator", "", 100, { "", "", -1 } },
            { "G_Lady_Mirror", "", 150, { "", "", -1 } },
            { "G_Lady_Dark", "", 150, { "", "", -1 } },
            { "G_Lady_Blue", "", 150, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
            { "G_Combat", "", 55, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Chestrig_blk", "", 1000, { "", "", -1 } },
            { "V_TacVest_blk_POLICE", "", 1000, { "", "", -1 } },
            { "V_PlateCarrierSpec_blk", "", 1000, { "", "", -1 } },
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 800, { "", "", -1 } },
            { "B_FieldPack_blk", "", 500, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 700, { "", "", -1 } },
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
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_I_G_Story_Protagonist_F", "Worn Combat Fatigues (Kerry)", 5000, {"", "", -1} },
            { "U_IG_Guerrilla_6_1", "", 5000, {"Guerilla Apparel", "", -1} }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Balaclava_blk", "", 150, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Chestrig_khk", "Chest Rig (Khaki)", 6000, { "", "", -1 } },
            { "V_Chestrig_blk", "Fighter Chestrig (Black)", 6000, { "", "", -1 } },
            { "V_TacVest_khk", "Tactical Vest (Khaki)", 6000, { "", "", -1 } },
            { "V_TacVest_blk", "Tactical Vest (Black)", 6000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_Carryall_khk", "", 6500, { "", "", -1 } },
            { "B_Carryall_cbr", "", 6500, { "", "", -1 } }
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
            { "U_IG_Guerilla1_1", "Guerilla Garment", 5000, {"", "", -1} },
            { "U_B_CTRG_1", "", 5000, {"CTRG Combat Uniform", "", -1} },
            { "U_B_CTRG_2", "", 5000, {"CTRG Combat Uniform (Tee)", "", -1} },
            { "U_B_CTRG_3", "", 5000, {"CTRG Combat Uniform (Rolled-up)", "", -1} },
            { "U_B_survival_uniform", "", 5000, {"Survival Fatigues", "", -1} },
            { "U_I_G_Story_Protagonist_F", "Worn Combat Fatigues (Kerry)", 5000, {"", "", -1} },
            { "U_IG_Guerrilla_6_1", "", 5000, {"Guerilla Apparel", "", -1} },
            { "U_BG_Guerrilla_6_1", "", 5000, {"Guerilla Apparel", "", -1} },
            { "U_OG_Guerrilla_6_1", "", 5000, {"Guerilla Apparel", "", -1} },
            { "U_O_FullGhillie_sard", "", 70000, {"Full Ghillie (Semi-Arid) (NATO)", "", -1} },
            { "U_B_FullGhillie_ard", "", 70000, {"Full Ghillie (Arid) (NATO)", "", -1} },
            { "U_B_FullGhillie_lsh", "", 70000, {"Full Ghillie (Lush) (NATO)", "", -1} },
            { "U_O_SpecopsUniform_ocamo", "", 14500, { "Recon Fatigues (Hex)", "", -1 } },
            { "U_O_PilotCoveralls", "", 15610, { "Pilot Coveralls [AAF]", "", -1 } },
            { "U_O_GhillieSuit", "", 50000, { "Ghillie Suit [AAF]", "", -1 } },
            { "U_I_G_resistanceLeader_F", "", 5000, { "Combat Fatigues (Stavrou)", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_ShemagOpen_tan", "", 850, { "", "", -1 } },
            { "H_Shemag_olive", "", 850, { "", "", -1 } },
            { "H_ShemagOpen_khk", "", 800, { "", "", -1 } },
            { "H_HelmetO_ocamo", "", 2500, { "", "", -1 } },
            { "H_MilCap_oucamo", "", 1200, { "", "", -1 } },
            { "H_Bandanna_camo", "", 650, { "", "", -1 } },
            { "H_BandMask_blk", "Hat & Bandanna", 3000, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 25, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 20, { "", "", -1 } },
            { "G_Sport_Checkered", "", 20, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
            { "G_Squares", "", 10, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
            { "G_Combat", "", 55, { "", "", -1 } },
            // BI
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
            { "V_Rangemaster_belt", "Rangemaster Belt", 2000, { "", "", -1 } },
            { "V_BandollierB_blk", "Slash Bandolier (Black)", 3000, { "", "", -1 } },
            { "V_BandollierB_khk", "Slash Bandolier (Khaki)", 3000, { "", "", -1 } },
            { "V_PlateCarrier1_rgr", "Carrier Lite (Green)", 10000, { "", "", -1 } },
            { "V_PlateCarrier2_rgr", "Carrier Rig (Green)", 10000, { "", "", -1 } },
            { "V_PlateCarrier3_rgr", "Carrier Rig (Green)", 10000, { "", "", -1 } },
            { "V_PlateCarrierGL_rgr", "Carrier GL Rig (Green)", 10000, { "", "", -1 } },
            { "V_PlateCarrier1_blk", "Carrier Lite (Black)", 10000, { "", "", -1 } },
            { "V_PlateCarrierSpec_rgr", "Carrier Special Rig (Green)", 10000, { "", "", -1 } },
            { "V_Chestrig_khk", "Chest Rig (Khaki)", 8000, { "", "", -1 } },
            { "V_Chestrig_blk", "Fighter Chestrig (Black)", 8000, { "", "", -1 } },
            { "V_TacVest_khk", "Tactical Vest (Khaki)", 8000, { "", "", -1 } },
            { "V_TacVest_blk", "Tactical Vest (Black)", 8000, { "", "", -1 } },
            { "V_TacVestIR_blk", "Raven Vest", 9000, { "", "", -1 } },
            { "V_TacVestCamo_khk", "Camouflaged Vest", 9000, { "", "", -1 } },
            { "V_HarnessO_brn", "LBV Harness", 5000, { "", "", -1 } },
            { "V_HarnessO_gry", "LBV Harness (Gray)", 5000, { "", "", -1 } },
            { "V_PlateCarrierIA1_dgtl", "GA Carrier Lite (Digi)", 7000, { "", "", -1 } },
            { "V_PlateCarrierIAGL_dgtl", "GA Carrier GL Rig (Digi)", 7000, { "", "", -1 } },
            { "V_RebreatherB", "Rebreather (NATO)", 5000, { "", "", -1 } },
            { "V_PlateCarrier_Kerry", "US Plate Carrier Rig (Kerry)", 8000, { "", "", -1 } },
            { "V_PlateCarrierH_CTRG", "CTRG Plate Carrier Rig Mk.2 (Heavy)", 8000, { "", "", -1 } },
            { "V_I_G_resistanceLeader_F", "Tactical Vest (Stavrou)", 8000, { "", "", -1 } },
            { "V_PlateCarrierSpec_blk", "Carrier Special Rig (Black)", 10000, { "", "", -1 } },
            { "V_PlateCarrierSpec_mtp", "Carrier Special Rig (MTP)", 10000, { "", "", -1 } },
            { "V_PlateCarrierGL_blk", "Carrier GL Rig (Black)", 10000, { "", "", -1 } },
            { "V_PlateCarrierGL_mtp", "Carrier GL Rig (MTP)", 10000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
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
            { "B_Bergen_sgg", "", 6500, { "", "", -1 } },
            { "B_Bergen_mcamo", "", 6500, { "", "", -1 } },
            { "B_Bergen_rgr", "", 6500, { "", "", -1 } },
            { "B_Bergen_blk", "", 6500, { "", "", -1 } },
            { "B_FieldPack_blk", "", 5000, { "", "", -1 } },
            { "B_FieldPack_ocamo", "", 5000, { "", "", -1 } },
            { "B_FieldPack_oucamo", "", 5000, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oli", "", 7500, { "", "", -1 } },
            { "B_Carryall_khk", "", 7500, { "", "", -1 } },
            { "B_Carryall_cbr", "", 7500, { "", "", -1 } },
            { "B_OutdoorPack_blk", "", 500, { "", "", -1 } }
        };
    };



 class reb1 {
        title = "Loja de Roupas";
        license = "donator";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_IG_Guerilla1_1", "Guerilla Garment", 2500, {"", "", -1} },
            { "U_B_CTRG_1", "", 2500, {"CTRG Combat Uniform", "", -1} },
            { "U_B_CTRG_2", "", 2500, {"CTRG Combat Uniform (Tee)", "", -1} },
            { "U_B_CTRG_3", "", 2500, {"CTRG Combat Uniform (Rolled-up)", "", -1} },
            { "U_B_survival_uniform", "", 2500, {"Survival Fatigues", "", -1} },
            { "U_I_G_Story_Protagonist_F", "Worn Combat Fatigues (Kerry)", 2500, {"", "", -1} },
            { "U_IG_Guerrilla_6_1", "", 2500, {"Guerilla Apparel", "", -1} },
            { "U_BG_Guerrilla_6_1", "", 2500, {"Guerilla Apparel", "", -1} },
            { "U_OG_Guerrilla_6_1", "", 2500, {"Guerilla Apparel", "", -1} },
            { "U_O_FullGhillie_sard", "", 35000, {"Full Ghillie (Semi-Arid) (NATO)", "", -1} },
            { "U_B_FullGhillie_ard", "", 35000, {"Full Ghillie (Arid) (NATO)", "", -1} },
            { "U_B_FullGhillie_lsh", "", 35000, {"Full Ghillie (Lush) (NATO)", "", -1} },
            { "U_O_SpecopsUniform_ocamo", "", 7500, { "Recon Fatigues (Hex)", "", -1 } },
            { "U_O_PilotCoveralls", "", 7800, { "Pilot Coveralls [AAF]", "", -1 } },
            { "U_O_GhillieSuit", "", 25000, { "Ghillie Suit [AAF]", "", -1 } },
            { "U_I_G_resistanceLeader_F", "", 2500, { "Combat Fatigues (Stavrou)", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_ShemagOpen_tan", "", 425, { "", "", -1 } },
            { "H_Shemag_olive", "", 425, { "", "", -1 } },
            { "H_ShemagOpen_khk", "", 400, { "", "", -1 } },
            { "H_HelmetO_ocamo", "", 1250, { "", "", -1 } },
            { "H_MilCap_oucamo", "", 600, { "", "", -1 } },
            { "H_Bandanna_camo", "", 325, { "", "", -1 } },
            { "H_BandMask_blk", "Hat & Bandanna", 1500, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 15, { "", "", -1 } },
            { "G_Shades_Blue", "", 10, { "", "", -1 } },
            { "G_Sport_Blackred", "", 10, { "", "", -1 } },
            { "G_Sport_Checkered", "", 10, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 10, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 10, { "", "", -1 } },
            { "G_Squares", "", 10, { "", "", -1 } },
            { "G_Lowprofile", "", 15, { "", "", -1 } },
            { "G_Combat", "", 25, { "", "", -1 } },
            // BI
            { "G_Balaclava_blk", "", 75, { "", "", -1 } },
            { "G_Balaclava_combat", "", 75, { "", "", -1 } },
            { "G_Balaclava_lowprofile", "", 75, { "", "", -1 } },
            { "G_Balaclava_oli", "", 75, { "", "", -1 } },
            { "G_Bandanna_aviator", "", 75, { "", "", -1 } },
            { "G_Bandanna_beast", "", 75, { "", "", -1 } },
            { "G_Bandanna_blk", "", 75, { "", "", -1 } },
            { "G_Bandanna_khk", "", 75, { "", "", -1 } },
            { "G_Bandanna_oli", "", 75, { "", "", -1 } },
            { "G_Bandanna_shades", "", 75, { "", "", -1 } },
            { "G_Bandanna_sport", "", 75, { "", "", -1 } },
            { "G_Bandanna_tan", "", 75, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "Rangemaster Belt", 1000, { "", "", -1 } },
            { "V_BandollierB_blk", "Slash Bandolier (Black)", 1500, { "", "", -1 } },
            { "V_BandollierB_khk", "Slash Bandolier (Khaki)", 1500, { "", "", -1 } },
            { "V_PlateCarrier1_rgr", "Carrier Lite (Green)", 5000, { "", "", -1 } },
            { "V_PlateCarrier2_rgr", "Carrier Rig (Green)", 5000, { "", "", -1 } },
            { "V_PlateCarrier3_rgr", "Carrier Rig (Green)", 5000, { "", "", -1 } },
            { "V_PlateCarrierGL_rgr", "Carrier GL Rig (Green)", 5000, { "", "", -1 } },
            { "V_PlateCarrier1_blk", "Carrier Lite (Black)", 5000, { "", "", -1 } },
            { "V_PlateCarrierSpec_rgr", "Carrier Special Rig (Green)", 5000, { "", "", -1 } },
            { "V_Chestrig_khk", "Chest Rig (Khaki)", 4000, { "", "", -1 } },
            { "V_Chestrig_blk", "Fighter Chestrig (Black)", 4000, { "", "", -1 } },
            { "V_TacVest_khk", "Tactical Vest (Khaki)", 8000, { "", "", -1 } },
            { "V_TacVest_blk", "Tactical Vest (Black)", 4000, { "", "", -1 } },
            { "V_TacVestIR_blk", "Raven Vest", 4500, { "", "", -1 } },
            { "V_TacVestCamo_khk", "Camouflaged Vest", 4500, { "", "", -1 } },
            { "V_HarnessO_brn", "LBV Harness", 2500, { "", "", -1 } },
            { "V_HarnessO_gry", "LBV Harness (Gray)", 2500, { "", "", -1 } },
            { "V_PlateCarrierIA1_dgtl", "GA Carrier Lite (Digi)", 3500, { "", "", -1 } },
            { "V_PlateCarrierIAGL_dgtl", "GA Carrier GL Rig (Digi)", 3500, { "", "", -1 } },
            { "V_RebreatherB", "Rebreather (NATO)", 2500, { "", "", -1 } },
            { "V_PlateCarrier_Kerry", "US Plate Carrier Rig (Kerry)", 4000, { "", "", -1 } },
            { "V_PlateCarrierH_CTRG", "CTRG Plate Carrier Rig Mk.2 (Heavy)", 4000, { "", "", -1 } },
            { "V_I_G_resistanceLeader_F", "Tactical Vest (Stavrou)", 4000, { "", "", -1 } },
            { "V_PlateCarrierSpec_blk", "Carrier Special Rig (Black)", 5000, { "", "", -1 } },
            { "V_PlateCarrierSpec_mtp", "Carrier Special Rig (MTP)", 5000, { "", "", -1 } },
            { "V_PlateCarrierGL_blk", "Carrier GL Rig (Black)", 5000, { "", "", -1 } },
            { "V_PlateCarrierGL_mtp", "Carrier GL Rig (MTP)", 5000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_AssaultPack_khk", "", 1000, { "", "", -1 } },
            { "B_AssaultPack_dgtl", "", 1000, { "", "", -1 } },
            { "B_AssaultPack_rgr", "", 1000, { "", "", -1 } },
            { "B_AssaultPack_sgg", "", 1000, { "", "", -1 } },
            { "B_AssaultPack_blk", "", 1000, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 1000, { "", "", -1 } },
            { "B_AssaultPack_mcamo", "", 1000, { "", "", -1 } },
            { "B_TacticalPack_oli", "", 1250, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 1750, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 1750, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 1750, { "", "", -1 } },
            { "B_Bergen_sgg", "", 3250, { "", "", -1 } },
            { "B_Bergen_mcamo", "", 3250, { "", "", -1 } },
            { "B_Bergen_rgr", "", 3250, { "", "", -1 } },
            { "B_Bergen_blk", "", 3250, { "", "", -1 } },
            { "B_FieldPack_blk", "", 2500, { "", "", -1 } },
            { "B_FieldPack_ocamo", "", 2500, { "", "", -1 } },
            { "B_FieldPack_oucamo", "", 2500, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 3750, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 3750, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 3750, { "", "", -1 } },
            { "B_Carryall_oli", "", 3750, { "", "", -1 } },
            { "B_Carryall_khk", "", 3750, { "", "", -1 } },
            { "B_Carryall_cbr", "", 3750, { "", "", -1 } },
            { "B_OutdoorPack_blk", "", 250, { "", "", -1 } }
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
 class Doador {
        title = "Loja do Doador";
        license = "donator";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_IG_Guerilla1_1", "Guerilla Garment", 2500, {"", "", -1} },
            { "U_B_CTRG_1", "", 2500, {"CTRG Combat Uniform", "", -1} },
            { "U_B_CTRG_2", "", 2500, {"CTRG Combat Uniform (Tee)", "", -1} },
            { "U_B_CTRG_3", "", 2500, {"CTRG Combat Uniform (Rolled-up)", "", -1} },
            { "U_B_survival_uniform", "", 2500, {"Survival Fatigues", "", -1} },
            { "U_I_G_Story_Protagonist_F", "Worn Combat Fatigues (Kerry)", 2500, {"", "", -1} },
            { "U_IG_Guerrilla_6_1", "", 2500, {"Guerilla Apparel", "", -1} },
            { "U_BG_Guerrilla_6_1", "", 2500, {"Guerilla Apparel", "", -1} },
            { "U_OG_Guerrilla_6_1", "", 2500, {"Guerilla Apparel", "", -1} },
            { "U_O_FullGhillie_sard", "", 35000, {"Full Ghillie (Semi-Arid) (NATO)", "", -1} },
            { "U_B_FullGhillie_ard", "", 35000, {"Full Ghillie (Arid) (NATO)", "", -1} },
            { "U_B_FullGhillie_lsh", "", 35000, {"Full Ghillie (Lush) (NATO)", "", -1} },
            { "U_O_SpecopsUniform_ocamo", "", 7500, { "Recon Fatigues (Hex)", "", -1 } },
            { "U_O_PilotCoveralls", "", 7800, { "Pilot Coveralls [AAF]", "", -1 } },
            { "U_O_GhillieSuit", "", 25000, { "Ghillie Suit [AAF]", "", -1 } },
            { "U_I_G_resistanceLeader_F", "", 2500, { "Combat Fatigues (Stavrou)", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_ShemagOpen_tan", "", 425, { "", "", -1 } },
            { "H_Shemag_olive", "", 425, { "", "", -1 } },
            { "H_ShemagOpen_khk", "", 400, { "", "", -1 } },
            { "H_HelmetO_ocamo", "", 1250, { "", "", -1 } },
            { "H_MilCap_oucamo", "", 600, { "", "", -1 } },
            { "H_Bandanna_camo", "", 325, { "", "", -1 } },
            { "H_BandMask_blk", "Hat & Bandanna", 1500, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 15, { "", "", -1 } },
            { "G_Shades_Blue", "", 10, { "", "", -1 } },
            { "G_Sport_Blackred", "", 10, { "", "", -1 } },
            { "G_Sport_Checkered", "", 10, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 10, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 10, { "", "", -1 } },
            { "G_Squares", "", 10, { "", "", -1 } },
            { "G_Lowprofile", "", 15, { "", "", -1 } },
            { "G_Combat", "", 25, { "", "", -1 } },
            // BI
            { "G_Balaclava_blk", "", 75, { "", "", -1 } },
            { "G_Balaclava_combat", "", 75, { "", "", -1 } },
            { "G_Balaclava_lowprofile", "", 75, { "", "", -1 } },
            { "G_Balaclava_oli", "", 75, { "", "", -1 } },
            { "G_Bandanna_aviator", "", 75, { "", "", -1 } },
            { "G_Bandanna_beast", "", 75, { "", "", -1 } },
            { "G_Bandanna_blk", "", 75, { "", "", -1 } },
            { "G_Bandanna_khk", "", 75, { "", "", -1 } },
            { "G_Bandanna_oli", "", 75, { "", "", -1 } },
            { "G_Bandanna_shades", "", 75, { "", "", -1 } },
            { "G_Bandanna_sport", "", 75, { "", "", -1 } },
            { "G_Bandanna_tan", "", 75, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "Rangemaster Belt", 1000, { "", "", -1 } },
            { "V_BandollierB_blk", "Slash Bandolier (Black)", 1500, { "", "", -1 } },
            { "V_BandollierB_khk", "Slash Bandolier (Khaki)", 1500, { "", "", -1 } },
            { "V_PlateCarrier1_rgr", "Carrier Lite (Green)", 5000, { "", "", -1 } },
            { "V_PlateCarrier2_rgr", "Carrier Rig (Green)", 5000, { "", "", -1 } },
            { "V_PlateCarrier3_rgr", "Carrier Rig (Green)", 5000, { "", "", -1 } },
            { "V_PlateCarrierGL_rgr", "Carrier GL Rig (Green)", 5000, { "", "", -1 } },
            { "V_PlateCarrier1_blk", "Carrier Lite (Black)", 5000, { "", "", -1 } },
            { "V_PlateCarrierSpec_rgr", "Carrier Special Rig (Green)", 5000, { "", "", -1 } },
            { "V_Chestrig_khk", "Chest Rig (Khaki)", 4000, { "", "", -1 } },
            { "V_Chestrig_blk", "Fighter Chestrig (Black)", 4000, { "", "", -1 } },
            { "V_TacVest_khk", "Tactical Vest (Khaki)", 8000, { "", "", -1 } },
            { "V_TacVest_blk", "Tactical Vest (Black)", 4000, { "", "", -1 } },
            { "V_TacVestIR_blk", "Raven Vest", 4500, { "", "", -1 } },
            { "V_TacVestCamo_khk", "Camouflaged Vest", 4500, { "", "", -1 } },
            { "V_HarnessO_brn", "LBV Harness", 2500, { "", "", -1 } },
            { "V_HarnessO_gry", "LBV Harness (Gray)", 2500, { "", "", -1 } },
            { "V_PlateCarrierIA1_dgtl", "GA Carrier Lite (Digi)", 3500, { "", "", -1 } },
            { "V_PlateCarrierIAGL_dgtl", "GA Carrier GL Rig (Digi)", 3500, { "", "", -1 } },
            { "V_RebreatherB", "Rebreather (NATO)", 2500, { "", "", -1 } },
            { "V_PlateCarrier_Kerry", "US Plate Carrier Rig (Kerry)", 4000, { "", "", -1 } },
            { "V_PlateCarrierH_CTRG", "CTRG Plate Carrier Rig Mk.2 (Heavy)", 4000, { "", "", -1 } },
            { "V_I_G_resistanceLeader_F", "Tactical Vest (Stavrou)", 4000, { "", "", -1 } },
            { "V_PlateCarrierSpec_blk", "Carrier Special Rig (Black)", 5000, { "", "", -1 } },
            { "V_PlateCarrierSpec_mtp", "Carrier Special Rig (MTP)", 5000, { "", "", -1 } },
            { "V_PlateCarrierGL_blk", "Carrier GL Rig (Black)", 5000, { "", "", -1 } },
            { "V_PlateCarrierGL_mtp", "Carrier GL Rig (MTP)", 5000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_AssaultPack_khk", "", 1000, { "", "", -1 } },
            { "B_AssaultPack_dgtl", "", 1000, { "", "", -1 } },
            { "B_AssaultPack_rgr", "", 1000, { "", "", -1 } },
            { "B_AssaultPack_sgg", "", 1000, { "", "", -1 } },
            { "B_AssaultPack_blk", "", 1000, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 1000, { "", "", -1 } },
            { "B_AssaultPack_mcamo", "", 1000, { "", "", -1 } },
            { "B_TacticalPack_oli", "", 1250, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 1750, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 1750, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 1750, { "", "", -1 } },
            { "B_Bergen_sgg", "", 3250, { "", "", -1 } },
            { "B_Bergen_mcamo", "", 3250, { "", "", -1 } },
            { "B_Bergen_rgr", "", 3250, { "", "", -1 } },
            { "B_Bergen_blk", "", 3250, { "", "", -1 } },
            { "B_FieldPack_blk", "", 2500, { "", "", -1 } },
            { "B_FieldPack_ocamo", "", 2500, { "", "", -1 } },
            { "B_FieldPack_oucamo", "", 2500, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 3750, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 3750, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 3750, { "", "", -1 } },
            { "B_Carryall_oli", "", 3750, { "", "", -1 } },
            { "B_Carryall_khk", "", 3750, { "", "", -1 } },
            { "B_Carryall_cbr", "", 3750, { "", "", -1 } },
            { "B_OutdoorPack_blk", "", 250, { "", "", -1 } }
        };
    };
