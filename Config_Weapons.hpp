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
        name = "Make 'murica great again";
        side = "civ";
        license = "gun";
        level[] = { "", "", -1, "" };
        items[] = {
			{ "hgun_Pistol_heavy_02_F", "Zubr .45ACP", 4200, 1050 },
			{ "hgun_Pistol_heavy_01_F", "4-Five .45ACP", 4200, 1050 },
            { "hgun_PDW2000_F", "PDW2000 9mm", 8400, 2100 },
			{ "SMG_01_F", "Vermin .45ACP", 10000, 2500 },
			/*
			Les Optic se trouvent dans le craft , inutile de les mettre dans le shop.
			
			{ "optic_Yorris", "Optique Zubr", 2500, 750 },
			{ "optic_MRD", "Optique 4-Five", 2500, 750 },
			{ "optic_Holosight_smg", "Optique SMG", 5000, 750 }
			*/
        };
        mags[] = {
            { "11Rnd_45ACP_Mag", "4-Five (11)", 380 },
            { "6Rnd_45ACP_Cylinder", "Zubr (6)", 190 },
            { "16Rnd_9x21_Mag", "PDW2000 (16)", 300 },
            { "30Rnd_9x21_Mag", "PDW2000 (30)", 500 },
			{ "30Rnd_45ACP_Mag_SMG_01", "Vermin (30)", 500 },
			{ "30Rnd_45ACP_Mag_SMG_01_tracer_green", "Vermin - Traçantes (30)", 800 }
        };
    };
/*
Pas de Shop Rebel actuellement , donc inutile de les placer.
    class rebel {
        name = "La cache de Yuri Orlov";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Pistol_heavy_02_F", "Zubr .45ACP", 15000, 1500 },
			{ "hgun_Pistol_heavy_01_F", "4-Five .45ACP", 15000, 1500 },
            { "hgun_PDW2000_F", "PDW2000 9mm", 30000, 3000 },
			{ "SMG_01_F", "Vermin .45ACP", 50000, 5000 },
			{ "arifle_SDAR_F", "SDAR 5.56", 150000, 15000 },
			{ "arifle_TRG20_F", "TRG20 5.56", 150000, 15000 },
			{ "arifle_Mk20_plain_F", "Mk20 5.56", 150000, 15000 },
			{ "arifle_Katiba_F", "Katiba 6.5", 200000, 20000 },
			{ "arifle_MXC_F", "MXC 6.5", 250000, 25000 },
            { "MMG_02_sand_F", "SPMG .338", 350000, 35000 },
            { "srifle_DMR_05_tan_f", "Cyrus 9.3", 550000, 55000 },
            { "optic_Yorris", "Optique Zubr 1x", 2500, 250 },
			{ "optic_MRD", "Optique 4-Five 1x", 2500, 250 },
			{ "optic_Holosight_smg", "Optique SMG 1x 2x", 5000, 500 },
			{ "optic_Holosight", "Holosight 1x 2x", 10000, 1000 },
            { "optic_Arco", "Optique ARCO 2x", 10000, 1000 },
			{ "optic_Hamr", "Optique RCO 2x", 10000, 1000 },
			{ "optic_SOS", "Optique MOS 2.5x 5x", 20000, 2000 },
			{ "optic_KHS_old", "Optique Kahlia 5x 11x", 50000, 5000 },
			{ "acc_flashlight", "Lampe-torche", 2500, 250 },
			{ "acc_pointer_IR", "Pointeur laser", 4500, 450 },
			{ "SmokeShellOrange", "Fumigène orange", 5000, 500 }
        };
        mags[] = {
            { "6Rnd_45ACP_Cylinder", "Zubr (6)", 50 },
            { "11Rnd_45ACP_Mag", "4-Five (11)", 100 },
			{ "16Rnd_9x21_Mag", "PDW2000 (16)", 150 },
			{ "30Rnd_9x21_Mag", "PDW2000 (30)", 250 },
			{ "30Rnd_45ACP_Mag_SMG_01", "Vermin (30)", 250 },
			{ "30Rnd_45ACP_Mag_SMG_01_tracer_green", "Vermin - Traçantes (30)", 300 },
			{ "30Rnd_556x45_Stanag", "5.56 (30)", 500 },
			{ "30Rnd_556x45_Stanag_Tracer_Red", "5.56 - Traçantes (30)", 550 },
			{ "30Rnd_65x39_caseless_green", "Katiba (30)", 750 },
			{ "30Rnd_65x39_caseless_green_mag_Tracer", "Katiba - Traçantes (30)", 850 },
			{ "30Rnd_65x39_caseless_mag", "MXC (30)", 750 },
			{ "30Rnd_65x39_caseless_mag_Tracer", "MXC - Traçantes (30)", 850 },
			{ "130Rnd_338_Mag", "SPMG (130)", 4500 },
			{ "10Rnd_93x64_DMR_05_Mag", "Cyrus (10)", 5000 }
        };
		*/
    };
