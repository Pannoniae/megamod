Purchases["early.jap"] = {
	{Repeat = 0, --infinite
		Units = {
			--Infantry
				{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "squad_light(jap)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class2",}, unit = "squad_regular(jap)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class2",}, unit = "squad_pionier(jap)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class1",}, unit = "squad_stormtrooper(jap)"},
				{priority = 1.0, type = {"Infantry", "Team", "Aux", "Class3",}, unit = "single_auxiliary(jap)"},
				{priority = 1.0, type = {"Infantry", "Team", "MG", "Class2",}, unit = "single_mg(jap)"},
				{priority = 1.0, type = {"Infantry", "Team", "AT", "Class3",}, unit = "single_mortar(jap)"},
				{priority = 1.0, type = {"Infantry", "Team", "AT", "Class2",}, unit = "single_riflegrenade(jap)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class3",}, unit = "single_flamer(jap)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class2",}, unit = "single_sniper(jap)"},
			--Automatic_weaponry
				{priority = 1.0, type = {"Cannon", "MG", "Class2",}, unit = "type92_stan"},
				{priority = 1.0, type = {"Cannon", "MG", "Class1",}, unit = "13mm_type_93"},
				{priority = 1.0, type = {"Cannon", "AA", "Class2",}, unit = "20mm_type_98"},	
			--AT_Weapons
				{priority = 1.0, type = {"Cannon", "AT", "Class3",}, unit = "20mm_type_97"},
				{priority = 1.0, type = {"Cannon", "AT", "Class3",}, unit = "37mm_type_94"},
				{priority = 1.0, type = {"Cannon", "AA", "AT", "Class1",}, unit = "75mm_type_88"},
				{priority = 1.0, type = {"Cannon", "AT", "Class2",}, unit = "75mm_type_90"},
				{priority = 1.0, type = {"Cannon", "Support", "Class2",}, unit = "75mm_type_41"},
			--Howitzers
				{priority = 1.0, type = {"Cannon", "Mortar", "Class1",}, unit = "81mm_brandt_jap"},
				{priority = 1.0, type = {"Cannon", "Artillery", "Class2",}, unit = "105mm_type_92"},
			--Wheel_vehicles
				{priority = 1.0, type = {"Armored", "MG", "Class3",}, unit = "type87"},
				{priority = 1.0, type = {"Armored", "MG", "Class1",}, unit = "type93"},
				{priority = 1.0, type = {"Vehicle", "AA", "Class2",}, unit = "type94aa"},
			--Half_tracks
			--Tanks_light
				{priority = 1.0, type = {"Armored", "MG", "Class3",}, unit = "type94_te-ke"},
				{priority = 1.0, type = {"Tank", "Light", "Class1",}, unit = "type95_ha-go"},
			--Tanks_medium
				{priority = 1.0, type = {"Tank", "Medium", "Class2",}, unit = "type89_chi-ro"},
				{priority = 1.0, type = {"Tank", "Medium", "Class1",}, unit = "type89_i-go"},
				{priority = 1.0, type = {"Tank", "Medium", "Class1",}, unit = "type97_chi-ha"},
			--SPG
				{priority = 1.0, type = {"Tank", "Light", "Class2",}, unit = "type1_ho-ni1"},
			--Tanks_heavy
			-- Doctrine ALL-ROUND
				--{priority = 1.0, type = {"Doctrine", "Tier1", "Class3",}, unit = "doctrine_squad_kamikaze_early(jap)"},
				--{priority = 1.0, type = {"Doctrine", "Tank", "Light", "Tier1", "Class1",}, unit = "doctrine_type97_te-ke"},
				--{priority = 1.0, type = {"Doctrine", "Cannon", "Artillery", "Tier2", "Class3",}, unit = "doctrine_150mm_type_97_early"},
				--{priority = 1.0, type = {"Doctrine", "Tier2", "Class2",}, unit = "doctrine_squad_snlf_early(jap)"},
				--{priority = 1.0, type = {"Doctrine", "Tank", "Medium", "Tier2", "Class2",}, unit = "doctrine_type89_i-go_early"},

			-- Doctrine IRREGULAR
				--{priority = 1.0, type = {"Doctrine", "Infantry", "Squad", "Tier1", "Class2",}, unit = "doctrine_squad_scout_early(jap)"},
				--{priority = 1.0, type = {"Doctrine", "Cannon", "AT", "Tier1", "Class3",}, unit = "doctrine_37mm_type_11"},
				--{priority = 1.0, type = {"Doctrine", "Tank", "Light", "Tier1", "Class1",}, unit = "doctrine_renault_otsu"},
				--{priority = 1.0, type = {"Doctrine", "Infantry", "Squad", "Tier2", "Class1",}, unit = "doctrine_squad_marine_early(jap)"},
				--{priority = 1.0, type = {"Doctrine", "Cannon", "Artillery", "Tier2", "Class3",}, unit = "doctrine_105mm_type_92_early"},
			-- Doctrine OFFENSIVE
				--{priority = 1.0, type = {"Doctrine", "Tier1", "Class1",}, unit = "doctrine_squad_imperialguard_early(jap)"},
				--{priority = 1.0, type = {"Doctrine", "Tank", "Medium", "Tier2", "Class2",}, unit = "doctrine_type89_i-go_early2"},
				--{priority = 1.0, type = {"Doctrine", "Cannon", "Artillery", "Tier2", "Class3",}, unit = "doctrine_120mm_type_38"},
				--{priority = 1.0, type = {"Doctrine", "Tank", "Heavy", "Tier2", "Class3",}, unit = "doctrine_type95_ro-go"},
				--{priority = 1.0, type = {"Doctrine", "Tank", "Medium", "Tier2", "Class2",}, unit = "doctrine_2type97_chi-ha"},
		}
	}
}
