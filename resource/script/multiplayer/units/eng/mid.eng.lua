Purchases["mid.eng"] = {
	{Repeat = 0,  --infinite
		Units = {
			--Infantry
				{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "squad_light_late(eng)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class1",}, unit = "squad_regular_late(eng)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class2",}, unit = "squad_pionier_late(eng)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class2",}, unit = "squad_sas_late(eng)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class1",}, unit = "squad_stormtrooper_late(eng)"},
				{priority = 1.0, type = {"Infantry", "Team", "Aux", "Class3",}, unit = "single_auxiliary_late(eng)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class3",}, unit = "single_mg_late(eng)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class2",}, unit = "single_atrifle(eng)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class2",}, unit = "single_riflegrenade_late(eng)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class2",}, unit = "single_mortar_late(eng)"},	
				{priority = 1.0, type = {"Infantry", "Team", "Class3",}, unit = "single_flamer_late(eng)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class2",}, unit = "single_sniper(eng)"},
			--Automatic_weaponry
				{priority = 1.0, type = {"Cannon", "MG", "Class2",}, unit = "np_303_vickers_mkiv_aa"},
				{priority = 1.0, type = {"Cannon", "AA", "Class2",}, unit = "np_qf40mm"},
			--AT_Weapons
				{priority = 1.0, type = {"Cannon", "AT", "Class3",}, unit = "np_qf2pdr"},
				{priority = 1.0, type = {"Cannon", "AT", "Class1",}, unit = "np_qf6pdr"},
				{priority = 1.0, type = {"Cannon", "AT", "Class2",}, unit = "np_qf17pdr_42"},
			--Howitzers				
				{priority = 1.0, type = {"Cannon", "Mortar", "Class1",}, unit = "np_76mm_mk_ii"},
				{priority = 1.0, type = {"Cannon", "Artillery", "Class3",}, unit = "np_qf3,7inch"},
				{priority = 1.0, type = {"Cannon", "Artillery", "Class3",}, unit = "np_qf25pdr"},
			--Wheel_vehicles
				{priority = 1.0, type = {"Armored", "MG", "Class3",}, unit = "np_dingo"},
				{priority = 1.0, type = {"Armored", "MG", "Class2",}, unit = "np_universal_carrier"},
				{priority = 1.0, type = {"Armored", "AA", "Class1",}, unit = "np_humber"},
				{priority = 1.0, type = {"Armored", "AA", "Class2",}, unit = "np_mk2daimler"},
			--Tanks_light
				{priority = 1.0, type = {"Tank", "Light", "Class3",}, unit = "np_tetrarch_mk7"},
				{priority = 1.0, type = {"Tank", "Light", "AA", "Class2",}, unit = "np_crusader_aa1"},
				{priority = 1.0, type = {"Tank", "Light", "Class1",}, unit = "np_crusader_mk6"},
			--Tanks_medium
				{priority = 1.0, type = {"Tank", "Medium", "Class1",}, unit = "np_valentine_mkiii"},
				{priority = 1.0, type = {"Tank", "Medium", "Class1",}, unit = "np_matilda_mkii"},
				{priority = 1.0, type = {"Tank", "Medium", "Class3",}, unit = "np_matilda_mkii_cs"},
				{priority = 1.0, type = {"Tank", "Medium", "Class2",}, unit = "np_cromwell_mk_i"},
				{priority = 1.0, type = {"Tank", "Medium", "Class1",}, unit = "np_m4a2"},
			--Tanks_heavy
				{priority = 1.0, type = {"Tank", "Heavy", "Class3",}, unit = "np_churchill_mk_ii"},
			--SPG
			-- Doctrine All Around
				{priority = 1.0, type = {"Doctrine", "Tier1", "Class2",}, unit = "doctrine_squad_scout_mid(eng)"},
				{priority = 1.0, type = {"Doctrine", "Armored", "MG", "Tier1", "Class3",}, unit = "doctrine_np_m3halftrack_mid"},
				{priority = 1.0, type = {"Doctrine", "Armored", "AT", "Tier1", "Class1",}, unit = "doctrine_np_aec_mk2_mid"},
				{priority = 1.0, type = {"Doctrine", "Tier2", "Class3",}, unit = "doctrine_squad_commando_mid(eng)"},
				{priority = 1.0, type = {"Doctrine", "Tank", "Medium", "Tier2", "Class3",}, unit = "doctrine_np_m3grant"},
				{priority = 1.0, type = {"D0octine", "Tank", "Medium", "Tier2", "Class3",}, unit = "doctrine_np_m4a4_mid"},
				{priority = 1.0, type = {"Doctrine", "Tank", "Heavy", "Tier3", "Class1",}, unit = "doctrine_np_churchill_mk_iv"},
				{priority = 0.5, type = {"Doctrine", "Tank", "Medium", "Tier3", "Class3",}, unit = "doctrine_np_sexton_mid"},
			-- Doctrine	DEFENSIVE				
				{priority = 1.0, type = {"Doctrine", "Tier1", "Class1", "Cannon", "AT",}, unit = "doctrine_np_qf18pdr_dfns_mid"},
				{priority = 1.0, type = {"Doctrine", "Tier1", "Class1", "Tank", "Medium",}, unit = "doctrine_np_crusader_mki_cs_dfns_mid"},
				{priority = 1.0, type = {"Doctrine", "Tier2", "Class2", "Cannon", "Artillery",}, unit = "doctrine_np_107mm_mk_ii_dfns_mid"},
				{priority = 1.0, type = {"Doctrine", "Tier2", "Class1", "Tank", "Artillery",}, unit = "doctrine_np_bishop_dfns_mid"},
				{priority = 1.0, type = {"Doctrine", "Tier2", "Class3", "Cannon", "AT",}, unit = "doctrine_np_qf3,7inch_dfns_mid"},
				{priority = 1.0, type = {"Doctrine", "Tier3", "Class1", "Tank", "Heavy",}, unit = "doctrine_np_churchill_gun_carrier_dfns"},
				{priority = 1.0, type = {"Doctrine", "Tier3", "Class2", "Cannon", "Artillery",}, unit = "doctrine_np_bl45_dfns_mid"},
				{priority = 1.0, type = {"Doctrine", "Tier3", "Class3", "Cannon", "Artillery",}, unit = "doctrine_np_bl72_dfns_mid"},
			-- Doctrine	OFFENSIVE
				{priority = 1.0, type = {"Doctrine", "Vehicle", "Tier1", "Class1",}, unit = "doctrine_np_humber_mid"},
				{priority = 1.0, type = {"Doctrine", "Infantry", "Squad", "Tier1", "Class3",}, unit = "doctrine_squad_canadians_mid(eng)"},
				{priority = 1.0, type = {"Doctrine", "Infantry", "Squad", "Tier1", "Class2",}, unit = "doctrine_np_mech_infantry_mid"},
				{priority = 1.0, type = {"Doctrine", "Vehicle", "Tier1", "Class2",}, unit = "doctrine_np_humber_mk4_mid"},
				{priority = 1.0, type = {"Doctrine", "Tank", "Medium", "Tier2", "Class3",}, unit = "doctrine_np_m3lee"},
				{priority = 1.0, type = {"Doctrine", "Tank", "Medium", "Tier2", "Class1",}, unit = "doctrine_np_m10wolverine"},
				{priority = 1.0, type = {"Doctrine", "Cannon", "Artillery", "Tier3", "Class3",}, unit = "doctrine_np_bishop"},
				{priority = 1.0, type = {"Doctrine", "Tank", "Medium", "Tier3", "Class2",}, unit = "doctrine_np_2m4a2"},
				{priority = 1.0, type = {"Doctrine", "Cannon", "Artillery", "Tier3", "Class3",}, unit = "doctrine_np_bl45"},
			-- Doctrine IRREGULAR
				{priority = 1.0, type = {"Doctrine", "Vehicle", "Tier1", "Class2",}, unit = "doctrine_np_chevrolet30cwt"},
				{priority = 1.0, type = {"Doctrine", "Tank", "Light", "Tier1", "Class1",}, unit = "doctrine_np_a13_mk2a_mid"},
				{priority = 1.0, type = {"Doctrine", "Infantry", "Squad", "Tier1", "Class1",}, unit = "doctrine_squad_bef_mid(eng)"},
				{priority = 1.0, type = {"Doctrine", "Tank", "Light", "Tier2", "Class2",}, unit = "doctrine_np_a10_mk2_cs_mid"},
				{priority = 1.0, type = {"Doctrine", "Cannon", "AT", "Tier2", "Class3",}, unit = "doctrine_np_qf18pdr"},
				{priority = 1.0, type = {"Doctrine", "Tank", "Medium", "Tier2", "Class1",}, unit = "doctrine_np_m4a1"},
				{priority = 1.0, type = {"Doctrine", "Tank", "Heavy", "Tier3", "Class3",}, unit = "doctrine_np_churchill_gun_carrier"},
				{priority = 1.0, type = {"Doctrine", "Cannon", "Artillery", "Tier3", "Class3",}, unit = "doctrine_np_bl7_2-inch_mid"},
		}
	}
}
