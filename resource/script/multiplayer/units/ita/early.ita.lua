Purchases["early.ita"] = {
	{Repeat = 0, --infinite
		Units = {
			--Infantry
				{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "squad_light(ita)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class2",}, unit = "squad_regular(ita)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class1",}, unit = "squad_elite(ita)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class2",}, unit = "squad_pionier(ita)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class1",}, unit = "squad_stormtrooper(ita)"},
				{priority = 1.0, type = {"Infantry", "Team", "Aux", "Class3",}, unit = "single_auxiliary(ita)"},
				{priority = 1.0, type = {"Infantry", "Team", "MG", "Class2",}, unit = "single_mg(ita)"},
				{priority = 1.0, type = {"Infantry", "Team", "AT", "Class1",}, unit = "single_atrifle(ita)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class2",}, unit = "single_sniper(ita)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class2",}, unit = "single_flamer(ita)"},
			--Automatic_weaponry
				{priority = 1.0, type = {"Cannon", "MG", "Class2",}, unit = "8mm_fiat_revelli_m1914_35"},
				{priority = 1.0, type = {"Cannon", "AA", "Class2",}, unit = "cannone_2065"},
				{priority = 1.0, type = {"Cannon", "AT", "Class3",}, unit = "2cm_solothurn"},
			--AT_Weapons
				{priority = 1.0, type = {"Cannon", "AT", "Class3", "Class2",}, unit = "cannone_4732"},
				{priority = 1.0, type = {"Cannon", "AT", "Class3", "Class1",}, unit = "cannone_7527"},
			--Howitzers
				{priority = 1.0, type = {"Cannon", "Support", "Class1",}, unit = "obice_7513"},
				{priority = 1.0, type = {"Cannon", "Mortar", "Class1",}, unit = "81mm_brandt_ita"},
				{priority = 1.0, type = {"Cannon", "Artillery", "Class3",}, unit = "obice_10017"},
			--Wheel_vehicles
				{priority = 1.0, type = {"Armored", "MG", "Class2",}, unit = "ab40"},
				{priority = 1.0, type = {"Armored", "MG", "Class1",}, unit = "ab41"},
			--Tanks_light
				{priority = 1.0, type = {"Armored", "MG", "Class3",}, unit = "cv35"},
				{priority = 1.0, type = {"Armored", "MG", "Class2",}, unit = "fiat3000"},
				{priority = 1.0, type = {"Tank", "Light", "Class1",}, unit = "l640"},
				{priority = 1.0, type = {"Tank", "Light", "Class1",}, unit = "m1139"},
			--Tanks_medium
				{priority = 1.0, type = {"Tank", "Medium", "Class1",}, unit = "m1340"},
				{priority = 1.0, type = {"Tank", "Medium", "Class2",}, unit = "m1441"},
			--Tanks_heavy
			--SPG
				{priority = 1.0, type = {"Doctrine", "Tank", "Light", "Support", "Class2",}, unit = "m7518"},
			-- Doctrine All Around	
				--{priority = 1.0, type = {"Doctrine", "Tier1", "Class3",}, unit = "doctrine_squad_scout_early(ita)"},
				--{priority = 1.0, type = {"Doctrine", "Tier2", "Class2",}, unit = "doctrine_squad_commando_early(ita)"},
				--{priority = 1.0, type = {"Doctrine", "Tank", "Light", "Tier2", "Class2",}, unit = "doctrine_l640_37mm"},
				--{priority = 1.0, type = {"Doctrine", "Vehicle", "Support", "Tier3", "Class2",}, unit = "doctrine_autocannone10017_early"},
			-- Doctrine	
				--{priority = 1.0, type = {"Doctrine", "Cannon", "AA", "Tier1", "Class2",}, unit = "doctrine_8mm_breda_37_aa"},
				--{priority = 1.0, type = {"Doctrine", "Infantry", "Squad", "Tier1", "Class1",}, unit = "doctrine_squad_parma(ita)"},
				--{priority = 1.0, type = {"Doctrine", "Tank", "Light", "AT", "Tier2", "Class2",}, unit = "doctrine_m4732"},
				--{priority = 1.0, type = {"Doctrine", "Cannon", "Artillery", "Tier2", "Class3",}, unit = "doctrine_cannone_10528"},
				--{priority = 1.0, type = {"Doctrine", "Cannon", "Artillery", "Tier3", "Class3",}, unit = "doctrine_obice_14912"},
		}
	}
}
