Purchases["conquest.fra"] = {
	{Repeat = 0, --infinite
		Units = {
			--Infantry
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_light(fra)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_regular(fra)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_pionier(fra)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_fallschirmjaeger(fra)"},
				{priority = 1.0, type = {"Infantry", "Team", "Aux",}, unit = "single_auxiliary(fra)"},
				{priority = 1.0, type = {"Infantry", "Team", "MG",}, unit = "single_mg(fra)"},
				{priority = 1.0, type = {"Infantry", "Team", "AT",}, unit = "single_at(fra)"},
				{priority = 1.0, type = {"Infantry", "Team",}, unit = "single_riflegrenade(fra)"},
				{priority = 1.0, type = {"Infantry", "Team",}, unit = "single_flamer(fra)"},
				{priority = 1.0, type = {"Infantry", "Team",}, unit = "single_sniper(fra)"},
				{priority = 3.5, type = {"Infantry", "Squad",}, unit = "squad_light_late(fra)"},
				{priority = 2.0, type = {"Infantry", "Squad", "AT",}, unit = "single_at_late(fra)"},
				{priority = 3.5, type = {"Infantry", "Squad",}, unit = "squad_regular_late(fra)"},
				{priority = 2.0, type = {"Infantry", "Squad", "AT",}, unit = "single_riflegrenade_late(fra)"},
				{priority = 1.5, type = {"Infantry", "Squad",}, unit = "single_flamer_late(fra)"},
				{priority = 1.5, type = {"Infantry", "Squad",}, unit = "single_sniper_late(fra)"},
				{priority = 0.5, type = {"Infantry", "Squad",}, unit = "single_engineer_late(fra)"},
				{priority = 2.0, type = {"Infantry", "Squad",}, unit = "squad_pionier_late(fra)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_marine_late(fra)"},
				{priority = 1.5, type = {"Infantry", "Squad",}, unit = "squad_stormtrooper_late(fra)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_commandos_late(fra)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "mechanized_infantry_fra"},
			--Automatic_weaponry
				{priority = 1.0, type = {"Cannon", "MG",}, unit = "hotchkiss_mle1914"},
				{priority = 1.5, type = {"Cannon", "MG",}, unit = "13mm_hotchkiss"},
				{priority = 2.0, type = {"Cannon", "AA",}, unit = "25mm_hotchkiss_mle38"},
				{priority = 1.5, type = {"Cannon", "MG",}, unit = "0_3cal_m1919a4_fr"},
				{priority = 1.0, type = {"Cannon", "MG",}, unit = "0_5cal_m2hb_fr"},
				{priority = 2.0, type = {"Cannon", "AA",}, unit = "40_mm_m1_fr"},
			--AT_Weapons
				{priority = 1.0, type = {"Cannon", "AT",}, unit = "25mm_hotchkiss_mle34"},
				{priority = 1.0, type = {"Cannon", "AT",}, unit = "47mm_puteaux_mle37"},
				{priority = 2.5, type = {"Cannon", "AT",}, unit = "75mm_mle1897"},
				{priority = 2.5, type = {"Cannon", "AT",}, unit = "57_mm_m1_fr"},
				{priority = 1.5, type = {"Cannon", "AT",}, unit = "75_mm_m1897a4_fr"},
			--Howitzers
				{priority = 1.5, type = {"Cannon", "Mortar",}, unit = "81mm_brandt_fra"},
				{priority = 1.5, type = {"Cannon", "Artillery",}, unit = "105mm_mle1913"},
				{priority = 1.5, type = {"Cannon", "Mortar",}, unit = "81_mm_m1_fr"},
				{priority = 1.5, type = {"Cannon", "Artillery",}, unit = "105_mm_m2a1l_fr"},
				{priority = 0.5, type = {"Cannon", "Artillery",}, unit = "155_mm_m1918"},
			--Wheel_vehicles
				{priority = 1.0, type = {"Vehicle", "MG",}, unit = "laffly_v15t_mg"},
				{priority = 1.0, type = {"Armored", "MG",}, unit = "laffly_s15_toe"},
				{priority = 0.1, type = {"Armored", "AT",}, unit = "laffly15tcc"},
				{priority = 1.0, type = {"Armored", "MG",}, unit = "m3a1_scout_fr"},
				{priority = 3.0, type = {"Armored", "MG",}, unit = "m8_grayhound_fr"},
				{priority = 1.5, type = {"Armored", "MG",}, unit = "m20_fr"},
				{priority = 1.0, type = {"Vehicle", "AA",}, unit = "dodgewc55_fr"},	
				{priority = 0.5, type = {"Armored", "Mortar",}, unit = "m4halftrack_fr"},
				{priority = 1.0, type = {"Armored", "AA",}, unit = "m17_fr"},	
			--Tanks_light
				{priority = 1.0, type = {"Tank", "Medium",}, unit = "char_d2"},
				{priority = 1.5, type = {"Tank", "Medium",}, unit = "s35"},
				{priority = 2.0, type = {"Tank", "Light",}, unit = "m5a1_fr"},
				{priority = 1.5, type = {"Tank", "Light",}, unit = "m8_fr"},
			--Tanks_medium
				{priority = 3.0, type = {"Tank", "Medium",}, unit = "m4a3_75_fr"},
				{priority = 1.5, type = {"Tank", "Medium",}, unit = "m4a3_76_fr"},
				{priority = 0.5, type = {"Tank", "Medium",}, unit = "m4a3e2_jumbo_fr"},
				{priority = 1.0, type = {"Tank", "Heavy",}, unit = "b1bis"},
			--SPG
				{priority = 1.0, type = {"Tank", "Light", "AT",}, unit = "bs-75"},
				{priority = 2.5, type = {"Tank", "Medium", "AT",}, unit = "m10wolverine_fr"},
				{priority = 0.2, type = {"Tank", "Medium", "Artillery",}, unit = "m7_fr"},
		}
	}
}
