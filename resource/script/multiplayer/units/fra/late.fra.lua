Purchases["late.fra"] = {
	{Repeat = 0, --infinite
		Units = {
			--Infantry
				{priority = 3.5, type = {"Infantry", "Squad", "Aux", "Class2",}, unit = "squad_light_late(fra)"},
				{priority = 3.5, type = {"Infantry", "Squad", "Class2",}, unit = "squad_regular_late(fra)"},
				{priority = 2.0, type = {"Infantry", "Squad", "Class2",}, unit = "squad_pionier_late(fra)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class1",}, unit = "squad_marine_late(fra)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class1",}, unit = "squad_stormtrooper_late(fra)"},
				{priority = 1.0, type = {"Infantry", "Team", "Aux", "Class3",}, unit = "single_auxiliary_late(fra)"},
				{priority = 2.0, type = {"Infantry", "Team", "AT", "Class1",}, unit = "single_at_late(fra)"},
				{priority = 1.0, type = {"Infantry", "Team", "MG", "Class2",}, unit = "single_mg_late(fra)"},
				{priority = 2.0, type = {"Infantry", "Team", "AT", "Class3",}, unit = "single_riflegrenade_late(fra)"},
				{priority = 1.5, type = {"Infantry", "Team", "Class3",}, unit = "single_flamer_late(fra)"},
				{priority = 1.5, type = {"Infantry", "Team", "Class2",}, unit = "single_sniper(fra)"},
			--Automatic_weaponry
				{priority = 1.0, type = {"Cannon", "MG", "Class2",}, unit = "0_3cal_m1917a1_aa_fra"},
				{priority = 1.0, type = {"Cannon", "MG", "Class2",}, unit = "0_5cal_m2hb_fr"},
				{priority = 1.0, type = {"Cannon", "AA", "Class2",}, unit = "40_mm_m1_fr"},
			--AT_Weapons
				{priority = 1.0, type = {"Cannon", "AT", "Class2",}, unit = "75_mm_m1897a2_fr"},
				{priority = 1.0, type = {"Cannon", "AT", "Class1",}, unit = "57_mm_m1_fr"},
				{priority = 1.0, type = {"Cannon", "AT", "Class2",}, unit = "75_mm_m1897a4_fr"},
			--Howitzers
				{priority = 1.0, type = {"Cannon", "Mortar", "Class1",}, unit = "81_mm_m1_fr"},
				{priority = 1.0, type = {"Cannon", "Artillery", "Class2",}, unit = "105_mm_m2a1l_fr"},
			--Wheel_vehicles
				{priority = 1.0, type = {"Armored", "MG", "Class3",}, unit = "m3a1_scout_fr"},
				{priority = 1.0, type = {"Vehicle", "AA", "Class3",}, unit = "dodgewc55_fr"},
				{priority = 1.0, type = {"Armored", "MG", "Class1",}, unit = "m20_fr"},
				{priority = 1.0, type = {"Armored", "MG", "Class2",}, unit = "m8_grayhound_fr"},
				{priority = 1.0, type = {"Armored", "AA", "Class2",}, unit = "m17_fr"},	
			--Tanks_light
				{priority = 1.0, type = {"Tank", "Light", "Class1",}, unit = "m5a1_fr"},
				{priority = 1.0, type = {"Tank", "Light","Support", "Class2",}, unit = "m8_fr"},
			--Tanks_medium
				{priority = 1.0, type = {"Tank", "Medium", "Class2",}, unit = "s35"},
				{priority = 1.0, type = {"Tank", "Medium", "Class1",}, unit = "m4a3_75_fr"},
				{priority = 1.0, type = {"Tank", "Medium", "Class1",}, unit = "m4a3_76_fr"},
				{priority = 1.0, type = {"Tank", "Medium", "Class3",}, unit = "b1bis"},
				{priority = 1.0, type = {"Tank", "Medium", "Support", "Class2",}, unit = "m4a3_105_fr"},
			--SPG
				{priority = 1.0, type = {"Tank", "Medium", "AT", "Class1",}, unit = "m10wolverine_fr"},
			-- Doctrine All Around
				--{priority = 1.0, type = {"Doctrine", "Tier1", "Class3",}, unit = "doctrine_squad_marine_late(fra)"},
				--{priority = 1.0, type = {"Doctrine", "Armored", "MG", "Tier1", "Class2",}, unit = "doctrine_mech_infantry_fra_late"},      
				--{priority = 1.0, type = {"Doctrine", "Armored", "Support", "Tier1", "Class3",}, unit = "doctrine_m4halftrack_fr"},
				--{priority = 1.0, type = {"Doctrine", "Tier2", "Class2",}, unit = "doctrine_squad_commando(fra)"},
				--{priority = 1.0, type = {"Doctrine", "Tank", "Medium", "Tier2", "Class1",}, unit = "doctrine_cavalier_mk_vii"},
				--{priority = 1.0, type = {"Doctrine", "Tank", "Heavy", "Tier3", "Class2",}, unit = "doctrine_m4a3e2_jumbo_fr"},
				--{priority = 1.0, type = {"Doctrine", "Tank", "Medium", "Support", "Tier2", "Class3",}, unit = "doctrine_m7_fr"},
			-- Doctrine	
				--{priority = 1.0, type = {"Doctrine", "Armored", "MG", "Tier1", "Class3",}, unit = "doctrine_m2halftrack_fr_late"},
				--{priority = 1.0, type = {"Doctrine", "Armored", "AT", "Tier1", "Class1",}, unit = "doctrine_m8_grayhound_fr"},
				--{priority = 1.0, type = {"Doctrine", "Infantry", "Squad", "Tier1", "Class2",}, unit = "doctrine_squad_commandos_late(fra)"},
				--{priority = 1.0, type = {"Doctrine", "Armored", "AT", "Tier2", "Class2",}, unit = "doctrine_t12gmc_fr_late"},
				--{priority = 1.0, type = {"Doctrine", "Tank", "Medium", "Tier2", "Class1",}, unit = "doctrine_m4a1e8_fr"},
				--{priority = 1.0, type = {"Doctrine", "Cannon", "Artillery", "Tier2", "Class2",}, unit = "doctrine_105_mm_m3_fr"},
				--{priority = 1.0, type = {"Doctrine", "Cannon", "Artillery", "Tier3", "Class3",}, unit = "doctrine_155_mm_m1918_late"},
				--{priority = 1.0, type = {"Doctrine", "Tank", "Artillery", "Tier3", "Class2",}, unit = "doctrine_m12gmc_fr"},
		}
	}
}
