#include "..\..\script_macros.hpp"
/*
    File: fn_playerSkins.sqf
    Author: Daniel Stuart

    Description:
    Sets skins for players by their side and uniform.
*/
switch(playerSide) do {
	case civilian: {
		if(EQUAL(LIFE_SETTINGS(getNumber,"civ_skins"),1)) then {
			if(uniform player == "U_C_Poloshirt_blue") then {
				player setObjectTextureGlobal [0, "textures\civilian_uniform_1.jpg"];
			};
			if(uniform player == "U_C_Poloshirt_burgundy") then {
				player setObjectTextureGlobal [0, "textures\civilian_uniform_2.jpg"];
			};
			if(uniform player == "U_C_Poloshirt_stripped") then {
				player setObjectTextureGlobal [0, "textures\civilian_uniform_3.jpg"];
			};
			if(uniform player == "U_C_Poloshirt_tricolour") then {
				player setObjectTextureGlobal [0, "textures\civilian_uniform_4.jpg"];
			};
			if(uniform player == "U_C_Poloshirt_salmon") then {
				player setObjectTextureGlobal [0, "textures\civilian_uniform_5.jpg"];
			};
			if(uniform player == "U_C_Poloshirt_redwhite") then {
				player setObjectTextureGlobal [0, "textures\civilian_uniform_6.jpg"];
			};
			if(uniform player == "U_C_Commoner1_1") then {
				player setObjectTextureGlobal [0, "textures\civilian_uniform_7.jpg"];
			};
		};
	};
	 case west: {
        if (uniform player isEqualTo "U_Rangemaster") then {
            _skinName = "textures\pologen_gav.paa";
            if (LIFE_SETTINGS(getNumber,"cop_extendedSkins") isEqualTo 1) then {
                if (FETCH_CONST(life_coplevel) >= 1) then {
                    _skinName = ["textures\IGGN_polo_",(FETCH_CONST(life_coplevel)),".paa"] 
					joinString "";
			if (LIFE_SETTINGS(getNumber,"cop_extendedSkins") isEqualTo 2) then {
                if (FETCH_CONST(life_coplevel) >= 2) then {
                    _skinName = ["textures\pologen_bgd_",(FETCH_CONST(life_coplevel)),".paa"] 
					joinString "";-
                };

                };
				  };
            };
            player setObjectTextureGlobal [0, _skinName];
        };
		if(uniform player == "U_B_SpecopsUniform_sgg") then {
			player setObjectTextureGlobal [0, "textures\gf_cop.paa"];
		};
		if(uniform player == "U_O_OfficerUniform_ocamo") then {
			player setObjectTextureGlobal [0, "textures\douane_cop.paa"];
		};
		if(uniform player == "U_B_CombatUniform_mcam_worn") then {
			player setObjectTextureGlobal [0, "textures\gign_cop.jpg"];
		};
		if(backpack player == "B_Carryall_oucamo") then {
			unitBackpack player setObjectTextureGlobal [0, ""];
		};
	};
	case independent: {
		if(uniform player == "U_Rangemaster") then {
			player setObjectTextureGlobal [0, "textures\tenue_samu.paa"];
		};
		if(uniform player == "U_C_WorkerCoveralls") then {
			player setObjectTextureGlobal [0, "textures\pompier.paa"];
		};		
		if(backpack player == "B_Carryall_oucamo") then {
			unitBackpack player setObjectTextureGlobal [0, ""];
		};
	};
};