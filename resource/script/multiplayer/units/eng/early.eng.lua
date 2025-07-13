Purchases["early.eng"] = {
	{Repeat = 0,  --infinite
		Units = {
			--Infantry
				{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "squad_light_late(eng)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class1",}, unit = "squad_regular_late(eng)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class2",}, unit = "squad_pionier_late(eng)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class1",}, unit = "squad_stormtrooper_late(eng)"},
				{priority = 1.0, type = {"Infantry", "Team", "Aux", "Class3",}, unit = "single_auxiliary_late(eng)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class3",}, unit = "single_mg_late(eng)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class2",}, unit = "single_atrifle(eng)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class2",}, unit = "single_riflegrenade_late(eng)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class2",}, unit = "single_mortar_late(eng)"},	
				{priority = 1.0, type = {"Infantry", "Team", "Class3",}, unit = "single_flamer_late(eng)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class2",}, unit = "single_sniper(eng)"},
			--Automatic_weaponry
			--AT_Weapons
				{priority = 1.0, type = {"Cannon", "MG", "Class2",}, unit = "np_303_vickers_mki"},
				{priority = 1.0, type = {"Cannon", "AA", "Class2",}, unit = "np_qf40mm"},
				{priority = 1.0, type = {"Cannon", "AT", "Class3",}, unit = "np_qf2pdr"},
				{priority = 1.0, type = {"Cannon", "AT", "Class1",}, unit = "np_qf75mm_mk1"},
			--Howitzers				
				{priority = 1.0, type = {"Cannon", "Mortar", "Class1",}, unit = "np_76mm_mk_ii"},
				{priority = 1.0, type = {"Cannon", "Artillery", "Class2",}, unit = "np_qf18pdr"},
				{priority = 1.0, type = {"Cannon", "Artillery", "Class3",}, unit = "np_qf25pdr_early"},
			--Wheel_vehicles
				{priority = 1.0, type = {"Armored", "MG", "Class2",}, unit = "np_dingo"},
				{priority = 1.0, type = {"Armored", "MG", "Class1",}, unit = "np_universal_carrier"},
				{priority = 1.0, type = {"Armored", "MG", "Class2",}, unit = "np_universal_mg_carrier"},
				{priority = 1.0, type = {"Armored", "AA", "Class1",}, unit = "np_humber"},
			--Tanks_light
				{priority = 1.0, type = {"Tank", "Light", "Class3",}, unit = "np_a11_mk2"},
				{priority = 1.0, type = {"Tank", "Light", "Class2",}, unit = "np_a13_mk2a"},
				{priority = 1.0, type = {"Tank", "Light", "Class1",}, unit = "np_crusader_mki"},
				{priority = 1.0, type = {"Tank", "Light", "Class1",}, unit = "np_crusader_mkii"},
			--Tanks_medium
				{priority = 1.0, type = {"Tank", "Medium", "Class2",}, unit = "np_crusader_mki_cs"},
				{priority = 1.0, type = {"Tank", "Medium", "Class1",}, unit = "np_valentine_mkiii"},
			--Tanks_heavy
			--SPG
			-- Doctrine All Around
				{priority = 1.0, type = {"Doctrine", "Armored", "AT", "Tier1", "Class1",}, unit = "doctrine_np_boyes_gun_carrier"}, 
				{priority = 1.0, type = {"Doctrine", "Tank", "Light", "Tier1", "Class2",}, unit = "doctrine_np_a13_mk1"},
				{priority = 1.0, type = {"Doctrine", "Tier1", "Class3",}, unit = "doctrine_squad_commando_early(eng)"},
				{priority = 1.0, type = {"Doctrine", "Tank", "Medium", "Tier2", "Class1",}, unit = "doctrine_np_matilda_mkii"},
				{priority = 1.0, type = {"Doctrine", "Tank", "Heavy", "Tier3", "Class3",}, unit = "doctrine_np_churchill_mk_ii"},
			-- Doctrine	
				{priority = 1.0, type = {"Doctrine", "Cannon", "AT", "Tier1", "Class2",}, unit = "doctrine_np_qf2pdr"},
				{priority = 1.0, type = {"Doctrine", "Tank", "Light", "Tier1", "Class1",}, unit = "doctrine_np_mkvic"},
				{priority = 1.0, type = {"Doctrine", "Vehicle", "Tier1", "Class3",}, unit = "doctrine_np_mortar_carrier"},
				{priority = 1.0, type = {"Doctrine", "Infantry", "Squad", "Tier2", "Class2",}, unit = "doctrine_squad_bef(eng)"},
				{priority = 1.0, type = {"Doctrine", "Tank", "Light", "Tier2", "Class3",}, unit = "doctrine_np_a10_mk2"},
				{priority = 1.0, type = {"Doctrine", "Tank", "Medium", "Tier2", "Class1",}, unit = "doctrine_np_a10_mk2_cs"},
				{priority = 1.0, type = {"Doctrine", "Cannon", "Artillery", "Tier3", "Class3",}, unit = "doctrine_np_bl7_2-inch"},
		}
	}
}
