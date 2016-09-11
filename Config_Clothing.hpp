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
            { "U_C_Poloshirt_burgundy", "Poloshirt Burgundy", 275, { "", "", -1 } },
            { "U_C_Poloshirt_redwhite", "Poloshirt Red/White", 150, { "", "", -1 } },
            { "U_C_Poloshirt_salmon", "Poloshirt Salmon", 175, { "", "", -1 } },
            { "U_C_Poloshirt_stripped", "Poloshirt stripped", 125, { "", "", -1 } },
            { "U_C_Poloshirt_tricolour", "Poloshirt Tricolor", 350, { "", "", -1 } },
            { "U_C_Poor_2", "Rag tagged clothes", 250, { "", "", -1 } },
            { "U_IG_Guerilla2_2", "Green stripped shirt & Pants", 650, { "", "", -1 } },
            { "U_IG_Guerilla3_1", "Brown Jacket & Pants", 735, { "", "", -1 } },
            { "U_IG_Guerilla2_3", "The Outback Rangler", 120, { "", "", -1 } },
            { "U_C_HunterBody_grn", "The Hunters Look", 150, { "", "", -1 } },
            { "U_C_WorkerCoveralls", "Mechanic Coveralls", 250, { "", "", -1 } },
            { "U_OrestesBody", "Surfing On Land", 110, { "", "", -1 } }
            
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
            { "H_BandMask_blk", "Hat & Bandanna", 300, { "", "", -1 } },
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
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_AssaultPack_khk", "", 1500, { "", "", -1 } },
            { "B_AssaultPack_dgtl", "", 1500, { "", "", -1 } },
            { "B_AssaultPack_rgr", "", 1500, { "", "", -1 } },
            { "B_AssaultPack_sgg", "", 1500, { "", "", -1 } },
            { "B_AssaultPack_blk", "", 1500, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 1500, { "", "", -1 } },
            { "B_AssaultPack_mcamo", "", 1500, { "", "", -1 } }

        };
    };

    class cop {
        title = "STR_Shops_C_Police";
        license = "";
        side = "cop";
        uniforms[] = {
            { "NONE", "Retirer uniforme", 0, { "", "", -1 } },
            { "U_O_OfficerUniform_ocamo", "Uniforme douanes", 25, { "life_coplevel", "SCALAR", 2 } },
			{ "U_Rangemaster", "Uniforme", 25, { "life_coplevel", "SCALAR", 1 } },
			{ "U_NikosAgedBody", "Tenue civile", 25, { "life_coplevel", "SCALAR", 3 } },
			{ "U_O_Wetsuit", "Uniforme de plongee", 25, { "life_coplevel", "SCALAR", 2 } },
			{ "U_Marshal", "Uniforme Haut Grade", 25, { "life_coplevel", "SCALAR", 9 } },
			{ "U_B_CombatUniform_mcam_worn", "Uniforme intervention", 25, { "life_coplevel", "SCALAR", 2 } },
			{ "U_B_SpecopsUniform_sgg", "Uniforme gendarmerie", 25, { "life_coplevel", "SCALAR", 3 } }
        };
        headgear[] = {
            { "NONE", "Retirer eq. tête", 0, { "", "", -1 } },
            { "H_HelmetB_black", "Casque Intervention", 75, { "life_coplevel", "SCALAR", 2 } },
			{ "H_PilotHelmetHeli_B", "Casque BRI", 75, { "life_coplevel", "SCALAR", 2 } },
            { "H_Beret_blk_POLICE", "Bérêt Gendarme", 120, { "life_coplevel", "SCALAR", 1 } },
            { "H_Beret_02", "Lieutenant-colonel", 100, { "life_coplevel", "SCALAR", 10 } },
			{ "H_Beret_Colonel", "Colonel", 100, { "life_coplevel", "SCALAR", 11 } }
        };
        goggles[] = {
            { "NONE", "Retirer lunettes", 0, { "", "", -1 } } ,
			{ "G_Diving", "Cagoule Intervention", 0, { "life_coplevel", "SCALAR", 2 } },
			{ "G_Balaclava_blk", "Cagoule Intervention", 0, { "life_coplevel", "SCALAR", 2 } },
			{ "G_Aviator", "", 0, { "life_coplevel", "SCALAR", 2 } },
			{ "G_Spectacles", "", 0, { "life_coplevel", "SCALAR", 2 } },
			{ "G_Spectacles_Tinted", "", 0, { "life_coplevel", "SCALAR", 2 } }
			
        };
        vests[] = {
            { "NONE", "Retirer gilet", 0, { "", "", -1 } },
            { "V_RebreatherB", "", 0, { "life_coplevel", "SCALAR", 2 } },
			{ "V_Rangemaster_belt", "", 0, { "life_coplevel", "SCALAR", 2 } },
			{ "V_PlateCarrierSpec_blk", "Intervention", 0, { "life_coplevel", "SCALAR", 2 } },
			{ "Vest_V_PlateCarrier1_blk", "Gilet officier", 0, { "life_coplevel", "SCALAR", 2 } }
        };
        backpacks[] = {
            { "NONE", "Retirer sac à dos", 0, { "", "", -1 } },
            { "B_Carryall_oucamo", "Sac caché", 0, { "life_coplevel", "SCALAR", 1 } }
        };
    };

    class dive {
        title = "STR_Shops_C_Diving";
        license = "dive";
        side = "civ";
        uniforms[] = {
            { "NONE", "Retirer tenue", 0, { "", "", -1 } },
            { "U_B_Wetsuit", "", 2000, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Retirer eq. tête", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Retirer lunettes", 0, { "", "", -1 } },
            { "G_Diving", "", 500, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Retirer gilet", 0, { "", "", -1 } },
            { "V_RebreatherB", "", 5000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Retirer sac", 0, { "", "", -1 } }
        };
    };

    class gun_clothing {
        title = "STR_Shops_C_Gun";
        license = "gun";
        side = "civ";
        uniforms[] = {
            { "NONE", "Retirer tenue", 0, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Retirer eq. tête", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Retirer lunettes", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Retirer gilet", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "", 4900, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Retirer sac", 0, { "", "", -1 } }
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
            { "NONE", "Retirer tenue", 0, { "", "", -1 } },
            { "U_Rangemaster", "Tenue SAMU", 450, { "", "", -1 } },
			{ "U_C_WorkerCoveralls", "Tenue pompier", 450, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Retirer eq. tête", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Retirer lunettes", 0, { "", "", -1 } },
            { "G_Shades_Blue", "", 10, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Retirer veste", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Retirer sac", 0, { "", "", -1 } },
            { "B_Carryall_oucamo", "Sac caché", 3000, { "", "", -1 } }
        };
    };

/*    class reb {
        title = "STR_Shops_C_Rebel";
        license = "rebel";
        side = "civ";
        uniforms[] = {
            { "NONE", "Retirer uniforme", 0, { "", "", -1 } },
            { "U_O_CombatUniform_oucamo", "Tenue rebelle", 5000, {"", "", -1} }
        };
        headgear[] = {
            { "NONE", "Retirer eq. tête", 0, { "", "", -1 } },
            { "H_ShemagOpen_tan", "", 850, { "", "", -1 } },
            { "H_Shemag_olive", "", 850, { "", "", -1 } },
            { "H_ShemagOpen_khk", "", 800, { "", "", -1 } },
            { "H_HelmetO_ocamo", "", 2500, { "", "", -1 } },
            { "H_MilCap_oucamo", "", 1200, { "", "", -1 } },
            { "H_Bandanna_camo", "", 650, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Retirer lunettes", 0, { "", "", -1 } },
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
            { "NONE", "Retirer gilet", 0, { "", "", -1 } },
            { "V_BandollierB_blk", "Bandouillère", 10000, { "", "", -1 } },
            { "V_PlateCarrier1_rgr", "Gilet léger", 20000, { "", "", -1 } },
            { "	V_TacVest_khk", "Gilet pare-balles", 120000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Retirer sac", 0, { "", "", -1 } },
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
            { "B_FieldPack_oucamo", "", 500, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 750, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 750, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 750, { "", "", -1 } },
            { "B_Carryall_oli", "", 750, { "", "", -1 } },
            { "B_Carryall_khk", "", 750, { "", "", -1 } },
            { "B_Carryall_cbr", "", 750, { "", "", -1 } },
            { "B_OutdoorPack_blk", "", 50, { "", "", -1 } }
*/


    class kart {
        title = "STR_Shops_C_Kart";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_C_Driver_1_black", "", 150, { "", "", -1 } },
            { "U_C_Driver_1_blue", "", 150, { "", "", -1 } },
            { "U_C_Driver_1_red", "", 150, { "", "", -1 } },
            { "U_C_Driver_1_orange", "", 150, { "", "", -1 } },
            { "U_C_Driver_1_green", "", 150, { "", "", -1 } },
            { "U_C_Driver_1_white", "", 150, { "", "", -1 } },
            { "U_C_Driver_1_yellow", "", 150, { "", "", -1 } },
            { "U_C_Driver_2", "", 350, { "", "", -1 } },
            { "U_C_Driver_1", "", 360, { "", "", -1 } },
            { "U_C_Driver_3", "", 370, { "", "", -1 } },
            { "U_C_Driver_4", "", 370, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_RacingHelmet_1_black_F", "", 100, { "", "", -1 } },
            { "H_RacingHelmet_1_red_F", "", 100, { "", "", -1 } },
            { "H_RacingHelmet_1_white_F", "", 100, { "", "", -1 } },
            { "H_RacingHelmet_1_blue_F", "", 100, { "", "", -1 } },
            { "H_RacingHelmet_1_yellow_F", "", 100, { "", "", -1 } },
            { "H_RacingHelmet_1_green_F", "", 100, { "", "", -1 } },
            { "H_RacingHelmet_1_F", "", 250, { "", "", -1 } },
            { "H_RacingHelmet_2_F", "", 250, { "", "", -1 } },
            { "H_RacingHelmet_3_F", "", 250, { "", "", -1 } },
            { "H_RacingHelmet_4_F", "", 250, { "", "", -1 } }
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
