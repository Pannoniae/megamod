Purchases["conquest.pol"] = {
	{Repeat = 0, --infinite
		Units = {
			--Infantry
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_light(pol)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_regular(pol)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_pionier(pol)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_sturmtrooper(pol)"},
				{priority = 1.0, type = {"Infantry", "Team", "Aux",}, unit = "single_auxiliary(pol)"},
				{priority = 1.0, type = {"Infantry", "Team",}, unit = "single_mg(pol)"},
				{priority = 1.0, type = {"Infantry", "Team",}, unit = "single_at(pol)"},
				{priority = 1.0, type = {"Infantry", "Team",}, unit = "single_mortar(pol)"},
				{priority = 1.0, type = {"Infantry", "Team",}, unit = "single_sniper(pol)"},
				{priority = 3.5, type = {"Infantry", "Squad",}, unit = "squad_light_late(pol)"},
				{priority = 2.0, type = {"Infantry", "Squad", "AT",}, unit = "single_at_late(pol)"},
				{priority = 1.0, type = {"Infantry", "Squad", "AT",}, unit = "single_atrifle(pol)"},
				{priority = 3.5, type = {"Infantry", "Squad",}, unit = "squad_regular_late(pol)"},
				{priority = 2.0, type = {"Infantry", "Squad", "AT",}, unit = "single_mortar_late(pol)"},
				{priority = 1.5, type = {"Infantry", "Squad",}, unit = "single_flamer_late(pol)"},
				{priority = 1.5, type = {"Infantry", "Squad",}, unit = "single_sniper_late(pol)"},
				{priority = 0.5, type = {"Infantry", "Squad",}, unit = "single_engineer_late(pol)"},
				{priority = 2.0, type = {"Infantry", "Squad",}, unit = "squad_pionier_late(pol)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_stormtrooper_late(pol)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_elite_late(pol)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "mechanized_infantry_pol"},
			--Automatic_weaponry
				{priority = 1.0, type = {"Cannon", "MG",}, unit = "ckm_wz30_mgun"},
				{priority = 1.0, type = {"Cannon", "AA",}, unit = "20mm_fka"},
				{priority = 1.5, type = {"Cannon", "AA",}, unit = "40mm_bofors"},
				{priority = 1.0, type = {"Cannon", "MG",}, unit = "303_bren_pol"},
				{priority = 1.5, type = {"Cannon", "AA",}, unit = "qf40mm_pol"},
			--AT_Weapons	
				{priority = 1.5, type = {"Cannon", "AT",}, unit = "37mm_bofors"},
				{priority = 1.0, type = {"Cannon", "AT", "AA",}, unit = "75mm_aa_wz36"},
				{priority = 2.0, type = {"Cannon", "AT",}, unit = "75mm_wz97"},
				{priority = 1.0, type = {"Cannon", "AT",}, unit = "qf2pdr_pol"},
				{priority = 2.0, type = {"Cannon", "AT",}, unit = "qf6pdr_pol"},
				{priority = 1.0, type = {"Cannon", "AT",}, unit = "qf17pdr_pol"},
			--Howitzers
				{priority = 1.5, type = {"Cannon", "Mortar",}, unit = "81mm_brandt_pol"},
				{priority = 0.5, type = {"Cannon", "Artillery",}, unit = "105mm_wz1913"},
				{priority = 0.5, type = {"Cannon", "Artillery",}, unit = "105mm_wz29"},
				{priority = 1.5, type = {"Cannon", "Artillery",}, unit = "qf25pdr_pol"},
				{priority = 0.5, type = {"Cannon", "Artillery",}, unit = "bl45_pol"},
			--Wheel_vehicles
				{priority = 0.5, type = {"Vehicle", "MG",}, unit = "sokol1000"},
				{priority = 1.0, type = {"Armored", "MG",}, unit = "wz34"},
				{priority = 2.5, type = {"Armored", "MG",}, unit = "wz34puteaux"},
				{priority = 1.5, type = {"Vehicle", "AT",}, unit = "pf621_75mm"},
				{priority = 1.0, type = {"Armored", "MG",}, unit = "dingo_pol"},
				{priority = 1.0, type = {"Armored", "AA",}, unit = "cmp_tri-polsten"},
				{priority = 1.0, type = {"Armored", "MG",}, unit = "m3halftrack_pol"},
				{priority = 2.5, type = {"Armored", "MG",}, unit = "mk2daimler_pol"},
				{priority = 1.5, type = {"Armored", "MG",}, unit = "staghound_pol"},
			--Tanks_light
				{priority = 1.0, type = {"Tank", "Light", "MG",}, unit = "tks-mg"},
				{priority = 1.5, type = {"Tank", "Light",}, unit = "tks-20mm"},
				{priority = 1.0, type = {"Tank", "Light",}, unit = "vickersedw"},
				{priority = 1.0, type = {"Tank", "Light",}, unit = "vickersejw"},
				{priority = 3.0, type = {"Tank", "Light",}, unit = "7tp"},
				{priority = 1.5, type = {"Tank", "Light", "AA",}, unit = "crusader_aa2_pol"},
				{priority = 1.0, type = {"Tank", "Light",}, unit = "m5a1_pol"},
				{priority = 2.0, type = {"Tank", "Light",}, unit = "crusader_pol"},
				{priority = 1.5, type = {"Tank", "Light", "Support",}, unit = "crusader_mki_cs_pol"},
			--Tanks_medium
				{priority = 3.0, type = {"Tank", "Medium",}, unit = "cromwell_mk_iv_pol"},
				{priority = 2.5, type = {"Tank", "Medium",}, unit = "m4a4_pol"},
				{priority = 0.5, type = {"Tank", "Medium",}, unit = "challenger_pol"},
				{priority = 2.0, type = {"Tank", "Medium",}, unit = "cromwell_mk_vi_pol"},
				{priority = 1.0, type = {"Tank", "Medium",}, unit = "m4a1_76_pol"},
				{priority = 1.0, type = {"Tank", "Medium",}, unit = "m4a4_firefly_pol"},
				{priority = 1.5, type = {"Tank", "Medium", "Support",}, unit = "m4a3_105_pol"},
			--Tanks_heavy			
			--SPG
				{priority = 1.5, type = {"Tank", "Medium", "AT",}, unit = "achilles_pol"},
				{priority = 1.0, type = {"Tank", "Medium", "Support",}, unit = "sexton_pol"},
		}
	}
}
