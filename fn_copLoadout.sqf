#include "..\script_macros.hpp"

/*
	File: fn_copLoadout.sqf
	Author: Bryan "Tonic" Boardwine
	Edited: Itsyuka
	
	Description:
	Loads the cops out with the default gear.
*/

private["_handle"];
_handle = [] spawn life_fnc_stripDownPlayer;
waitUntil {scriptDone _handle};

//GAV

	if(FETCH_CONST(life_coplevel) == 1) then {
		
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
	};
	
//Brigadier
	
	if(FETCH_CONST(life_coplevel) == 2) then {

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
	};
	
//Brigadier-chef
	
	if(FETCH_CONST(life_coplevel) == 3) then {
		
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
	};
	
//Adjudant
	
	if(FETCH_CONST(life_coplevel) == 4) then {

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
	};
	
//Major
	
	if(FETCH_CONST(life_coplevel) == 5) then {
		
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
	};
	
//Lieutenant
	
	if(FETCH_CONST(life_coplevel) == 6) then {
		
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
	};
	
//Capitaine
	
	if(FETCH_CONST(life_coplevel) == 7) then {
		
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
	};
	
//Capitaine
	
	if(FETCH_CONST(life_coplevel) == 8) then {
		
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
	};
	
//Lieutenant-colonel
	
	if(FETCH_CONST(life_coplevel) == 9) then {
		
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
	};
	
//Colonel
	
	if(FETCH_CONST(life_coplevel) == 10) then {
		
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
	};
	
[] call life_fnc_playerSkins;
[] call life_fnc_saveGear;