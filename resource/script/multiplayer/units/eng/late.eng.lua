Purchases["late.eng"] = {
	{Repeat = 0,  --infinite
		Units = {
			--Infantry
				{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "squad_light_late(eng)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class1",}, unit = "squad_regular_late(eng)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class2",}, unit = "squad_pionier_late(eng)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class2",}, unit = "squad_sas_late(eng)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class1",}, unit = "squad_stormtrooper_late(eng)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class1",}, unit = "np_mechanized_infantry"},
				{priority = 1.0, type = {"Infantry", "Team", "Aux", "Class3",}, unit = "single_auxiliary_late(eng)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class3",}, unit = "single_mg_late(eng)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class1",}, unit = "single_at_late(eng)"},
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
				{priority = 1.0, type = {"Cannon", "AT", "Class1",}, unit = "np_qf6pdr_late"},
				{priority = 1.0, type = {"Cannon", "AT", "Class2",}, unit = "np_qf17pdr"},
			--Howitzers				
				{priority = 1.0, type = {"Cannon", "Mortar", "Class1",}, unit = "np_76mm_mk_ii"},
				{priority = 1.0, type = {"Cannon", "Support", "Class1",}, unit = "np_75_mm_m1a1"},
				{priority = 1.0, type = {"Cannon", "Artillery", "Class3",}, unit = "np_qf3,7inch"},
				{priority = 1.0, type = {"Cannon", "Artillery", "Class3",}, unit = "np_qf25pdr"},
			--Wheel_vehicles
				{priority = 1.0, type = {"Armored", "MG", "Class2",}, unit = "np_dingo"},
				{priority = 1.0, type = {"Armored", "AA", "Class1",}, unit = "np_humber"},
				{priority = 1.0, type = {"Armored", "AT", "Class2",}, unit = "np_mk2daimler"},
			--Tanks_light
				{priority = 1.0, type = {"Tank", "Light", "AA", "Class1",}, unit = "np_crusader_aa2"},
			--Tanks_medium
				{priority = 1.0, type = {"Tank", "Medium", "Class2",}, unit = "np_cromwell_mk_i"},
				{priority = 1.0, type = {"Tank", "Medium", "Class1",}, unit = "np_cromwell_mk_iv"},
				{priority = 1.0, type = {"Tank", "Medium", "Class1",}, unit = "np_m4a4"},
				{priority = 1.0, type = {"Tank", "Medium", "Class2",}, unit = "np_cromwell_mk_vi"},
				{priority = 1.0, type = {"Tank", "Medium", "Class1",}, unit = "np_comet_a34"},
				{priority = 1.0, type = {"Tank", "Medium", "Class1",}, unit = "np_m4a4_firefly"},
			--Tanks_heavy
				{priority = 1.0, type = {"Tank", "Heavy", "Class2",}, unit = "np_churchill_mk_vii"},
			--SPG
				{priority = 0.5, type = {"Tank", "Medium", "AT", "Class3",}, unit = "np_achilles"},
			-- Doctrine All Around
				{priority = 1.0, type = {"Doctrine", "Tier1", "Class2",}, unit = "doctrine_squad_scout_late(eng)"},
				{priority = 1.0, type = {"Doctrine", "Armored", "MG", "Tier1", "Class2",}, unit = "doctrine_np_mech_infantry_late"},      
				{priority = 1.0, type = {"Doctrine", "Armored", "MG", "Tier1", "Class2",}, unit = "doctrine_np_aec_mk2_late"},
				{priority = 1.0, type = {"Doctrine", "Tier2", "Class3",}, unit = "doctrine_squad_commando_late(eng)"},
				{priority = 1.0, type = {"Doctrine", "Tank", "Medium", "Tier2", "Class1",}, unit = "doctrine_np_m4a4_tulip"},
				{priority = 1.0, type = {"Doctrine", "Tank", "Heavy", "Tier3", "Class2",}, unit = "doctrine_np_churchill_mk_iv_late"},
				{priority = 1.0, type = {"Doctrine", "Tank", "Heavy", "Tier3", "Class3",}, unit = "doctrine_np_churchill_crocodile"},
			-- Doctrine	DEFENSIVE				
				{priority = 1.0, type = {"Doctrine", "Tier1", "Class1", "Cannon", "AT",}, unit = "doctrine_np_qf18pdr_dfns_late"},
				{priority = 1.0, type = {"Doctrine", "Tier1", "Class2", "Armored", "AT",}, unit = "doctrine_np_staghound_dfns_late"},
				{priority = 1.0, type = {"Doctrine", "Tier2", "Class2", "Cannon", "Artillery",}, unit = "doctrine_np_107mm_mk_ii_dfns_late"},
				{priority = 1.0, type = {"Doctrine", "Tier2", "Class1", "Tank", "Medium",}, unit = "doctrine_np_archer"},
				{priority = 1.0, type = {"Doctrine", "Tier2", "Class3", "Cannon", "Artillery",}, unit = "doctrine_np_m7_dfns_late"},
				{priority = 1.0, type = {"Doctrine", "Tier3", "Class1", "Tank", "Heavy",}, unit = "doctrine_np_churchill_mk_viii_dfns"},
				{priority = 1.0, type = {"Doctrine", "Tier3", "Class2", "Cannon", "Artillery",}, unit = "doctrine_np_bl45_dfns_late"},
				{priority = 1.0, type = {"Doctrine", "Tier3", "Class3", "Cannon", "Artillery",}, unit = "doctrine_np_bl72_dfns_late"},
			-- Doctrine	OFFENSIVE
				{priority = 1.0, type = {"Doctrine", "Armored", "Tier1", "Class1",}, unit = "doctrine_np_humber_late"},
				{priority = 1.0, type = {"Doctrine", "Infantry", "Squad", "Tier1", "Class2",}, unit = "doctrine_squad_commando(eng)"},
				{priority = 1.0, type = {"Doctrine", "Armored", "Tier1", "Class3",}, unit = "doctrine_np_m3a1_scout"},
				{priority = 1.0, type = {"Doctrine", "Armored", "Tier1", "Class2",}, unit = "doctrine_np_aec_mk3"},
				{priority = 1.0, type = {"Doctrine", "Cannon", "Artillery", "Tier2", "Class3",}, unit = "doctrine_np_bl45_late"},
				{priority = 1.0, type = {"Doctrine", "Tank", "Heavy", "Tier2", "Class3",}, unit = "doctrine_np_churchill_avre"},
				{priority = 1.0, type = {"Doctrine", "Tank", "Medium", "Tier3", "Class1",}, unit = "doctrine_np_2comet_a34"},
				{priority = 1.0, type = {"Doctrine", "Cannon", "Artillery", "Tier3", "Class3",}, unit = "doctrine_np_sexton_late"},
				{priority = 1.0, type = {"Doctrine", "Tank", "Heavy", "Tier3", "Class2",}, unit = "doctrine_np_black_prince"},
			-- Doctrine IRREGULAR
				{priority = 1.0, type = {"Doctrine", "Infantry", "Squad", "Tier1", "Class2",}, unit = "doctrine_squad_scot(eng)"},
				{priority = 1.0, type = {"Doctrine", "Tank", "Light", "Tier1", "Class3",}, unit = "doctrine_np_tetrarch_mk7"},
				{priority = 1.0, type = {"Doctrine", "Armored", "Tier1", "Class1",}, unit = "doctrine_np_humber_mk4"},
				{priority = 1.0, type = {"Doctrine", "Tank", "Light", "Tier2", "Class2",}, unit = "doctrine_np_crusader_aa1"},
				{priority = 1.0, type = {"Doctrine", "Cannon", "Artillery", "Tier2", "Class3",}, unit = "doctrine_np_107mm_mk_ii"},
				{priority = 1.0, type = {"Doctrine", "Tank", "Medium", "Tier2", "Class1",}, unit = "doctrine_np_m4a1_76"},
				{priority = 1.0, type = {"Doctrine", "Tank", "Heavy", "Tier3", "Class2",}, unit = "doctrine_np_churchill_mk_viii"},
				{priority = 1.0, type = {"Doctrine", "Cannon", "Artillery", "Tier3", "Class3",}, unit = "doctrine_np_bl72_late"},
			-- Doctrine SUPPORT
				{priority = 1.0, type = {"Doctrine", "Infantry", "Squad", "Tier1", "Class3",}, unit = "doctrine_np_m3a1_scout_tr_late"},
				{priority = 1.0, type = {"Doctrine", "Infantry", "Squad", "Tier1", "Class2",}, unit = "doctrine_np_willys_snipers"},
				{priority = 1.0, type = {"Doctrine", "Tank", "Medium", "Tier1", "Class1",}, unit = "doctrine_np_valentine_mkix"},
				{priority = 1.0, type = {"Doctrine", "Tank", "Medium", "Tier2", "Class2",}, unit = "doctrine_np_valentine_mkxi"},
				{priority = 1.0, type = {"Doctrine", "Tank", "Medium", "Tier2", "Class3",}, unit = "doctrine_np_challenger"},
				{priority = 1.0, type = {"Doctrine", "Cannon", "Artillery", "Tier3", "Class3",}, unit = "doctrine_np_m7"},
				{priority = 1.0, type = {"Doctrine", "Tank", "Medium", "Tier3", "Class2",}, unit = "doctrine_np_2m4a4_firefly_tulip"},
				{priority = 1.0, type = {"Doctrine", "Tank", "Heavy", "Tier3", "Class3",}, unit = "doctrine_np_tog2"},
			-- Doctrine EXTRA				
				{priority = 1.0, type = {"Doctrine", "Class1", "Tier1", "Armored", "MG",}, unit = "doctrine_np_m30kangaroo"},
				{priority = 1.0, type = {"Doctrine", "Class2", "Tier1", "Armored", "Artillery",}, unit = "doctrine_np_mortar_carrier_late"},
				{priority = 1.0, type = {"Doctrine", "Class3", "Tier1", "Armored", "AA",}, unit = "doctrine_np_aec_aa"},
				{priority = 1.0, type = {"Doctrine", "Class1", "Tier2", "Armored", "AT",}, unit = "doctrine_np_staghound_mk3"},
				{priority = 1.0, type = {"Doctrine", "Class3", "Tier2", "Cannon", "AT",}, unit = "doctrine_np_qf17pdr_42"},
				{priority = 1.0, type = {"Doctrine", "Class2", "Tier2", "Tank", "Medium",}, unit = "doctrine_np_cromwell_mk_iv_rl"},
				{priority = 1.0, type = {"Doctrine", "Class1", "Tier3", "Tank", "Medium",}, unit = "doctrine_np_cromwell_75hv"},
				{priority = 1.0, type = {"Doctrine", "Class2", "Tier3", "Tank", "Heavy",}, unit = "doctrine_np_churchill_mk_viii_late"},
				{priority = 1.0, type = {"Doctrine", "Class3", "Tier3", "Cannon", "Artillery",}, unit = "doctrine_np_bl7_2-inch_late"},
		}
	}
}
