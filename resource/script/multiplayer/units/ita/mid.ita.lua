Purchases["mid.ita"] = {
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
				{priority = 1.0, type = {"Cannon", "MG", "Class2",}, unit = "8mm_breda_37_aa"},
				{priority = 1.0, type = {"Cannon", "AA", "Class2",}, unit = "cannone_2065"},
				{priority = 1.0, type = {"Cannon", "AT", "Class3",}, unit = "2cm_solothurn"},
			--AT_Weapons
				{priority = 1.0, type = {"Cannon", "AT", "Class3", "Class2",}, unit = "cannone_4732"},
				{priority = 1.0, type = {"Cannon", "AT", "Class3", "Class2",}, unit = "cannone_7527"},
				{priority = 1.0, type = {"Cannon", "AT", "Class2",}, unit = "7_5cm_pak97_38"},
				
			--Howitzers
				{priority = 1.0, type = {"Cannon", "Support", "Class1",}, unit = "obice_7513"},
				{priority = 1.0, type = {"Cannon", "Mortar", "Class1",}, unit = "81mm_brandt_ita"},
				{priority = 1.0, type = {"Cannon", "Artillery", "Class3",}, unit = "obice_10017"},
			--Wheel_vehicles
				{priority = 1.0, type = {"Vehicle", "MG", "Class3",}, unit = "as42"},
				{priority = 1.0, type = {"Armored", "MG", "Class2",}, unit = "ab40"},
				{priority = 1.0, type = {"Armored", "MG", "Class1",}, unit = "ab41"},
			--Tanks_light
				{priority = 1.0, type = {"Armored", "MG", "Class3",}, unit = "cv35"},
				{priority = 1.0, type = {"Tank", "Light", "Class2",}, unit = "l640"},
				{priority = 1.0, type = {"Tank", "Light", "Class1",}, unit = "m1139"},
			--Tanks_medium
				{priority = 1.0, type = {"Tank", "Medium", "Class2",}, unit = "m1441"},
				{priority = 1.0, type = {"Tank", "Medium", "Class1",}, unit = "m1542"},
				{priority = 1.0, type = {"Tank", "Medium", "Class1",}, unit = "pz3n_ita"},
				{priority = 1.0, type = {"Tank", "Medium", "Class1",}, unit = "pz4g_ita"},
			--Tanks_heavy
			--SPG
				{priority = 1.0, type = {"Tank", "Light", "Support", "Class2",}, unit = "m7518"},
				{priority = 1.0, type = {"Tank", "Light", "AT", "Class2",}, unit = "m7534"},
			-- Doctrine All Around	
				--{priority = 1.0, type = {"Doctrine", "Cannon", "MG", "Tier1",}, unit = "doctrine_8mm_fiat_revelli_mid"},
				--{priority = 1.0, type = {"Doctrine", "Tier1", "Class3",}, unit = "doctrine_squad_scout(ita)"},
				--{priority = 1.0, type = {"Doctrine", "Armored", "MG", "Tier1", "Class1",}, unit = "doctrine_mech_infantry_ita"},     
				--{priority = 1.0, type = {"Doctrine", "Tier2", "Class2",}, unit = "doctrine_squad_commando(ita)"},
				--{priority = 1.0, type = {"Doctrine", "Tank", "Medium", "AT", "Tier2", "Class1",}, unit = "doctrine_stug3g_ita"},
				--{priority = 1.0, type = {"Doctrine", "Cannon", "AT", "Tier3", "Class3",}, unit = "doctrine_cannone_9053"},
				--{priority = 1.0, type = {"Doctrine", "Vehicle", "Support", "Tier3", "Class1",}, unit = "doctrine_autocannone10017"},
			-- Doctrine	
				--{priority = 1.0, type = {"Doctrine", "Tank", "Light", "Tier1", "Class2",}, unit = "doctrine_cv35cc_mid"},
				--{priority = 1.0, type = {"Doctrine", "Infantry", "Squad", "Tier1", "Class1",}, unit = "doctrine_squad_parma_mid(ita)"},
				--{priority = 1.0, type = {"Doctrine", "Armored", "MG", "Tier1", "Class3",}, unit = "doctrine_ab40_com"},
				--{priority = 1.0, type = {"Doctrine", "Tank", "Light", "AT", "Tier1", "Class2",}, unit = "doctrine_m4732_mid"},
				--{priority = 1.0, type = {"Doctrine", "Tank", "Medium", "Tier2", "Class1",}, unit = "doctrine_p2640_18_mid"},
				--{priority = 1.0, type = {"Doctrine", "Cannon", "Artillery", "Tier2", "Class3",}, unit = "doctrine_cannone_10528_mid"},
		}
	}
}
