Purchases["early.fra"] = {
	{Repeat = 0, --infinite
		Units = {
			--Infantry
				{priority = 1.0, type = {"Infantry", "Squad", "Class2",}, unit = "squad_light(fra)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class1",}, unit = "squad_regular(fra)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class1",}, unit = "squad_pionier(fra)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "squad_fallschirmjaeger(fra)"},
				{priority = 1.0, type = {"Infantry", "Team", "Aux", "Class3",}, unit = "single_auxiliary(fra)"},
				{priority = 1.0, type = {"Infantry", "Team", "MG", "Class1",}, unit = "single_mg(fra)"},
				{priority = 1.0, type = {"Infantry", "Team", "AT", "Class2",}, unit = "single_at(fra)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class2",}, unit = "single_riflegrenade(fra)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class3",}, unit = "single_flamer(fra)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class2",}, unit = "single_sniper(fra)"},
			--Automatic_weaponry
				{priority = 1.0, type = {"Cannon", "MG", "Class2",}, unit = "hotchkiss_mle1914"},
				{priority = 1.0, type = {"Cannon", "MG", "Class2",}, unit = "13mm_hotchkiss"},
				{priority = 1.0, type = {"Cannon", "AA", "Class1",}, unit = "25mm_hotchkiss_mle38"},
			--AT_Weapons
				{priority = 1.0, type = {"Cannon", "AT", "Class2",}, unit = "25mm_hotchkiss_mle34"},
				{priority = 1.0, type = {"Cannon", "AT", "Class2",}, unit = "47mm_puteaux_mle37"},
				{priority = 1.0, type = {"Cannon", "AT", "Class2",}, unit = "75mm_mle1897"},
			--Howitzers
				{priority = 1.0, type = {"Cannon", "Mortar", "Class1",}, unit = "81mm_brandt_fra"},
				{priority = 1.0, type = {"Cannon", "Artillery", "Class2",}, unit = "105mm_mle1913"},
			--Wheel_vehicles
				{priority = 1.0, type = {"Vehicle", "MG", "Class2",}, unit = "laffly_v15t_mg"},
				{priority = 1.0, type = {"Armored", "MG", "Class1",}, unit = "laffly_s15_toe"},
				{priority = 1.0, type = {"Armored", "AT", "Class3",}, unit = "laffly15tcc"},
			--Tanks_light
				{priority = 1.0, type = {"Tank", "Light", "Class2",}, unit = "amr35-13mm"},
				{priority = 1.5, type = {"Tank", "Light", "Class1",}, unit = "amr35-25mm"},
				{priority = 1.0, type = {"Tank", "Light", "Class3",}, unit = "fcm36"},
				{priority = 1.0, type = {"Tank", "Light", "Class2",}, unit = "r35"},
				{priority = 1.0, type = {"Tank", "Light", "Class1",}, unit = "h39"},
			--Tanks_medium
				{priority = 1.0, type = {"Tank", "Medium", "Class1",}, unit = "char_d2"},
				{priority = 1.0, type = {"Tank", "Medium", "Class1",}, unit = "s35"},
			--Tanks_heavy
			--SPG
				{priority = 1.0, type = {"Tank", "Light", "AT", "Class3",}, unit = "bs-75"},
			-- Doctrine All Around
				--{priority = 1.0, type = {"Doctrine", "Armored", "MG", "Tier1", "Class1",}, unit = "doctrine_panhard"},
				--{priority = 1.0, type = {"Doctrine", "Tank", "Light", "Tier1", "Class2",}, unit = "doctrine_ft17"},
				--{priority = 1.0, type = {"Doctrine", "Infantry", "Squad", "Tier1", "Class3",}, unit = "doctrine_squad_chasseur(fra)"},
				--{priority = 1.0, type = {"Doctrine", "Armored", "MG", "Tier2", "Class3",}, unit = "doctrine_autocanon_75mm"},
				--{priority = 1.0, type = {"Doctrine", "Tank", "Heavy", "Tier3", "Class2",}, unit = "doctrine_b1bis"},
			-- Doctrine	
				--{priority = 1.0, type = {"Doctrine", "Infantry", "Squad", "Tier1", "Class2",}, unit = "doctrine_squad_hussar(fra)"},
				--{priority = 1.0, type = {"Doctrine", "Tank", "Light", "Tier1", "Class3",}, unit = "doctrine_ft17m31"},
				--{priority = 1.0, type = {"Doctrine", "Armored", "AT", "Tier1", "Class1",}, unit = "doctrine_amc_p16"},
				--{priority = 1.0, type = {"Doctrine", "Tank", "Light", "Tier2", "Class2",}, unit = "doctrine_r39"},
				--{priority = 1.0, type = {"Doctrine", "Tank", "Medium", "AT", "Tier2", "Class2",}, unit = "doctrine_sau40"},
				--{priority = 1.0, type = {"Doctrine", "Cannon", "Artillery", "Tier3", "Class3",}, unit = "doctrine_155mm_gpf"},
				--{priority = 1.0, type = {"Doctrine", "Cannon", "Artillery", "Tier3", "Class3",}, unit = "doctrine_22cm_mortier"},
		}
	}
}
