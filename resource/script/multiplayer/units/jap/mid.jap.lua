Purchases["mid.jap"] = {
	{Repeat = 0, --infinite
		Units = {
			--Infantry
				{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "squad_light(jap)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class2",}, unit = "squad_regular(jap)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class2",}, unit = "squad_pionier(jap)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class1",}, unit = "squad_stormtrooper(jap)"},
				{priority = 1.0, type = {"Infantry", "Team", "Aux", "Class3",}, unit = "single_auxiliary(jap)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class1",}, unit = "single_at(jap)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class2",}, unit = "single_mg(jap)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class3",}, unit = "single_mortar(jap)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class2",}, unit = "single_riflegrenade(jap)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class3",}, unit = "single_flamer(jap)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class2",}, unit = "single_sniper(jap)"},
			--Automatic_weaponry
				{priority = 1.0, type = {"Cannon", "MG", "Class2",}, unit = "type92_stan"},
				{priority = 1.0, type = {"Cannon", "AA", "Class2",}, unit = "20mm_type_2"},	
			--AT_Weapons
				{priority = 1.0, type = {"Cannon", "AT", "Class3",}, unit = "37mm_type_94"},
				{priority = 1.0, type = {"Cannon", "AT", "Class2",}, unit = "47mm_type_1"},
				{priority = 1.0, type = {"Cannon", "AA", "AT", "Class2",}, unit = "75mm_type_88"},
				{priority = 1.0, type = {"Cannon", "AT", "Class2",}, unit = "75mm_type_90"},
				{priority = 1.0, type = {"Cannon", "Support", "Class2",}, unit = "70mm_type_92"},
				{priority = 1.0, type = {"Cannon", "Support", "Class2",}, unit = "75mm_type_41"},
			--Howitzers
				{priority = 1.0, type = {"Cannon", "Mortar", "Class1",}, unit = "81mm_brandt_jap"},
				{priority = 1.0, type = {"Cannon", "Artillery", "Class2",}, unit = "105mm_type_91"},
			--Wheel_vehicles
				{priority = 1.0, type = {"Vehicle", "MG", "Class2",}, unit = "type93"},
				{priority = 1.0, type = {"Vehicle", "AA", "Class2",}, unit = "type94aa"},
			--Half_tracks
			--Tanks_light
				{priority = 1.0, type = {"Armored", "MG", "Class3",}, unit = "type94_te-ke"},
				{priority = 1.0, type = {"Tank", "Light", "Class2",}, unit = "type97_te-ke"},
				{priority = 1.0, type = {"Tank", "Light", "Class1",}, unit = "type95_ha-go"},
			--Tanks_medium
				{priority = 1.0, type = {"Tank", "Medium", "Class1",}, unit = "type97_chi-ha"},
				{priority = 1.0, type = {"Tank", "Medium", "Class3",}, unit = "type97_shinhoto_47mm"},
				{priority = 1.0, type = {"Tank", "Medium", "Class1",}, unit = "type1_chi-he"},
				--{priority = 1.0, type = {"Tank", "Medium", "Class1",}, unit = "type3_chi-nu"},
			--SPG
				{priority = 1.0, type = {"Tank", "Light", "AT", "Class2",}, unit = "type1_ho-ni1"},
			--Tanks_heavy
			-- Doctrine All Around
				--{priority = 1.0, type = {"Doctrine", "Tier1", "Class3",}, unit = "doctrine_squad_kamikaze_mid(jap)"},
				--{priority = 1.0, type = {"Doctrine", "Armored", "MG", "Tier1",}, unit = "doctrine_type1_ho-ki_mg"},
				--{priority = 1.0, type = {"Doctrine", "Cannon", "Artillery", "Tier2",}, unit = "doctrine_150mm_type_97"},
				--{priority = 1.0, type = {"Doctrine", "Tier2", "Class2",}, unit = "doctrine_squad_snlf_mid(jap)"},
				--{priority = 1.0, type = {"Doctrine", "Tank", "Medium", "Support", "Tier2", "Class1",}, unit = "doctrine_type97_shinhoto_120mm"},
				--{priority = 1.0, type = {"Doctrine", "Tank", "Medium", "Artillery", "Tier3", "Class2",}, unit = "doctrine_type4_ho-ro_mid"},
				--{priority = 1.0, type = {"Doctrine", "Tank", "Medium", "Artillery", "Tier3", "Class3",}, unit = "doctrine_type5_ho-chi"},
			-- Doctrine	DEFENSIVE		
				--{priority = 1.0, type = {"Doctrine", "Tier1", "Class2", "Cannon", "AT",}, unit = "doctrine_37mm_type_11_dfns_mid"},
				--{priority = 1.0, type = {"Doctrine", "Tier1", "Class1", "Tank", "Medium",}, unit = "doctrine_type89_i-go_dfns_mid"},
				--{priority = 1.0, type = {"Doctrine", "Tier2", "Class2", "Cannon", "Artillery",}, unit = "doctrine_150mm_type_97_dfns_mid"},
				--{priority = 1.0, type = {"Doctrine", "Tier2", "Class3", "Cannon", "AT",}, unit = "doctrine_88mm_type_99_dfns_mid"},
				--{priority = 1.0, type = {"Doctrine", "Tier2", "Class1", "Tank", "Medium", "Artillery",}, unit = "doctrine_type1_ho-ni2_dfns_mid"},
				--{priority = 1.0, type = {"Doctrine", "Tier3", "Class2", "Cannon", "Artillery",}, unit = "doctrine_120mm_type_38_dfns_mid"},
				--{priority = 1.0, type = {"Doctrine", "Tier3", "Class3", "Cannon", "Artillery",}, unit = "doctrine_150mm_type_96_dfns_mid"},
			-- Doctrine	OFFENSIVE
				--{priority = 1.0, type = {"Doctrine", "Armored", "MG", "Tier1", "Class2",}, unit = "doctrine_type87_mid"},
				--{priority = 1.0, type = {"Doctrine", "Cannon", "AA", "Tier1", "Class3",}, unit = "doctrine_13mm_type_93"},
				--{priority = 1.0, type = {"Doctrine", "Infantry", "Squad", "Tier1", "Class1",}, unit = "doctrine_squad_imperialguard(jap)"},
				--{priority = 1.0, type = {"Doctrine", "Tank", "Medium", "Tier2", "Class2",}, unit = "doctrine_type89_i-go"},
				--{priority = 1.0, type = {"Doctrine", "Tank", "Medium", "Tier2", "Class1",}, unit = "doctrine_type1_ho-i"},
				--{priority = 1.0, type = {"Doctrine", "Cannon", "Artillery", "Tier2", "Class3",}, unit = "doctrine_105mm_type_92_mid"},
				--{priority = 1.0, type = {"Doctrine", "Tank", "Medium", "Tier3", "Class1",}, unit = "doctrine_2type1_chi-he"},
				--{priority = 1.0, type = {"Doctrine", "Tank", "Medium", "Artillery", "Tier3", "Class3",}, unit = "doctrine_type4_ho-ro_mid2"},
			-- Doctrine	IRREGULAR
				--{priority = 1.0, type = {"Doctrine", "Infantry", "Squad", "Tier1", "Class2",}, unit = "doctrine_squad_scout_mid(jap)"},
				--{priority = 1.0, type = {"Doctrine", "Cannon", "AT", "Tier1", "Class2",}, unit = "doctrine_37mm_type_11_mid"},
				--{priority = 1.0, type = {"Doctrine", "Infantry", "Squad", "Tier2", "Class2",}, unit = "doctrine_squad_marine_mid(jap)"},
				--{priority = 1.0, type = {"Doctrine", "Cannon", "AA", "Tier2", "Class2",}, unit = "doctrine_88mm_type_99"},
				--{priority = 1.0, type = {"Doctrine", "Tank", "Artillery", "Tier2", "Class2",}, unit = "doctrine_type1_ho-ni2_mid"},
		}
	}
}
