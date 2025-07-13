Purchases["conquest.jap"] = {
	{Repeat = 0, --infinite
		Units = {
			--Infantry
				-- 1
				{priority = 3.5, type = {"Infantry", "Squad",}, unit = "squad_light(jap)"},
				{priority = 2.0, type = {"Infantry", "Team", "AT",}, unit = "single_at(jap)"},
				-- 2
				{priority = 3.5, type = {"Infantry", "Squad",}, unit = "squad_regular(jap)"},
				{priority = 2.0, type = {"Infantry", "Team","AT",}, unit = "single_mortar(jap)"},
				{priority = 2.0, type = {"Infantry", "Team","AT",}, unit = "single_riflegrenade(jap)"},
				-- 3
				{priority = 2.0, type = {"Infantry", "Squad",}, unit = "squad_pionier(jap)"},
				{priority = 1.5, type = {"Infantry", "Team",}, unit = "single_flamer(jap)"},
				{priority = 1.5, type = {"Infantry", "Team",}, unit = "single_sniper(jap)"},
				-- 4
				{priority = 0.5, type = {"Infantry", "Team",}, unit = "single_engineer(jap)"},
				-- 5
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_stormtrooper(jap)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_snlf_elite(jap)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "mechanized_infantry_jap"},
				-- 6
			--Automatic_weaponry
				{priority = 1.0, type = {"Cannon", "MG",}, unit = "type92_stan"},
				{priority = 1.0, type = {"Cannon", "AA",}, unit = "20mm_type_98"},
				{priority = 1.0, type = {"Cannon", "AA",}, unit = "20mm_type_2"},	
			--AT_Weapons
				{priority = 1.0, type = {"Cannon", "AT",}, unit = "37mm_type_94"},
				{priority = 1.0, type = {"Cannon", "AA", "AT",}, unit = "75mm_type_88"},
				{priority = 1.5, type = {"Cannon", "AT",}, unit = "75mm_type_90"},
				{priority = 2.0, type = {"Cannon", "AT",}, unit = "47mm_type_1"},
				{priority = 1.0, type = {"Cannon", "AA", "AT",}, unit = "75mm_type_4"},
				{priority = 2.0, type = {"Cannon", "Support",}, unit = "70mm_type_92"},
				{priority = 1.5, type = {"Cannon", "Support",}, unit = "75mm_type_41"},
			--Howitzers
				{priority = 1.5, type = {"Cannon", "Mortar",}, unit = "81mm_brandt_jap"},
				{priority = 0.1, type = {"Cannon", "Mortar",}, unit = "200mm_type_4"},
				{priority = 1.0, type = {"Cannon", "Artillery",}, unit = "105mm_type_92"},
				{priority = 0.5, type = {"Cannon", "Artillery",}, unit = "120mm_type_38"},
				{priority = 0.5, type = {"Cannon", "Artillery",}, unit = "150mm_type_96"},
			--Wheel_vehicles
				{priority = 2.5, type = {"Vehicle", "MG",}, unit = "type93"},
				{priority = 1.0, type = {"Vehicle", "AA",}, unit = "type94aa"},
			--Half_tracks
			--Tanks_light
				{priority = 1.0, type = {"Armored", "MG",}, unit = "type94_te-ke"},
				{priority = 1.0, type = {"Tank", "Light",}, unit = "type97_te-ke"},
				{priority = 2.5, type = {"Tank", "Light",}, unit = "type95_ha-go"},
				{priority = 2.0, type = {"Tank", "Light",}, unit = "type4_ke-nu"},
			--Tanks_medium
				{priority = 1.0, type = {"Tank", "Medium",}, unit = "type89_chi-ro"},
				{priority = 1.0, type = {"Tank", "Medium",}, unit = "type89_i-go"},
				{priority = 2.0, type = {"Tank", "Medium",}, unit = "type97_chi-ha"},
				{priority = 1.0, type = {"Tank", "Medium",}, unit = "type97_shi-ki"},
				{priority = 1.0, type = {"Tank", "Medium",}, unit = "type97_shinhoto_47mm"},
				{priority = 1.5, type = {"Tank", "Medium",}, unit = "type1_chi-he"},
				{priority = 2.0, type = {"Tank", "Medium",}, unit = "type97_shinhoto_120mm"},
				{priority = 1.5, type = {"Tank", "Medium",}, unit = "type3_chi-nu"},
				{priority = 2.0, type = {"Tank", "Medium",}, unit = "type5_chi-ri"},
			--SPG
				{priority = 1.0, type = {"Tank", "Light", "AT",}, unit = "type1_ho-ni1"},
				{priority = 2.0, type = {"Tank", "Light", "Support",}, unit = "type1_ho-ni2"},
				{priority = 1.5, type = {"Tank", "Light", "Artillery",}, unit = "type4_ho-ro"},
			--Tanks_heavy
				{priority = 1.0, type = {"Tank", "Heavy",}, unit = "type95_ro-go"},
		}
	}
}