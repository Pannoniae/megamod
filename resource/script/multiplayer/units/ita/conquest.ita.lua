Purchases["conquest.ita"] = {
	{Repeat = 0, --infinite
		Units = {
			--Infantry
				{priority = 2.0, type = {"Infantry", "Squad",}, unit = "squad_light(ita)"},
				{priority = 2.0, type = {"Infantry", "Squad",}, unit = "squad_regular(ita)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_scout(ita)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_elite(ita)"},
				{priority = 2.0, type = {"Infantry", "Squad",}, unit = "squad_pionier(ita)"},
				{priority = 2.0, type = {"Infantry", "Squad",}, unit = "squad_stormtrooper(ita)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "mechanized_infantry_ita"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_commando_late(ita)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_gnr(ita)"},
				{priority = 2.0, type = {"Infantry", "Squad",}, unit = "squad_regular_late(ita)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_stormtrooper_late(ita)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_nembo_para(ita)"},
				{priority = 1.0, type = {"Infantry", "Team",}, unit = "single_mg(ita)"},
				{priority = 1.0, type = {"Infantry", "Team",}, unit = "single_sniper(ita)"},
			--Automatic_weaponry
				{priority = 1.0, type = {"Cannon", "MG",}, unit = "8mm_fiat_revelli_m1914_35"},
				{priority = 1.0, type = {"Cannon", "MG",}, unit = "8mm_breda_37"},
				{priority = 2.0, type = {"Cannon", "AA",}, unit = "cannone_2065"},
				{priority = 0.1, type = {"Cannon", "AT",}, unit = "2cm_solothurn"},
			--AT_Weapons
				{priority = 1.0, type = {"Cannon", "AT",}, unit = "cannone_4732"},
				{priority = 1.5, type = {"Cannon", "AT",}, unit = "cannone_7527"},
				{priority = 1.0, type = {"Cannon", "Support",}, unit = "obice_7513"},
				{priority = 2.0, type = {"Cannon", "AT",}, unit = "7_5cm_pak97_38"},
				{priority = 1.0, type = {"Cannon", "AT",}, unit = "cannone_9053"},
			--Howitzers				
				{priority = 1.5, type = {"Cannon", "Mortar",}, unit = "81mm_brandt_ita"},
				{priority = 1.0, type = {"Cannon", "Artillery",}, unit = "obice_10017"},
			--Wheel_vehicles
				{priority = 1.0, type = {"Vehicle", "MG",}, unit = "as42"},
				{priority = 1.5, type = {"Armored", "MG",}, unit = "ab40"},
				{priority = 2.0, type = {"Armored", "MG",}, unit = "ab41"},
				{priority = 2.0, type = {"Armored", "AT",}, unit = "ab43"},
				{priority = 1.5, type = {"Vehicle", "Artillery",}, unit = "autocannone10017"},
				{priority = 0.5, type = {"Vehicle", "AT",}, unit = "3ro"},
			--Tanks_light
				{priority = 1.0, type = {"Tank", "Light",}, unit = "fiat3000"},
				{priority = 2.0, type = {"Tank", "Light",}, unit = "l640"},
				{priority = 2.0, type = {"Tank", "Light",}, unit = "m1139"},
				{priority = 1.5, type = {"Tank", "Light",}, unit = "m1340"},
				{priority = 1.5, type = {"Tank", "Light",}, unit = "m1441"},
				{priority = 3.0, type = {"Tank", "Light",}, unit = "m1542"},
			--Tanks_medium
				{priority = 2.5, type = {"Tank", "Medium",}, unit = "pz3n_ita"},
				{priority = 2.0, type = {"Tank", "Medium",}, unit = "p2640"},
				{priority = 1.5, type = {"Tank", "Medium",}, unit = "pz4g_ita"},
			--Tanks_heavy
				{priority = 2.5, type = {"Tank", "Medium",}, unit = "pz5d_ita"},
			--SPG
				{priority = 1.5, type = {"Tank", "Light", "Support",}, unit = "m7518"},
				{priority = 1.0, type = {"Tank", "Light", "AT",}, unit = "m7534"},
				{priority = 1.0, type = {"Tank", "Medium", "AT",}, unit = "m10525"},
				{priority = 1.0, type = {"Tank", "Medium", "AT",}, unit = "m7546"},
				{priority = 2.5, type = {"Tank", "Medium", "AT",}, unit = "stug3g_ita"},
		}
	}
}
