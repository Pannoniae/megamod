Purchases["late.ita"] = {
	{Repeat = 0, --infinite
		Units = {
			--Infantry
				{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "squad_light(ita)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class2",}, unit = "squad_regular(ita)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class1",}, unit = "squad_elite(ita)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class2",}, unit = "squad_pionier(ita)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class2",}, unit = "squad_gnr(ita)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class1",}, unit = "squad_stormtrooper_late(ita)"},
				{priority = 1.0, type = {"Infantry", "Team", "Aux", "Class3",}, unit = "single_auxiliary(ita)"},
				{priority = 1.0, type = {"Infantry", "Team", "MG", "Class1",}, unit = "single_mg(ita)"},
				{priority = 1.0, type = {"Infantry", "Team", "AT", "Class2",}, unit = "single_atrifle(ita)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class2",}, unit = "single_sniper(ita)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class1",}, unit = "single_flamer(ita)"},
				{priority = 1.0, type = {"Infantry", "Team", "AT", "Class1",}, unit = "single_at(ita)"},
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
				{priority = 1.0, type = {"Armored", "AT", "Class1",}, unit = "ab43"},
				{priority = 1.0, type = {"Vehicle", "AT", "Class2",}, unit = "3ro"},
			--Tanks_light
				{priority = 1.0, type = {"Tank", "Light", "Class2",}, unit = "l640"},
				{priority = 1.0, type = {"Tank", "Light", "Class1",}, unit = "m1542"},
			--Tanks_medium
				{priority = 1.0, type = {"Tank", "Medium", "Class1",}, unit = "pz3n_ita"},
				{priority = 1.0, type = {"Tank", "Medium", "Class2",}, unit = "p2640"},
				{priority = 1.0, type = {"Tank", "Medium", "Class1",}, unit = "pz4g_ita"},
			--Tanks_heavy
				{priority = 1.0, type = {"Tank", "Medium", "Class1",}, unit = "pz5d_ita"},
			--SPG
				{priority = 1.0, type = {"Tank", "Light", "Support", "Class3",}, unit = "m7518"},
				{priority = 1.0, type = {"Tank", "Light", "AT", "Class2",}, unit = "m7534"},
				{priority = 1.0, type = {"Tank", "Medium", "AT", "Class1",}, unit = "m10525"},
			-- Doctrine All Around				
				--{priority = 1.0, type = {"Doctrine", "Tier1", "Class3",}, unit = "doctrine_squad_scout_late(ita)"},
				--{priority = 1.0, type = {"Doctrine", "Armored", "MG", "Tier1", "Class1",}, unit = "doctrine_mech_infantry_ita_late"},       
				--{priority = 1.0, type = {"Doctrine", "Tank", "Light", "Tier1", "Class2",}, unit = "doctrine_m1441_late"},
				--{priority = 1.0, type = {"Doctrine", "Tier2", "Class2",}, unit = "doctrine_squad_commando_late(ita)"},
				--{priority = 1.0, type = {"Doctrine", "Tank", "Medium", "AT", "Tier3", "Class1",}, unit = "doctrine_stug3g_ita_late"},
				--{priority = 1.0, type = {"Doctrine", "Vehicle", "Support", "Tier3", "Class3",}, unit = "doctrine_autocannone10017_late"},
				--{priority = 1.0, type = {"Doctrine", "Tank", "Medium", "AT", "Tier3", "Class1",}, unit = "doctrine_m7546"},
			-- Doctrine	
				--{priority = 1.0, type = {"Doctrine", "Tank", "Light", "Tier1", "Class2",}, unit = "doctrine_cv35cc"},
				--{priority = 1.0, type = {"Doctrine", "Armored", "MG", "Tier1", "Class2",}, unit = "doctrine_ab40_com_late"},
				--{priority = 1.0, type = {"Doctrine", "Vehicle", "AA", "Tier1", "Class2",}, unit = "doctrine_as42_2065"},
				--{priority = 1.0, type = {"Doctrine", "Infantry", "Squad", "Tier1", "Class2",}, unit = "doctrine_nembo_para(ita)"},
				--{priority = 1.0, type = {"Doctrine", "Tank", "Light", "AA", "Tier2", "Class2",}, unit = "doctrine_m15_contraereo"},
				--{priority = 1.0, type = {"Doctrine", "Tank", "Medium", "Tier2", "Class2",}, unit = "doctrine_p2640_18_late"},
				--{priority = 1.0, type = {"Doctrine", "Cannon", "AT", "Tier2", "Class2",}, unit = "doctrine_cannone_8855"},
		}
	}
}
