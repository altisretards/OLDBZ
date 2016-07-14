/*
	File: fn_copLoadout.sqf
	Author: Bryan "Tonic" Boardwine
	Edited: Itsyuka
	
	Description:
	Loads the cops out with the default gear.
*/
private "_handle";
_handle = [] spawn life_fnc_stripDownPlayer;
waitUntil {scriptDone _handle};

switch(life_coplevel) do {

//GAV
	
	case 1: {
		
		player addUniform "U_Rangemaster";
		player addVest "V_Rangemaster_belt";
		player addHeadgear "H_Cap_police";

		player addWeapon "hgun_P07_snds_F";
		player addMagazine "16Rnd_9x21_Mag";
		player addMagazine "16Rnd_9x21_Mag";
		player addMagazine "16Rnd_9x21_Mag";
		player addMagazine "16Rnd_9x21_Mag";
		player addMagazine "16Rnd_9x21_Mag";

		player addItem "ItemMap";
		player assignItem "ItemMap";
		player addItem "ItemCompass";
		player assignItem "ItemCompass";
		player addItem "ItemWatch";
		player assignItem "ItemWatch";
		player addItem "ItemGPS";
		player assignItem "ItemGPS";

		[] call life_fnc_playerSkins;
		[] call life_fnc_saveGear;
	};
	
//Brigadier
	
	case 2: {

		player addUniform "U_Rangemaster";
		player addVest "V_TacVest_blk_POLICE";
		player addHeadgear "H_Cap_police";

		player addWeapon "arifle_SDAR_F";
		player addMagazine "30Rnd_556x45_Stanag";
		player addMagazine "30Rnd_556x45_Stanag";
		player addMagazine "30Rnd_556x45_Stanag";

		player addItem "ItemMap";
		player assignItem "ItemMap";
		player addItem "ItemCompass";
		player assignItem "ItemCompass";
		player addItem "ItemWatch";
		player assignItem "ItemWatch";
		player addItem "ItemGPS";
		player assignItem "ItemGPS";
		player addItem "Binocular";
		player assignItem "Binocular";

		[] call life_fnc_playerSkins;
		[] call life_fnc_saveGear;
	};
	
//Brigadier-chef
	
	case 3: {
		
		player addUniform "U_Rangemaster";
		player addVest "V_TacVest_blk_POLICE";
		player addHeadgear "H_Cap_police";

		player addWeapon "arifle_SDAR_F";
		player addMagazine "30Rnd_556x45_Stanag";
		player addMagazine "30Rnd_556x45_Stanag";
		player addMagazine "30Rnd_556x45_Stanag";

		player addItem "ItemMap";
		player assignItem "ItemMap";
		player addItem "ItemCompass";
		player assignItem "ItemCompass";
		player addItem "ItemWatch";
		player assignItem "ItemWatch";
		player addItem "ItemGPS";
		player assignItem "ItemGPS";
		player addItem "Binocular";
		player assignItem "Binocular";

		[] call life_fnc_playerSkins;
		[] call life_fnc_saveGear;
	};
	
//Adjudant
	
	case 4: {

		player addUniform "U_B_PilotCoveralls";
		player addVest "V_TacVestIR_blk";
		player addHeadgear "H_Beret_blk_POLICE";

		player addWeapon "arifle_MXC_F";
		player addMagazine "30Rnd_65x39_caseless_mag";
		player addMagazine "30Rnd_65x39_caseless_mag";
		player addMagazine "30Rnd_65x39_caseless_mag";
		player addMagazine "30Rnd_65x39_caseless_mag";
		player addMagazine "30Rnd_65x39_caseless_mag";

		player addItem "ItemMap";
		player assignItem "ItemMap";
		player addItem "ItemCompass";
		player assignItem "ItemCompass";
		player addItem "ItemWatch";
		player assignItem "ItemWatch";
		player addItem "ItemGPS";
		player assignItem "ItemGPS";
		player addItem "Rangefinder";
		player assignItem "Rangefinder";

		[] call life_fnc_playerSkins;
		[] call life_fnc_saveGear;
	};
	
//Major
	
	case 5: {
		
		player addUniform "U_B_PilotCoveralls";
		player addVest "V_PlateCarrier1_blk";
		player addHeadgear "H_Beret_blk_POLICE";

		player addWeapon "arifle_MX_SW_F";
		player addMagazine "100Rnd_65x39_caseless_mag";
		player addMagazine "30Rnd_65x39_caseless_mag";
		player addMagazine "30Rnd_65x39_caseless_mag";
		player addMagazine "30Rnd_65x39_caseless_mag";

		player addItem "ItemMap";
		player assignItem "ItemMap";
		player addItem "ItemCompass";
		player assignItem "ItemCompass";
		player addItem "ItemWatch";
		player assignItem "ItemWatch";
		player addItem "ItemGPS";
		player assignItem "ItemGPS";
		player addItem "Rangefinder";
		player assignItem "Rangefinder";

		[] call life_fnc_playerSkins;
		[] call life_fnc_saveGear;
	};
	
//Lieutenant
	
	case 6: {
		
		player addUniform "U_B_SpecopsUniform_sgg";
		player addVest "V_PlateCarrier1_blk";
		player addHeadgear "H_Beret_blk_POLICE";

		player addWeapon "arifle_MX_SW_F";
		player addMagazine "100Rnd_65x39_caseless_mag";
		player addMagazine "30Rnd_65x39_caseless_mag";
		player addMagazine "30Rnd_65x39_caseless_mag";
		player addMagazine "30Rnd_65x39_caseless_mag";

		player addItem "ItemMap";
		player assignItem "ItemMap";
		player addItem "ItemCompass";
		player assignItem "ItemCompass";
		player addItem "ItemWatch";
		player assignItem "ItemWatch";
		player addItem "ItemGPS";
		player assignItem "ItemGPS";
		player addItem "Rangefinder";
		player assignItem "Rangefinder";

		[] call life_fnc_playerSkins;
		[] call life_fnc_saveGear;
	};
	
//Capitaine
	
	case 7: {
		
		player addUniform "U_B_SpecopsUniform_sgg";
		player addVest "V_TacVest_blk";
		player addHeadgear "H_Beret_blk_POLICE";

		player addWeapon "srifle_EBR_F";
		player addMagazine "20Rnd_762x51_Mag";
		player addMagazine "20Rnd_762x51_Mag";
		player addMagazine "20Rnd_762x51_Mag";
		player addMagazine "20Rnd_762x51_Mag";
		player addMagazine "20Rnd_762x51_Mag";
		player addMagazine "20Rnd_762x51_Mag";

		player addItem "ItemMap";
		player assignItem "ItemMap";
		player addItem "ItemCompass";
		player assignItem "ItemCompass";
		player addItem "ItemWatch";
		player assignItem "ItemWatch";
		player addItem "ItemGPS";
		player assignItem "ItemGPS";
		player addItem "Rangefinder";
		player assignItem "Rangefinder";

		[] call life_fnc_playerSkins;
		[] call life_fnc_saveGear;
	};
	
//Capitaine
	
	case 8: {
		
		player addUniform "U_B_SpecopsUniform_sgg";
		player addVest "V_TacVest_blk";
		player addHeadgear "H_Beret_blk_POLICE";

		player addWeapon "srifle_DMR_03_F";
		player addMagazine "20Rnd_762x51_Mag";
		player addMagazine "20Rnd_762x51_Mag";
		player addMagazine "20Rnd_762x51_Mag";
		player addMagazine "20Rnd_762x51_Mag";
		player addMagazine "20Rnd_762x51_Mag";
		player addMagazine "20Rnd_762x51_Mag";

		player addItem "ItemMap";
		player assignItem "ItemMap";
		player addItem "ItemCompass";
		player assignItem "ItemCompass";
		player addItem "ItemWatch";
		player assignItem "ItemWatch";
		player addItem "ItemGPS";
		player assignItem "ItemGPS";
		player addItem "Rangefinder";
		player assignItem "Rangefinder";

		[] call life_fnc_playerSkins;
		[] call life_fnc_saveGear;
	};
	
//Lieutenant-colonel
	
	case 9: {
		
		player addUniform "U_B_SpecopsUniform_sgg";
		player addVest "V_TacVest_blk";
		player addHeadgear "H_Beret_blk_POLICE";

		player addWeapon "srifle_DMR_02_F";
		player addMagazine "10Rnd_338_Mag";
		player addMagazine "10Rnd_338_Mag";
		player addMagazine "10Rnd_338_Mag";
		player addMagazine "10Rnd_338_Mag";
		player addMagazine "10Rnd_338_Mag";
		player addMagazine "10Rnd_338_Mag";

		player addItem "ItemMap";
		player assignItem "ItemMap";
		player addItem "ItemCompass";
		player assignItem "ItemCompass";
		player addItem "ItemWatch";
		player assignItem "ItemWatch";
		player addItem "ItemGPS";
		player assignItem "ItemGPS";
		player addItem "Rangefinder";
		player assignItem "Rangefinder";

		[] call life_fnc_playerSkins;
		[] call life_fnc_saveGear;
	};
	
//Colonel
	
	case 10: {
		
		player addUniform "U_B_SpecopsUniform_sgg";
		player addVest "V_TacVest_blk";
		player addHeadgear "H_Beret_blk_POLICE";

		player addWeapon "srifle_DMR_02_F";
		player addMagazine "10Rnd_338_Mag";
		player addMagazine "10Rnd_338_Mag";
		player addMagazine "10Rnd_338_Mag";
		player addMagazine "10Rnd_338_Mag";
		player addMagazine "10Rnd_338_Mag";
		player addMagazine "10Rnd_338_Mag";

		player addItem "ItemMap";
		player assignItem "ItemMap";
		player addItem "ItemCompass";
		player assignItem "ItemCompass";
		player addItem "ItemWatch";
		player assignItem "ItemWatch";
		player addItem "ItemGPS";
		player assignItem "ItemGPS";
		player addItem "Rangefinder";
		player assignItem "Rangefinder";

		[] call life_fnc_playerSkins;
		[] call life_fnc_saveGear;
	};
};