/*
Même chose que pour les rebelles , les gangs n'ont pas de shop à proprement parlé.
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
            { "optic_ACO_grn_smg", "", 950, 250 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "30Rnd_9x21_Mag", "", 75 }
        };
		*/
    };

    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 75, -1 },
            { "ItemGPS", "", 50, 45 },
            { "ItemMap", "", 25, 35 },
            { "ItemCompass", "", 25, 25 },
            { "ItemWatch", "", 25, -1 },
            { "ToolKit", "", 125, 75 },
            { "FirstAidKit", "", 75, 65 },
            { "NVGoggles", "", 1000, 980 },
            { "Chemlight_red", "", 150, -1 },
            { "Chemlight_yellow", "", 150, 50 },
            { "Chemlight_green", "", 150, 50 },
            { "Chemlight_blue", "", 150, 50 }
        };
        mags[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 75, -1 },
            { "ItemGPS", "", 50, 45 },
            { "ItemMap", "", 25, 35 },
            { "ItemCompass", "", 25, 25 },
            { "ItemWatch", "", 25, -1 },
            { "ToolKit", "", 125, 75 },
            { "FirstAidKit", "", 75, 65 },
            { "NVGoggles", "", 1000, 980 },
            { "Chemlight_red", "", 150, -1 },
            { "Chemlight_yellow", "", 150, 50 },
            { "Chemlight_green", "", 150, 50 },
            { "Chemlight_blue", "", 150, 50 }
        };
        mags[] = {};
    };

    //Cop Shops
    class cop_gav {
        name = "Armurerie GAV";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 1, "Vous n'êtes pas gendarme!" };
        items[] = {
            { "arifle_sdar_F", "Taser", 3500, -1 },
            { "hgun_P07_snds_F", "Pistolet étourdissant", 2500, -1 },
            { "SMG_02_F", "Sting 9mm", 5000, -1 },
            { "Binocular", "Jumelles", 150, -1 },
            { "ItemGPS", "", 100, -1 },
            { "ToolKit", "Trousse à outils", 250, -1 },
            { "muzzle_snds_L", "Silencieux pistolet", 650, -1 },
            { "FirstAidKit", "Kit de soins", 150, -1 },
            { "Medikit", "Trousse médicale", 500, -1 },
            { "NVGoggles_OPFOR", "Vision nocturne", 1000, -1 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "Pistolet étourdissant (16)", 50 },
            { "20Rnd_556x45_UW_mag", "Taser (20)", 50 },
			{ "30Rnd_9x21_Mag", "Sting (30)", 50 }
        };
    };

    class cop_brigadier {
        name = "Brigadier";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 2, "Vous n'êtes pas brigadier!" };
        items[] = {
            { "arifle_Mk20C_plain_F", "Mk20 Court 5.56", 15000, -1 },
            { "muzzle_snds_M", "Silencieux 5.56", 500, -1 },
			{ "optic_Hamr", "", 500, -1},
			{ "optic_MRCO", "", 500, -1},
			{ "Binocular", "Jumelles", 150, -1 },
            { "ItemGPS", "", 100, -1 },
            { "ToolKit", "Trousse à outils", 250, -1 },
			{ "FirstAidKit", "Kit de soins", 150, -1 },
            { "Medikit", "Trousse médicale", 500, -1 },
            { "NVGoggles_OPFOR", "Vision nocturne", 1000, -1 }
        };
        mags[] = {
            { "30Rnd_556x45_Stanag", "Mk20 (30)", 100 },
            { "30Rnd_556x45_Stanag_Tracer_Green", "Mk20 - Traçantes (30)", 100 }
        };
    };

    class cop_brigadierchef {
        name = "Brigadier Chef";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 3, "Vous n'êtes pas brigadier chef!" };
        items[] = {
            { "arifle_MXC_F", "MX Court - 6.5", 20000, -1 },
            { "muzzle_snds_H", "Silencieux 6.5", 500, -1 },
            { "HandGrenade_Stone", "Flashbang", 1000, -1 },
			{ "SmokeShell", "Fumigène blanc", 1000, -1},
			{ "SmokeShell", "Fumigène bleu", 1000, -1},
			{ "Binocular", "Jumelles", 150, -1 },
            { "ItemGPS", "", 100, -1 },
            { "ToolKit", "Trousse à outils", 250, -1 },
			{ "FirstAidKit", "Kit de soins", 150, -1 },
            { "Medikit", "Trousse médicale", 500, -1 },
            { "NVGoggles_OPFOR", "Vision nocturne", 1000, -1 }
        };
        mags[] = {
            { "30Rnd_65x39_caseless_mag", "MX (30)", 150 },
            { "30Rnd_65x39_caseless_mag_Tracer", "MX - Traçantes (30)", 150 }
        };
    };
	
	class cop_adjudant {
        name = "Adjudant";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 4, "Vous n'êtes pas adjudant!" };
        items[] = {
            { "arifle_MXM_F", "MXM 6.5", 25000, -1 },
			{ "arifle_MX_SW_F", "MX SW 6.5", 30000, -1 },
			{ "optic_DMS", "", 500, -1 },
			{ "Binocular", "Jumelles", 150, -1 },
            { "ItemGPS", "", 100, -1 },
            { "ToolKit", "Trousse à outils", 250, -1 },
			{ "FirstAidKit", "Kit de soins", 150, -1 },
            { "Medikit", "Trousse médicale", 500, -1 },
            { "NVGoggles_OPFOR", "Vision nocturne", 1000, -1 }
        };
        mags[] = {
            { "30Rnd_65x39_caseless_mag", "MXM/MX SW (30)", 200 },
			{ "30Rnd_65x39_caseless_mag_Tracer", "MXM/MX SW - Traçantes (30)", 200 },
			{ "100Rnd_65x39_caseless_mag", "MX SW (100)", 200 },
			{ "100Rnd_65x39_caseless_mag_Tracer", "MX SW - Traçantes (100)", 200 }
        };
    };
	
	class cop_major {
        name = "Major";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 5, "Vous n'êtes pas major!" };
        items[] = {
            { "arifle_Katiba_GL_F", "Katiba 6.5 GL", 35000, -1 },
			{ "LMG_Mk200_F", "Mk200", 40000, -1 },
			{ "1Rnd_Smoke_Grenade_shell", "GL - Fumigène blanc", 750 },
			{ "Binocular", "Jumelles", 150, -1 },
            { "ItemGPS", "", 100, -1 },
            { "ToolKit", "Trousse à outils", 250, -1 },
			{ "FirstAidKit", "Kit de soins", 150, -1 },
            { "Medikit", "Trousse médicale", 500, -1 },
            { "NVGoggles_OPFOR", "Vision nocturne", 1000, -1 }
        };
        mags[] = {
            { "30Rnd_65x39_caseless_green", "Katiba (30)", 250 },
			{ "30Rnd_65x39_caseless_green_mag_Tracer", "Katiba - Traçantes (30)", 250 },
			{ "200Rnd_65x39_cased_Box", "Mk200 (200)", 250 },
			{ "200Rnd_65x39_cased_Box_Tracer", "Mk200 - Traçantes (200)", 250 },
        };
    };
	
	class cop_lieutenant {
        name = "Lieutenant";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 6, "Vous n'êtes pas lieutenant!" };
        items[] = {
            { "srifle_EBR_F", "Mk18 7.62", 45000, -1 },
			{ "muzzle_snds_B", "Silencieux 7.62", 500, -1 },
			{ "optic_SOS", "", 500, -1 },
			{ "Binocular", "Jumelles", 150, -1 },
            { "ItemGPS", "", 100, -1 },
            { "ToolKit", "Trousse à outils", 250, -1 },
			{ "FirstAidKit", "Kit de soins", 150, -1 },
            { "Medikit", "Trousse médicale", 500, -1 },
            { "NVGoggles_OPFOR", "Vision nocturne", 1000, -1 }
        };
        mags[] = {
            { "20Rnd_762x51_Mag", "Mk18 (20)", 300 }
			
        };
    };
	
	class cop_capitaine {
        name = "Capitaine";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 7, "Vous n'êtes pas capitaine!" };
        items[] = {
            { "hgun_Pistol_heavy_01_F", "4-Five .45ACP", 5000, -1 },
			{ "srifle_DMR_03_F", "Mk-I EMR 7.62", 50000, -1 },
			{ "muzzle_snds_acp", "Silencieux .45ACP", 500, -1 },
			{ "muzzle_snds_B", "Silencieux 7.62", 500, -1 },
			{ "optic_MRD", "", 500, -1 },
			{ "optic_KHS_blk", "", 500, -1 },
			{ "optic_AMS", "", 500, -1 },
			{ "Binocular", "Jumelles", 150, -1 },
            { "ItemGPS", "", 100, -1 },
            { "ToolKit", "Trousse à outils", 250, -1 },
			{ "FirstAidKit", "Kit de soins", 150, -1 },
            { "Medikit", "Trousse médicale", 500, -1 },
            { "NVGoggles_OPFOR", "Vision nocturne", 1000, -1 }
        };
        mags[] = {
            { "11Rnd_45ACP_Mag", "4-Five (11)", 250 },
			{ "20Rnd_762x51_Mag", "Mk-I (20)", 350 }
        };
    };
	
	class cop_commandant {
        name = "Commandant";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 8, "Vous n'êtes pas commandant!" };
        items[] = {
            { "srifle_DMR_02_F", "MAR-10 .338", 55000, -1 },
			{ "launch_RPG32_F", "Dildo launcher", 150000 },
			{ "muzzle_snds_338_black", "Silencieux .338", 500, -1 },
			{ "optic_LRPS", "", 500, -1 },
			{ "optic_NVS", "", 500, -1 },
			{ "B_UAV_01_backpack_F", "Sac drone", 45000, -1 },
			{ "B_UavTerminal", "Terminal drone", 500, -1 },
			{ "Binocular", "Jumelles", 150, -1 },
            { "ItemGPS", "", 100, -1 },
            { "ToolKit", "Trousse à outils", 250, -1 },
			{ "FirstAidKit", "Kit de soins", 150, -1 },
            { "Medikit", "Trousse médicale", 500, -1 },
            { "NVGoggles_OPFOR", "Vision nocturne", 1000, -1 }
        };
        mags[] = {
            { "10Rnd_338_Mag", "MAR-10 (10)", 400 },
			{ "RPG32_F", "Plug anal", 15000 },
			{ "RPG32_HE_F", "Gode à pointes", 17500 }
        };
    };
	
	class cop_lieutenantcol {
        name = "Lieutenant-Colonel";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 9, "Vous n'êtes pas lieutenant-colonel!" };
        items[] = {
            { "MMG_02_black_F", "SPMG .338", 60000, -1 },
			{ "launch_RPG32_F", "Dildo launcher", 150000, -1 },
			{ "muzzle_snds_338_black", "Silencieux .338", 500, -1 },
			{ "B_UAV_01_backpack_F", "Sac drone", 45000, -1 },
			{ "B_UavTerminal", "Terminal drone", 500, -1 },
			{ "Binocular", "Jumelles", 150, -1 },
            { "ItemGPS", "", 100, -1 },
            { "ToolKit", "Trousse à outils", 250, -1 },
			{ "FirstAidKit", "Kit de soins", 150, -1 },
            { "Medikit", "Trousse médicale", 500, -1 },
            { "NVGoggles_OPFOR", "Vision nocturne", 1000, -1 }
        };
        mags[] = {
            { "130Rnd_338_Mag", "SPMG (130)", 450 },
			{ "RPG32_F", "Plug anal", 15000 },
			{ "RPG32_HE_F", "Gode à pointes", 17500 }
        };
    };
	
	class cop_colonel {
        name = "Colonel";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 10, "Vous n'êtes pas colonel!" };
        items[] = {
            { "MMG_02_black_F", "SPMG .338", 60000, -1 },
			{ "launch_RPG32_F", "Dildo launcher", 150000, -1 },
			{ "muzzle_snds_338_black", "Silencieux .338", 500, -1 },
			{ "B_UAV_01_backpack_F", "Sac drone", 500, -1 },
			{ "B_UavTerminal", "Terminal drone", 500, -1 },
			{ "Binocular", "Jumelles", 150, -1 },
            { "ItemGPS", "", 100, -1 },
            { "ToolKit", "Trousse à outils", 250, -1 },
			{ "FirstAidKit", "Kit de soins", 150, -1 },
            { "Medikit", "Trousse médicale", 500, -1 },
            { "NVGoggles_OPFOR", "Vision nocturne", 1000, -1 }
        };
        mags[] = {
            { "130Rnd_338_Mag", "SPMG (130)", 450 },
			{ "RPG32_F", "Plug anal", 15000 },
			{ "RPG32_HE_F", "Gode à pointes", 17500 }
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
