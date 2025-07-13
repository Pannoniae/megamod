Purchases["late.jap"] = {
	{Repeat = 0, --infinite
		Units = {
			--Infantry
				{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "squad_light(jap)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class2",}, unit = "squad_regular(jap)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class2",}, unit = "squad_pionier(jap)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class1",}, unit = "squad_stormtrooper(jap)"},
				{priority = 1.0, type = {"Armored", "MG", "Class2",}, unit = "mechanized_infantry_jap"},
				{priority = 1.0, type = {"Infantry", "Team", "Aux", "Class3",}, unit = "single_auxiliary(jap)"},
				{priority = 1.0, type = {"Infantry", "Team", "AT", "Class1",}, unit = "single_bazooker(jap)"},
				{priority = 1.0, type = {"Infantry", "Team", "AT", "Class3",}, unit = "single_mortar(jap)"},
				{priority = 1.0, type = {"Infantry", "Team", "AT", "Class2",}, unit = "single_riflegrenade(jap)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class3",}, unit = "single_flamer(jap)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class2",}, unit = "single_sniper(jap)"},
			--Automatic_weaponry
				{priority = 1.0, type = {"Cannon", "MG", "Class2",}, unit = "type92_stan"},
				{priority = 0.2, type = {"Cannon", "AA", "Class2",}, unit = "20mm_type_2"},	
			--AT_Weapons
				{priority = 1.0, type = {"Cannon", "AA", "AT", "Class1",}, unit = "75mm_type_88"},
				{priority = 1.0, type = {"Cannon", "AT", "Class2",}, unit = "75mm_type_90"},
				{priority = 0.5, type = {"Cannon", "AT", "Class2",}, unit = "47mm_type_1"},
				{priority = 0.5, type = {"Cannon", "AA", "AT", "Class3",}, unit = "75mm_type_4"},
				{priority = 1.5, type = {"Cannon", "Support", "Class2",}, unit = "75mm_type_41"},
			--Howitzers
				{priority = 1.0, type = {"Cannon", "Mortar", "Class1",}, unit = "81mm_brandt_jap"},
				{priority = 1.0, type = {"Cannon", "Artillery", "Class2",}, unit = "105mm_type_91"},
				{priority = 0.5, type = {"Cannon", "Artillery", "Class3",}, unit = "105mm_type_92"},
			--Wheel_vehicles
				{priority = 1.0, type = {"Vehicle", "MG", "Class3",}, unit = "type1_ho-ha"},
				{priority = 1.0, type = {"Vehicle", "MG", "Class1",}, unit = "type93"},
				{priority = 1.0, type = {"Vehicle", "AA", "Class2",}, unit = "type94aa"},
			--Half_tracks
			--Tanks_light
				{priority = 1.0, type = {"Armored", "MG", "Class3",}, unit = "type94_te-ke"},
				{priority = 1.0, type = {"Tank", "Light", "Class1",}, unit = "type4_ke-nu"},
			--Tanks_medium
				{priority = 1.0, type = {"Tank", "Light", "Class1",}, unit = "type97_chi-ha"},
				{priority = 1.0, type = {"Tank", "Medium", "Class1",}, unit = "type2_ho-i"},
				{priority = 1.0, type = {"Tank", "Medium", "Class3",}, unit = "type1_chi-he"},
				{priority = 1.0, type = {"Tank", "Medium", "Class1",}, unit = "type97_shinhoto_120mm"},
				{priority = 1.0, type = {"Tank", "Medium", "Class1",}, unit = "type3_chi-nu"},
			--SPG
				{priority = 1.0, type = {"Tank", "Light", "AT", "Class3",}, unit = "type1_ho-ni1"},
			--Tanks_heavy
				{priority = 1.0, type = {"Tank", "Heavy", "Class1",}, unit = "type5_chi-ri"},
			-- Doctrine All Around
				--{priority = 1.0, type = {"Doctrine", "Tier1", "Class3",}, unit = "doctrine_squad_kamikaze_late(jap)"},
				--{priority = 1.0, type = {"Doctrine", "Tier1", "Class1", "Armored", "MG",}, unit = "doctrine_mech_infantry_jap_late"},      
				--{priority = 1.0, type = {"Doctrine", "Tier1", "Class3", "Cannon", "Artillery",}, unit = "doctrine_150mm_type_97_late"},
				--{priority = 1.0, type = {"Doctrine", "Tier2", "Class2",}, unit = "doctrine_squad_snlf_late(jap)"},
				--{priority = 1.0, type = {"Doctrine", "Tier2", "Class1", "Tank", "Medium",}, unit = "doctrine_type3_ho-ni"},
				--{priority = 1.0, type = {"Doctrine", "Tier2", "Class2", "Tank", "Medium",}, unit = "doctrine_type3_chi-nu_ace"},
				--{priority = 1.0, type = {"Doctrine", "Tier3", "Class2", "Cannon", "Artillery",}, unit = "doctrine_150mm_type_96_late"},
				--{priority = 1.0, type = {"Doctrine", "Tier3", "Class1", "Tank", "Medium",}, unit = "doctrine_type3_chi-nu2_late"},
				--{priority = 1.0, type = {"Doctrine", "Tier3", "Class3", "Tank", "Medium", "Artillery",}, unit = "doctrine_type4_ha-to"},
			-- Doctrine	DEFENSIVE				
				--{priority = 1.0, type = {"Doctrine", "Tier1", "Class2", "Cannon", "AT",}, unit = "doctrine_70mm_type_92_dfns_late"},
				--{priority = 1.0, type = {"Doctrine", "Tier1", "Class1", "Tank", "Medium",}, unit = "doctrine_type89_i-go_dfns_late"},
				--{priority = 1.0, type = {"Doctrine", "Tier2", "Class2", "Cannon", "Artillery",}, unit = "doctrine_150mm_type_97_dfns_late"},
				--{priority = 1.0, type = {"Doctrine", "Tier2", "Class3", "Cannon", "AT",}, unit = "doctrine_88mm_type_99_dfns_late"},
				--{priority = 1.0, type = {"Doctrine", "Tier2", "Class1", "Tank", "Medium",}, unit = "doctrine_type3_ho-ni_dfns_late"},
				--{priority = 1.0, type = {"Doctrine", "Tier3", "Class2", "Cannon", "Artillery",}, unit = "doctrine_120mm_type_38_dfns_late"},
				--{priority = 1.0, type = {"Doctrine", "Tier3", "Class3", "Cannon", "Artillery",}, unit = "doctrine_150mm_type_96_dfns_late"},
				--{priority = 1.0, type = {"Doctrine", "Tier3", "Class1", "Tank", "Medium", "Artillery",}, unit = "doctrine_type4_ho-ro_dfns_late"},
			-- Doctrine	OFFENSIVE
				--{priority = 1.0, type = {"Doctrine", "Tier1", "Class1", "Armored", "MG",}, unit = "doctrine_type87_late"},
				--{priority = 1.0, type = {"Doctrine", "Tier1", "Class2", "Infantry", "Squad",}, unit = "doctrine_squad_snlf_late(jap)"},
				--{priority = 1.0, type = {"Doctrine", "Tier1", "Class3", "Tank", "Light",}, unit = "doctrine_type97_te-ke_late"},
				--{priority = 1.0, type = {"Doctrine", "Tier2", "Class2", "Cannon", "Artillery",}, unit = "doctrine_70mm_type_92"},
				--{priority = 1.0, type = {"Doctrine", "Tier2", "Class3", "Tank", "Medium",}, unit = "doctrine_type97_shinhoto_47mm"},
				--{priority = 1.0, type = {"Doctrine", "Tier2", "Class1", "Tank", "Medium",}, unit = "doctrine_type2_ho-i_kou"},
				--{priority = 1.0, type = {"Doctrine", "Tier3", "Class1", "Tank", "Medium",}, unit = "doctrine_2type3_chi-nu"},
				--{priority = 1.0, type = {"Doctrine", "Tier3", "Class2", "Tank", "Artillery",}, unit = "doctrine_type1_ho-ni2"},
				--{priority = 1.0, type = {"Doctrine", "Tier3", "Class3", "Tank", "Artillery",}, unit = "doctrine_type4_ho-ro"},
			-- Doctrine	IRREGULAR
				--{priority = 1.0, type = {"Doctrine", "Tier1", "Class3", "Infantry", "Squad",}, unit = "doctrine_squad_scout(jap)"},
				--{priority = 1.0, type = {"Doctrine", "Tier1", "Class2", "Cannon", "AA",}, unit = "doctrine_40mm_type5_aa"},
				--{priority = 1.0, type = {"Doctrine", "Tier1", "Class1", "Infantry", "Squad",}, unit = "doctrine_snlf_spec_ops(jap)"},
				--{priority = 1.0, type = {"Doctrine", "Tier1", "Class2", "Armored", "AT",}, unit = "doctrine_t12gmc_jap"},
				--{priority = 1.0, type = {"Doctrine", "Tier2", "Class1", "Tank", "Medium",}, unit = "doctrine_type97_ka-ho"},
				--{priority = 1.0, type = {"Doctrine", "Tier2", "Class3", "Cannon", "Artillery",}, unit = "doctrine_200mm_type_4"},
				--{priority = 1.0, type = {"Doctrine", "Tier3", "Class3", "Cannon", "Artillery",}, unit = "doctrine_toyota_rocket"},
			-- Doctrine	SUPPORT
				--{priority = 1.0, type = {"Doctrine", "Tier1", "Class2", "Infantry", "Squad",}, unit = "doctrine_type95_snipers_late"},
				--{priority = 1.0, type = {"Doctrine", "Tier1", "Class1", "Tank", "Light",}, unit = "doctrine_2type95_ha-go_late"},
				--{priority = 1.0, type = {"Doctrine", "Tier2", "Class1", "Cannon", "AT",}, unit = "doctrine_88mm_type_99_late"},
				--{priority = 1.0, type = {"Doctrine", "Tier2", "Class3", "Cannon", "Artillery",}, unit = "doctrine_type5_ho-chi_late"},
				--{priority = 1.0, type = {"Doctrine", "Tier3", "Class1", "Tank", "Medium",}, unit = "doctrine_2type3_chi-nu_ace"},
				--{priority = 1.0, type = {"Doctrine", "Tier3", "Class2", "Tank", "Heavy",}, unit = "doctrine_ijn_12cm_spg"},
		}
	}
}
