Purchases["conquest.eng"] = {
	{Repeat = 0, --infinite
		Units = {
			--Infantry
				-- 1
				{priority = 3.5, type = {"Infantry", "Squad",}, unit = "squad_light_late(eng)"},
				{priority = 2.0, type = {"Infantry", "Squad", "AT",}, unit = "single_at_late(eng)"},
				{priority = 1.0, type = {"Infantry", "Squad", "AT",}, unit = "single_atrifle(eng)"},
				-- 2
				{priority = 3.5, type = {"Infantry", "Squad",}, unit = "squad_regular_late(eng)"},
				{priority = 0.5, type = {"Infantry", "Squad", "AT",}, unit = "single_mortar_late(eng)"},
				{priority = 1.5, type = {"Infantry", "Squad",}, unit = "squad_scott_late(eng)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_canadians(eng)"},
				-- 3
				{priority = 1.5, type = {"Infantry", "Squad",}, unit = "single_flamer_late(eng)"},
				{priority = 1.5, type = {"Infantry", "Squad",}, unit = "single_sniper(eng)"},
				-- 4
				{priority = 0.5, type = {"Infantry", "Squad",}, unit = "single_engineer(eng)"},
				-- 5
				{priority = 2.0, type = {"Infantry", "Squad",}, unit = "squad_pionier_late(eng)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_stormtrooper_late(eng)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_recon(eng)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "np_mechanized_infantry"},
				-- 6
			--Automatic_weaponry
				{priority = 1.0, type = {"Cannon", "MG",}, unit = "np_303_vickers_mkiv_aa"},
				{priority = 0.5, type = {"Cannon", "MG",}, unit = "np_303_bren"},
				{priority = 1.5, type = {"Cannon", "AA",}, unit = "np_qf40mm"},
			--AT_Weapons
				{priority = 0.5, type = {"Cannon", "AT",}, unit = "np_qf2pdr"},
				{priority = 2.0, type = {"Cannon", "AT",}, unit = "np_qf6pdr"},
				{priority = 1.0, type = {"Cannon", "AT",}, unit = "np_qf17pdr"},
			--Howitzers
				{priority = 1.5, type = {"Cannon", "Mortar",}, unit = "np_76mm_mk_ii"},
				{priority = 1.5, type = {"Cannon", "Artillery",}, unit = "np_qf18pdr"},
				{priority = 1.5, type = {"Cannon", "Artillery",}, unit = "np_qf25pdr"},
				{priority = 0.5, type = {"Cannon", "Artillery",}, unit = "np_bl45"},
				{priority = 0.5, type = {"Cannon", "Artillery",}, unit = "np_bl72"},
			--Wheel_vehicles
				{priority = 0.5, type = {"Armored", "MG",}, unit = "np_dingo"},
				{priority = 1.5, type = {"Armored", "MG",}, unit = "np_universal_carrier"},
				{priority = 1.0, type = {"Armored", "MG",}, unit = "np_m3halftrack"},
				{priority = 1.0, type = {"Armored", "AT",}, unit = "np_universal_boyes_carrier"},
				{priority = 2.0, type = {"Armored", "MG",}, unit = "np_humber"},
				{priority = 1.5, type = {"Armored", "AT",}, unit = "np_mk2daimler"},
				{priority = 1.0, type = {"Armored", "AT",}, unit = "np_staghound"},
				{priority = 1.0, type = {"Armored", "AT",}, unit = "np_aec_mk2"},
			--Tanks_light
				{priority = 0.5, type = {"Tank", "Light",}, unit = "np_tetrarch_mk7"},
				{priority = 1.5, type = {"Tank", "Light",}, unit = "np_a13_mk1"},
				{priority = 1.0, type = {"Tank", "Light",}, unit = "np_crusader_mki"},
				{priority = 1.0, type = {"Tank", "Light",}, unit = "np_crusader_aa2"},
				{priority = 3.0, type = {"Tank", "Light",}, unit = "np_crusader_mk6"},
			--Tanks_medium
				{priority = 2.0, type = {"Tank", "Medium",}, unit = "np_valentine_mkiii"},
				{priority = 1.0, type = {"Tank", "Medium",}, unit = "np_valentine_mkix"},
				{priority = 1.5, type = {"Tank", "Medium",}, unit = "np_valentine_mkxi"},
				{priority = 1.0, type = {"Tank", "Medium",}, unit = "np_matilda_mkii"},
				{priority = 3.0, type = {"Tank", "Medium",}, unit = "np_cromwell_mk_iv"},
				{priority = 1.5, type = {"Tank", "Medium",}, unit = "np_m4a4"},
				{priority = 0.5, type = {"Tank", "Medium",}, unit = "np_challenger_a30"},
				{priority = 2.0, type = {"Tank", "Medium",}, unit = "np_m4a4_firefly"},
				{priority = 1.0, type = {"Tank", "Medium",}, unit = "np_cromwell_mk_vi"},
				{priority = 2.5, type = {"Tank", "Medium",}, unit = "np_comet_a34"},
				{priority = 1.0, type = {"Tank", "Medium",}, unit = "np_m4a4_tulip"},
				{priority = 1.0, type = {"Tank", "Medium",}, unit = "np_m4a4_firefly_tulip"},
			--Tanks_heavy
				{priority = 1.0, type = {"Tank", "Heavy",}, unit = "np_churchill_mk_ii"},
				{priority = 1.0, type = {"Tank", "Heavy",}, unit = "np_churchill_mk_iv"},
				{priority = 2.0, type = {"Tank", "Heavy",}, unit = "np_churchill_mk_ix"},
				{priority = 0.1, type = {"Tank", "Heavy",}, unit = "np_churchill_avre"},
				{priority = 1.5, type = {"Tank", "Heavy",}, unit = "np_churchill_mk_vii"},
				{priority = 0.1, type = {"Tank", "Heavy",}, unit = "np_tog2"},				
			--SPG
				{priority = 1.5, type = {"Tank", "Medium", "AT",}, unit = "np_achilles"},
				{priority = 0.1, type = {"Tank", "Medium", "Artillery",}, unit = "np_m7"},
				{priority = 1.0, type = {"Tank", "Medium", "Support",}, unit = "np_sexton"},
		}
	}
}
