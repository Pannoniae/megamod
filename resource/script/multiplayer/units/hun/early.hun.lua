Purchases["early.hun"] = {
	{Repeat = 0, --infinite
		Units = {
			--Infantry
				{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "squad_light(hun)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class2",}, unit = "squad_regular(hun)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class2",}, unit = "squad_pionier(hun)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class1",}, unit = "squad_stormtrooper(hun)"},
				{priority = 1.0, type = {"Infantry", "Team", "Aux", "Class3",}, unit = "single_auxiliary(hun)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class2",}, unit = "single_sniper(hun)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class2",}, unit = "single_mortar(hun)"},
				{priority = 1.0, type = {"Infantry", "Team", "AT", "Class2",}, unit = "single_at(hun)"},
				{priority = 1.0, type = {"Infantry", "Team", "MG", "Class1",}, unit = "single_mg(hun)"},
				{priority = 1.0, type = {"Infantry", "Team", "AT", "Class3",}, unit = "single_riflegrenade(hun)"},
			--Automatic_weaponry
				{priority = 1.0, type = {"Cannon", "MG", "Class2",}, unit = "schwarzlose_8mm"},
				{priority = 1.0, type = {"Cannon", "AA", "Class2",}, unit = "4cm_bofors_36m"},
			--AT_Weapons
				{priority = 1.0, type = {"Cannon", "AT", "Class2",}, unit = "2cm_solothurn_hun"},
				{priority = 1.0, type = {"Cannon", "AT", "Class1",}, unit = "4cm_40m"},
			--Howitzers
				{priority = 1.0, type = {"Cannon", "Mortar", "Class1",}, unit = "81mm_brandt_hun"},
				{priority = 1.0, type = {"Cannon", "Support", "Class2",}, unit = "8cm_feldkanone"},
				{priority = 1.0, type = {"Cannon", "Artillery", "Class3",}, unit = "10cm_37m"},
			--Wheel_vehicles
				{priority = 1.0, type = {"Armored", "MG", "Class2",}, unit = "csaba40m"},
				{priority = 1.0, type = {"Armored", "MG", "Class1",}, unit = "csaba39m"},
			--Tanks_light
				{priority = 1.0, type = {"Tank", "Light", "Class1",}, unit = "toldi2"},
				{priority = 1.0, type = {"Tank", "Light", "Class2",}, unit = "toldi1"},
			--Tanks_medium
				{priority = 1.0, type = {"Tank", "Medium", "Class1",}, unit = "turan1"},
			--Tanks_heavy
			--SPG
			-- Doctrine All Around			
				--{priority = 1.0, type = {"Doctrine", "Tier1", "Class3",}, unit = "doctrine_squad_scout_early(hun)"},
				--{priority = 1.0, type = {"Doctrine", "Tier1", "Class3",}, unit = "doctrine_mech_infantry_hun_early"},      
				--{priority = 1.0, type = {"Doctrine", "Tank", "Light", "Tier1", "Class1",}, unit = "doctrine_r35_hun"},
				--{priority = 1.0, type = {"Doctrine", "Tier2", "Class2",}, unit = "doctrine_squad_commando_early(hun)"},
				--{priority = 1.0, type = {"Doctrine", "Tank", "Light", "Tier2", "Class2",}, unit = "doctrine_nimrod_early"},
				--{priority = 1.0, type = {"Doctrine", "Cannon", "AT", "Tier3", "Class2",}, unit = "doctrine_8cm_bofors_29m_early"},			
		}
	}
}
