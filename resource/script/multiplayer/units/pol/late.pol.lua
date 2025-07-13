Purchases["late.pol"] = {
	{Repeat = 0, --infinite
		Units = {
			--Infantry
				{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "squad_light_late(pol)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class2",}, unit = "squad_regular_late(pol)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class2",}, unit = "squad_pionier_late(pol)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class1",}, unit = "squad_stormtrooper_late(pol)"},
				{priority = 1.0, type = {"Infantry", "Team", "Aux", "Class3",}, unit = "single_auxiliary_late(pol)"},
				{priority = 1.0, type = {"Infantry", "Team", "AT", "Class3",}, unit = "single_mortar_late(pol)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class3",}, unit = "single_flamer_late(pol)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class2",}, unit = "single_sniper(pol)"},
				{priority = 1.0, type = {"Infantry", "Team", "AT", "Class1",}, unit = "single_at_late(pol)"},
				{priority = 1.0, type = {"Infantry", "Team", "MG", "Class1",}, unit = "single_mg_late(pol)"},
				{priority = 1.0, type = {"Infantry", "Team", "AT", "Class2",}, unit = "single_atrifle(pol)"},
			--Automatic_weaponry
				{priority = 1.0, type = {"Cannon", "MG", "Class3",}, unit = "303_bren_tripod_aa"},
				{priority = 1.0, type = {"Cannon", "AA", "Class2",}, unit = "oerlikon_mk2_pol"},
				{priority = 1.0, type = {"Cannon", "AA", "Class2",}, unit = "qf40mm_pol"},
			--AT_Weapons
				{priority = 1.0, type = {"Cannon", "AT", "Class2",}, unit = "qf2pdr_pol"},
				{priority = 1.0, type = {"Cannon", "AT", "Class1",}, unit = "qf6pdr_late_pol"},
				{priority = 1.0, type = {"Cannon", "AT", "Class2",}, unit = "qf17pdr_pol"},
			--Howitzers
				{priority = 1.0, type = {"Cannon", "Mortar", "Class1",}, unit = "81mm_brandt_pol"},
				{priority = 1.0, type = {"Cannon", "Artillery", "Class2",}, unit = "qf25pdr_pol"},
			--Wheel_vehicles
				{priority = 1.0, type = {"Armored", "MG", "Class2",}, unit = "dingo_pol"},
				{priority = 1.0, type = {"Class1", "Vehicle", "AA",}, unit = "cmp_tri-polsten"},
				{priority = 1.0, type = {"Armored", "AT", "Class1",}, unit = "staghound_pol"},
			--Tanks_light
				{priority = 1.0, type = {"Tank", "Light", "AA", "Class2",}, unit = "crusader_aa2_pol"},
			--Tanks_medium
				{priority = 1.0, type = {"Tank", "Medium", "Class3",}, unit = "cromwell_mk_i_pol"},
				{priority = 1.0, type = {"Tank", "Medium", "Class1",}, unit = "cromwell_mk_iv_pol"},
				{priority = 1.0, type = {"Tank", "Medium", "Class1",}, unit = "m4a4_pol"},
				{priority = 1.0, type = {"Tank", "Medium", "Class2",}, unit = "cromwell_mk_vi_pol"},
				{priority = 1.0, type = {"Tank", "Medium", "Class1",}, unit = "m4a4_firefly_pol"},
			--Tanks_heavy			
			--SPG
				{priority = 1.0, type = {"Tank", "Medium", "AT", "Class2",}, unit = "achilles_pol"},
			-- Doctrine All Around				
				--{priority = 1.0, type = {"Doctrine", "Tier1", "Class3",}, unit = "doctrine_squad_scout_late(pol)"},
				--{priority = 1.0, type = {"Doctrine", "Armored", "MG", "Tier1", "Class1",}, unit = "doctrine_mk2daimler_pol_late"},
				--{priority = 1.0, type = {"Doctrine", "Armored", "MG", "Tier1", "Class2",}, unit = "doctrine_mech_infantry_pol_late"},     
				--{priority = 1.0, type = {"Doctrine", "Tier2", "Class2",}, unit = "doctrine_squad_commando(pol)"},
				--{priority = 1.0, type = {"Doctrine", "Tank", "Medium", "Tier2", "Class3",}, unit = "doctrine_challenger_pol"},
				--{priority = 1.0, type = {"Doctrine", "Cannon", "Artillery", "Tier2", "Class3",}, unit = "doctrine_bl45_pol_late"},
				--{priority = 1.0, type = {"Doctrine", "Tank", "Medium", "Support", "Tier3", "Class3",}, unit = "doctrine_sexton_pol"},
			-- Doctrine	
				--{priority = 1.0, type = {"Doctrine", "Infantry", "Squad", "Tier1", "Class2",}, unit = "doctrine_mech_elite_pol_late"},
				--{priority = 1.0, type = {"Doctrine", "Armored", "AT", "Tier1", "Class1",}, unit = "doctrine_staghound_com_pol"},
				--{priority = 1.0, type = {"Doctrine", "Cannon", "AT", "Tier2", "Class3",}, unit = "doctrine_75mm_m1_pol"},
				--{priority = 1.0, type = {"Doctrine", "Tank", "Light", "Tier1", "Class2",}, unit = "doctrine_m5a1_pol"},
				--{priority = 1.0, type = {"Doctrine", "Tank", "Medium", "Tier2", "Class1",}, unit = "doctrine_m4a1_76_pol"},
				--{priority = 1.0, type = {"Doctrine", "Tank", "Medium", "Tier3", "Class2",}, unit = "doctrine_m4a3_105_pol"},
		}
	}
}
