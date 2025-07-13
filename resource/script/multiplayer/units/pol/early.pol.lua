Purchases["early.pol"] = {
	{Repeat = 0, --infinite
		Units = {
			--Infantry
				{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "squad_light(pol)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class2",}, unit = "squad_regular(pol)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class2",}, unit = "squad_pionier(pol)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class1",}, unit = "squad_sturmtrooper(pol)"},
				{priority = 1.0, type = {"Infantry", "Team", "Aux", "Class3",}, unit = "single_auxiliary(pol)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class1",}, unit = "single_mg(pol)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class2",}, unit = "single_at(pol)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class3",}, unit = "single_mortar(pol)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class2",}, unit = "single_sniper(pol)"},
			--Automatic_weaponry
				{priority = 1.0, type = {"Cannon", "MG", "Class3",}, unit = "ckm_wz30_mgun"},
				{priority = 1.0, type = {"Cannon", "AA", "Class2",}, unit = "20mm_fka"},
				{priority = 1.0, type = {"Cannon", "AA", "Class2",}, unit = "40mm_bofors"},
			--AT_Weapons	
				{priority = 1.0, type = {"Cannon", "AT", "Class2",}, unit = "37mm_bofors"},
				{priority = 1.0, type = {"Cannon", "AT", "AA", "Class2",}, unit = "75mm_aa_wz36"},
				{priority = 1.0, type = {"Cannon", "AT", "Class1",}, unit = "75mm_wz97"},
			--Howitzers
				{priority = 1.0, type = {"Cannon", "Mortar", "Class1",}, unit = "81mm_brandt_pol"},
				{priority = 1.0, type = {"Cannon", "Artillery", "Class2",}, unit = "105mm_wz29"},
				{priority = 1.0, type = {"Cannon", "Artillery", "Class3",}, unit = "120mm_wz1878"},
			--Wheel_vehicles
				{priority = 0.5, type = {"Vehicle", "MG", "Class2",}, unit = "sokol1000"},
				{priority = 1.0, type = {"Armored", "MG", "Class2",}, unit = "wz34"},
				{priority = 2.0, type = {"Armored", "MG", "Class1",}, unit = "wz34puteaux"},
				{priority = 1.0, type = {"Vehicle", "AT", "Class2",}, unit = "pf621_75mm"},
			--Tanks_light
				{priority = 1.0, type = {"Tank", "Light", "MG", "Class3",}, unit = "tks-mg"},
				{priority = 1.0, type = {"Tank", "Light", "Class3",}, unit = "tks-20mm"},
				{priority = 1.0, type = {"Tank", "Light", "Class2",}, unit = "vickersedw"},
				{priority = 1.5, type = {"Tank", "Light", "Class1",}, unit = "vickersejw"},
				{priority = 2.5, type = {"Tank", "Light", "Class1",}, unit = "7tp"},
				{priority = 1.0, type = {"Tank", "Light", "Class1",}, unit = "r35_pol"},
			-- Doctrine All Around
				--{priority = 1.0, type = {"Doctrine", "Vehicle", "MG", "Tier1", "Class1",}, unit = "doctrine_pf621_aa"},
				--{priority = 1.0, type = {"Doctrine", "Vehicle", "Tier1",}, unit = "doctrine_mech_infantry_pol_early"},      
				--{priority = 1.0, type = {"Doctrine", "Tank", "Light", "Tier1", "Class2",}, unit = "doctrine_tks-37mm"},
				--{priority = 1.5, type = {"Doctrine", "Tank", "Light", "Tier2", "Class3",}, unit = "doctrine_10tp"},
				--{priority = 0.5, type = {"Doctrine", "Cannon", "Artillery", "Tier2", "Class2",}, unit = "doctrine_105mm_wz1913"},
				--{priority = 1.0, type = {"Doctrine", "Tier2", "Class2",}, unit = "doctrine_squad_10th_cavalry_brigade(pol)"},
				--{priority = 1.0, type = {"Doctrine", "Cannon", "Artillery", "Tier3", "Class3",}, unit = "doctrine_155mm_wz1917"},
			-- Doctrine	
				--{priority = 1.0, type = {"Doctrine", "Infantry", "Squad", "Tier1", "Class1",}, unit = "doctrine_squad_kop(pol)"},
				--{priority = 1.0, type = {"Doctrine", "Tank", "Light", "Tier1", "Class2",}, unit = "doctrine_ft17_pol"},
				--{priority = 1.0, type = {"Doctrine", "Armored", "AT", "Light", "Tier2", "Class1",}, unit = "doctrine_wz29"},
				--{priority = 1.0, type = {"Doctrine", "Cannon", "AT", "Tier2", "Class3",}, unit = "doctrine_75mm_wz_02_26"},
				--{priority = 1.0, type = {"Doctrine", "Tank", "Light", "Tier2", "Class1",}, unit = "doctrine_h39_pol"},
				--{priority = 1.0, type = {"Doctrine", "Cannon", "AT", "Tier3", "Class3",}, unit = "doctrine_100mm_wz14"},
		}
	}
}
