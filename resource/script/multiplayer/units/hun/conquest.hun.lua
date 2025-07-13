Purchases["conquest.hun"] = {
	{Repeat = 0, --infinite
		Units = {
			--Infantry
				{priority = 2.0, type = {"Infantry", "Squad",}, unit = "squad_light(hun)"},
				{priority = 2.0, type = {"Infantry", "Squad",}, unit = "squad_regular(hun)"},
				{priority = 2.0, type = {"Infantry", "Squad",}, unit = "squad_pionier(hun)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_stormtrooper(hun)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_laszlo(hun)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "single_sniper(hun)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "single_mortar(hun)"},
				{priority = 1.0, type = {"Infantry", "Team", "AT",}, unit = "single_at(hun)"},
			--Automatic_weaponry
			--AT_Weapons
				{priority = 1.5, type = {"Cannon", "AA",}, unit = "4cm_bofors_36m"},
				{priority = 1.0, type = {"Cannon", "AT",}, unit = "4cm_40m"},
				{priority = 2.0, type = {"Cannon", "AT",}, unit = "7_5cm_pak97_38_hun"},
				{priority = 0.5, type = {"Cannon", "AT",}, unit = "8cm_bofors_29m"},
			--Howitzers
				{priority = 1.5, type = {"Cannon", "Mortar",}, unit = "81mm_brandt_hun"},
				{priority = 1.5, type = {"Cannon", "Support",}, unit = "8cm_feldkanone"},
				{priority = 1.0, type = {"Cannon", "Artillery",}, unit = "10cm_37m"},
			--Wheel_vehicles
				{priority = 0.1, type = {"Vehicle", "MG",}, unit = "krupp_mg"},
				{priority = 0.5, type = {"Armored", "MG",}, unit = "csaba40m"},
				{priority = 1.0, type = {"Armored", "MG",}, unit = "csaba39m"},
			--Tanks_light
				{priority = 2.0, type = {"Tank", "Light",}, unit = "toldi2"},
				{priority = 2.5, type = {"Tank", "Light",}, unit = "toldi2_late"},
				{priority = 1.0, type = {"Tank", "Light",}, unit = "toldi1"},
				{priority = 1.5, type = {"Tank", "Light",}, unit = "pzkpfw38t_hun"},
				{priority = 1.0, type = {"Tank", "Light", "AA",}, unit = "nimrod"},
			--Tanks_medium
				{priority = 1.0, type = {"Tank", "Medium",}, unit = "turan1"},
				{priority = 2.0, type = {"Tank", "Medium",}, unit = "turan2"},
				{priority = 2.5, type = {"Tank", "Medium",}, unit = "turan2_late"},
				{priority = 1.0, type = {"Tank", "Medium",}, unit = "turan3"},
				{priority = 2.0, type = {"Tank", "Medium",}, unit = "pz3m_hun"},
				{priority = 1.0, type = {"Tank", "Medium",}, unit = "pz4f_hun"},
				{priority = 3.0, type = {"Tank", "Medium",}, unit = "pz4h_hun"},
			--Tanks_heavy
				{priority = 2.0, type = {"Tank", "Heavy",}, unit = "pz6e_hun"},
			--SPG				
				{priority = 1.0, type = {"Tank", "Light", "AT",}, unit = "marder2_hun"},
				{priority = 1.5, type = {"Tank", "Light", "AT",}, unit = "hetzer_hun"},
				{priority = 2.0, type = {"Tank", "Medium", "AT",}, unit = "stug3g_hun"},
				{priority = 1.0, type = {"Tank", "Medium", "Support",}, unit = "zrinyi2"},
				{priority = 1.0, type = {"Tank", "Medium", "AT",}, unit = "zrinyi1"},
		}
	}
}
