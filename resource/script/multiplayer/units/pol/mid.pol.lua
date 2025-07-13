Purchases["mid.pol"] = {
	{Repeat = 0, --infinite
		Units = {
			--Infantry
				{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "squad_light_late(pol)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class2",}, unit = "squad_regular_late(pol)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class2",}, unit = "squad_pionier_late(pol)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class1",}, unit = "squad_stormtrooper_late(pol)"},
				{priority = 1.0, type = {"Infantry", "Team", "Aux", "Class3",}, unit = "single_auxiliary_late(pol)"},
				{priority = 1.0, type = {"Infantry", "Team", "AT", "Class1",}, unit = "single_at_late(pol)"},
				{priority = 1.0, type = {"Infantry", "Team", "MG", "Class1",}, unit = "single_mg_late(pol)"},
				{priority = 1.0, type = {"Infantry", "Team", "AT", "Class2",}, unit = "single_atrifle(pol)"},
				{priority = 1.0, type = {"Infantry", "Team", "AT", "Class3",}, unit = "single_mortar_late(pol)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class3",}, unit = "single_flamer_late(pol)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class2",}, unit = "single_sniper(pol)"},
			--Automatic_weaponry
				{priority = 1.0, type = {"Cannon", "MG", "Class3",}, unit = "303_vickers_pol"},
				{priority = 1.0, type = {"Cannon", "AA", "Class2",}, unit = "qf40mm_pol"},
			--AT_Weapons
				{priority = 1.0, type = {"Cannon", "AT", "Class2",}, unit = "qf2pdr_pol"},
				{priority = 1.0, type = {"Cannon", "AT", "Class1",}, unit = "qf6pdr_pol"},
				{priority = 1.0, type = {"Cannon", "AT", "Class2",}, unit = "qf17pdr_42_pol"},
			--Howitzers
				{priority = 1.0, type = {"Cannon", "Mortar", "Class1",}, unit = "81mm_brandt_pol"},
				{priority = 1.0, type = {"Cannon", "Artillery", "Class2",}, unit = "qf25pdr_pol_early"},
			--Wheel_vehicles
				{priority = 1.0, type = {"Armored", "MG", "Class1",}, unit = "dingo_pol"},
			--Tanks_light
				{priority = 1.0, type = {"Tank", "Light", "Class3",}, unit = "a10_mk2_pol"},
				{priority = 1.0, type = {"Tank", "Light", "AA", "Class2",}, unit = "crusader_aa2_pol"},
				{priority = 1.0, type = {"Tank", "Light", "Class1",}, unit = "crusader_mkii_pol"},
				{priority = 1.0, type = {"Tank", "Light", "Class1",}, unit = "crusader_pol"},
			--Tanks_medium
				{priority = 1.0, type = {"Tank", "Medium", "Class1",}, unit = "valentine_mkiii_pol"},
			--Tanks_heavy			
			--SPG
				{priority = 1.0, type = {"Tank", "Medium", "Support", "Class3",}, unit = "sexton_pol"},
			-- Doctrine All Around	
				--{priority = 1.0, type = {"Doctrine", "Tier1", "Class3",}, unit = "doctrine_squad_scout_mid(pol)"},
				--{priority = 1.0, type = {"Doctrine", "Cannon", "AA", "Tier1", "Class3",}, unit = "doctrine_oerlikon_mk2_pol"},
				--{priority = 1.0, type = {"Doctrine", "Armored", "MG", "Tier1", "Class1",}, unit = "doctrine_mk2daimler_pol"},
				--{priority = 1.0, type = {"Doctrine", "Tier2", "Class2",}, unit = "doctrine_squad_commando_mid(pol)"},
				--{priority = 1.0, type = {"Doctrine", "Tank", "Light", "Support", "Tier2", "Class2",}, unit = "doctrine_crusader_mki_cs_pol"},
				--{priority = 1.0, type = {"Doctrine", "Tank", "Medium", "Tier2", "Class2",}, unit = "doctrine_churchill_mk_ii_pol"},
				--{priority = 1.0, type = {"Doctrine", "Cannon", "Artillery", "Tier2",}, unit = "doctrine_bl45_pol_mid"},
		}
	}
}
