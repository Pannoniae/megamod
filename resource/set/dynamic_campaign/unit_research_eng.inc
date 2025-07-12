(define "research_brit"

;//---Off Map Support---
	{"np_conquest_flitfire"			requires		"single_officer(eng)"			costs 1 position (+ 2 %column) (+ 4 %row) }
	{"np_conquest_beaufighter_50"	requires	"np_conquest_flitfire"				costs 1 position (+ 4 %column) (+ 4 %row) }
	{"np_conquest_beaufighter"		requires	"np_conquest_beaufighter_50"		costs 1 position (+ 6 %column) (+ 4 %row) }
	{"np_bl45_smoke_barrage"		requires	"single_officer(eng)"			costs 1 position (+ 1 %column) (+ 3 %row) }
	{"np_76mm_mk_ii_mortar_barrage"	requires		"np_bl45_smoke_barrage"			costs 1 position (+ 3 %column) (+ 3 %row) }
	{"np_bl45_artillery_barrage"		requires	"np_76mm_mk_ii_mortar_barrage"		costs 1 position (+ 5 %column) (+ 3 %row) }
	{"np_107mm_mk_ii_mortar_barrage"	requires	"np_humber_com"					costs 1 position (+ 7 %column) (+ 3 %row) }
	{"np_bl7_2-inch_artillery_barrage"	requires	"np_107mm_mk_ii_mortar_barrage"	costs 1 position (+ 8 %column) (+ 4 %row) }

; ---SQUADS---

;---->
	{"single_officer(eng)"			requires	""								costs 1 position (+ 0 %column) (+ 3 %row) }
	{"single_sniper(eng)"			requires	"single_officer(eng)"			costs 1 position (+ 2 %column) (+ 2 %row) }
	{"np_mechanized_infantry"		requires 	"single_sniper(eng)"				costs 2 position (+ 4 %column) (+ 2 %row) }
	{"np_kangaroo_pioneers"			requires	"np_mechanized_infantry"		costs 1 position (+ 6 %column) (+ 2 %row) }
	{"np_humber_com"				requires	"np_kangaroo_pioneers"			costs 2 position (+ 8 %column) (+ 2 %row) }
	
	;---->
	{"single_auxiliary_late(eng)"	requires	""								costs 0 position (+ 0 %column) (+ 7 %row) }
	{"single_medic(eng)"				requires	"single_auxiliary_late(eng)"	costs 0 position (+ 1 %column) (+ 6 %row) }
	{"squad_light_late(eng)"			requires	"single_auxiliary_late(eng)"	costs 1 position (+ 2 %column) (+ 7 %row) }
	{"squad_regular_late(eng)"		requires	"squad_light_late(eng)"			costs 2 position (+ 4 %column) (+ 7 %row) }
	{"squad_bef(eng)"				requires	"squad_light_late(eng)"			costs 2 position (+ 2 %column) (+ 9 %row) }
	{"squad_scott_late(eng)"			requires	"squad_light_late(eng)"			costs 2 position (+ 3 %column) (+ 8 %row) }
	{"squad_canadians(eng)"			requires	"squad_light_late(eng)"			costs 3 position (+ 3 %column) (+ 6 %row) }
	{"squad_pionier_late(eng)"		requires	"squad_regular_late(eng)"		costs 2 position (+ 5 %column) (+ 6 %row) }
	{"squad_scout_late(eng)"			requires	"squad_regular_late(eng)"		costs 2 position (+ 7 %column) (+ 7 %row) }
	{"squad_stormtrooper_late(eng)"	requires	"squad_regular_late(eng)"		costs 2 position (+ 6 %column) (+ 8 %row) }
	{"squad_recon(eng)"				requires	"squad_scout_late(eng)"			costs 1 position (+ 8 %column) (+ 8 %row) }
	{"squad_sas_late(eng)"			requires	"squad_pionier_late(eng)"		costs 2 position (+ 7 %column) (+ 6 %row) }
	;---->
	
	
	;---->
	{"single_atrifle(eng)"			requires	""								costs 1 position (+ 0 %column) (+ 9 %row) }
	{"single_riflegrenade_late(eng)"	requires	"single_atrifle(eng)"		costs 1 position (+ 1 %column) (+ 8 %row) }
	{"single_at_late(eng)"			requires	"single_atrifle(eng)"			costs 1 position (+ 2 %column) (+ 10 %row) }
	
	;---->
	{"single_engineer(eng)"		requires	""								costs 1 position (+ 0 %column) (+ 12 %row) }
	{"single_ap_miner(eng)"		requires	"single_engineer(eng)"			costs 1 position (+ 1 %column) (+ 11 %row) }
	{"single_at_miner(eng)"		requires	"single_ap_miner(eng)"			costs 1 position (+ 3 %column) (+ 11 %row) }
	{"single_flamer_late(eng)"	requires	"single_engineer(eng)"			costs 1 position (+ 1 %column) (+ 13 %row) }
	{"np_matador_eng"			requires	"single_engineer(eng)"			costs 2 position (+ 4 %column) (+ 12 %row) }
	{"np_m30kangaroo"			requires	"np_matador_eng"					costs 2 position (+ 6 %column) (+ 12 %row) }
	
; ---MG---
	{"single_mg_late(eng)"		requires	""								costs 1 position (+ 0 %column) (+ 14 %row) }
	{"np_303_bren"				requires 	"single_mg_late(eng)"					costs 1	position (+ 2 %column) (+ 14 %row) }
	{"np_303_vickers_mkiv_aa"	requires 	"np_303_bren"								costs 1	position (+ 4 %column) (+ 14 %row) }

; ---Mortars---
	{"single_mortar_late(eng)"	requires	""								costs 1 position (+ 1 %column) (+ 15 %row) }
	{"np_76mm_mk_ii"			requires 	"single_mortar_late(eng)"				costs 1	position (+ 3 %column) (+ 15 %row) }
	{"np_universal_mortar_carrier"	requires 	"np_76mm_mk_ii"						costs 1	position (+ 5 %column) (+ 15 %row) }
	{"np_107mm_mk_ii"			requires 	"np_universal_mortar_carrier"				costs 4 position (+ 7 %column) (+ 15 %row) }

; ---AA---
	;---->
	{"np_oerlikon_mk2"			requires	"np_qf2pdr"								costs 1 position (+ 1 %column) (+ 16 %row) }
	{"np_qf40mm"				requires	"np_oerlikon_mk2"							costs 2 position (+ 4 %column) (+ 16 %row) }
	{"np_qf3,7inch"				requires	"np_qf40mm"								costs 2 position (+ 6 %column) (+ 16 %row) }

; ---AT Guns---
	;---->
	{"np_qf2pdr"				requires	""										costs 1 position (+ 0 %column) (+ 17 %row) }
	{"np_qf6pdr"				requires	"np_qf2pdr"								costs 2 position (+ 2 %column) (+ 17 %row) }
	{"np_qf17pdr"				requires	"np_qf6pdr"								costs 7 position (+ 5 %column) (+ 17 %row) }

; ---Infantry Guns---

; ---Artillery---
	{"np_qf18pdr"				requires	"np_qf6pdr"								costs 3 position (+ 2 %column) (+ 18 %row) }
	{"np_qf25pdr"				requires	"np_qf18pdr"								costs 4 position (+ 4 %column) (+ 18 %row) }
	{"np_bl45"					requires	"np_qf25pdr"								costs 2 position (+ 5 %column) (+ 19 %row) }
	{"np_bl6-inch"				requires	"np_qf25pdr"								costs 4 position (+ 4 %column) (+ 20 %row) }
	{"np_bl7_2-inch"			requires	"np_bl6-inch"								costs 2 position (+ 6 %column) (+ 20 %row) }
	{"np_bl72"					requires	"np_bl7_2-inch"							costs 1 position (+ 8 %column) (+ 20 %row) }
	{"np_land_mattress"			requires	"np_bl45"									costs 3 position (+ 7 %column) (+ 19 %row) }

	;---->
	{"inf_crate_eng"			requires	""										costs 0 position (+ 0 %column) (+ 22 %row) }
	{"np_morris_cs8"			requires	"inf_crate_eng"							costs 1 position (+ 2 %column) (+ 22 %row) }
	{"np_matador_fuel"			requires	"np_morris_cs8"							costs 1 position (+ 4 %column) (+ 22 %row) }
	{"np_matador_tr"			requires	"np_morris_cs8"							costs 1 position (+ 3 %column) (+ 21 %row) }
	{"np_matador_art"			requires	"np_morris_cs8"							costs 2 position (+ 3 %column) (+ 23 %row) }
	{"np_m3halftrack" 			requires 	"np_matador_tr"								costs 2 position (+ 5 %column) (+ 21 %row) }
	
	
;---Armored Cars---
	;---->
	{"np_dingo"					requires 	""										costs 1 position (+ 0 %column) (+ 24 %row) }
	{"np_universal_carrier"		requires 	"np_dingo"									costs 1 position (+ 1 %column) (+ 25 %row) }
	{"np_m3a1_scout" 			requires 	"np_universal_carrier"					costs 1 position (+ 3 %column) (+ 25 %row) }
	{"np_universal_boyes_carrier"	requires 	"np_universal_carrier"				costs 1 position (+ 2 %column) (+ 24 %row) }
	{"np_humber" 				requires 	"np_universal_boyes_carrier"				costs 1 position (+ 4 %column) (+ 24 %row) }
	{"np_mk2daimler" 			requires 	"np_humber"								costs 1 position (+ 6 %column) (+ 24 %row) }
	{"np_staghound"				requires 	"np_mk2daimler"							costs 2 position (+ 8 %column) (+ 24 %row) }
	{"np_staghound_mk3"			requires 	"np_staghound"							costs 3 position (+ 8 %column) (+ 22 %row) }
	{"np_aec_mk2" 				requires 	"np_humber"								costs 2 position (+ 5 %column) (+ 25 %row) }
	{"np_aec_aa" 				requires 	"np_aec_mk2"								costs 1 position (+ 6 %column) (+ 26 %row) }
	{"np_aec_mk3" 				requires 	"np_aec_mk2"								costs 3 position (+ 7 %column) (+ 25 %row) }
	

	; ---Light Tanks---
	;---->
	
	{"np_tetrarch_mk7"			requires 	""										costs 1 position (+ 0 %column) (+ 27 %row) }
	{"np_a13_mk1"				requires 	"np_tetrarch_mk7"							costs 1 position (+ 1 %column) (+ 28 %row) }
	{"np_a13_mk2a"				requires 	"np_a13_mk1"								costs 1 position (+ 1 %column) (+ 29 %row) }
	{"np_crusader_mki"			requires 	"np_a13_mk2a"								costs 1 position (+ 1 %column) (+ 30 %row) }
	{"np_crusader_aa2"			requires 	"np_crusader_mki"							costs 1 position (+ 3 %column) (+ 29 %row) }
	{"np_crusader_aa1"			requires 	"np_crusader_aa2"							costs 1 position (+ 4 %column) (+ 28 %row) }
	{"np_crusader_mki_cs"		requires 	"np_crusader_aa2"							costs 1 position (+ 5 %column) (+ 29 %row) } 
	{"np_crusader_mk6"			requires 	"np_crusader_mki"							costs 2 position (+ 4 %column) (+ 30 %row) }

	{"np_mkvic"					requires 	""										costs 1 position (+ 0 %column) (+ 26 %row) }
	{"np_a10_mk2"				requires 	"np_mkvic"									costs 1 position (+ 2 %column) (+ 26 %row) }
	{"np_a10_mk2_cs"			requires 	"np_a10_mk2"								costs 2 position (+ 4 %column) (+ 26 %row) }
	
	; ---Medium Tanks---
	{"np_valentine_mkiii"		requires 	"np_a10_mk2"								costs 3 position (+ 5 %column) (+ 27 %row) }
	{"np_valentine_mkix"		requires 	"np_valentine_mkiii"						costs 2 position (+ 6 %column) (+ 28 %row) }
	{"np_valentine_mkxi"		requires 	"np_valentine_mkix"						costs 1 position (+ 7 %column) (+ 29 %row) }
	{"np_archer"				requires 	"np_valentine_mkxi"						costs 3 position (+ 8 %column) (+ 30 %row) }
	{"np_matilda_mkii"			requires 	"np_valentine_mkiii"						costs 2 position (+ 7 %column) (+ 27 %row) }
	{"np_matilda_mkii_cs"		requires 	"np_matilda_mkii"							costs 2 position (+ 8 %column) (+ 26 %row) }
	{"np_m3grant"				requires 	"np_matilda_mkii"							costs 3 position (+ 8 %column) (+ 28 %row) }
	
	;---->
	{"np_cromwell_mk_iv"		requires 	"np_crusader_mki"							costs 9 position (+ 0 %column) (+ 32 %row) }
	{"np_cromwell_mk_vi"		requires 	"np_cromwell_mk_iv"						costs 5 position (+ 2 %column) (+ 33 %row) }
	{"np_cromwell_mk_iv_rl"		requires 	"np_cromwell_mk_vi"						costs 3 position (+ 4 %column) (+ 33 %row) }
	{"np_cromwell_75hv"			requires 	"np_cromwell_mk_iv_rl"						costs 2 position (+ 6 %column) (+ 33 %row) }
	{"np_challenger_a30"		requires 	"np_cromwell_mk_iv"						costs 7 position (+ 2 %column) (+ 31 %row) }
	{"np_comet_a34"				requires 	"np_cromwell_mk_iv"						costs 8 position (+ 3 %column) (+ 32 %row) }
	;---->
	{"np_m4a4"					requires 	"np_cromwell_mk_iv"						costs 4 position (+ 2 %column) (+ 34 %row) }
	{"np_m4a1_76"				requires 	"np_m4a4"									costs 6 position (+ 4 %column) (+ 34 %row) }
	{"np_m4a4_firefly"			requires 	"np_m4a4"									costs 7 position (+ 6 %column) (+ 34 %row) }
	{"np_m4a4_tulip"			requires 	"np_m4a4"									costs 3 position (+ 8 %column) (+ 34 %row) }
	{"np_m4a3_105"				requires 	"np_m4a4_firefly"							costs 1 position (+ 3 %column) (+ 35 %row) }
	{"np_m4a4_firefly_tulip"	requires 	"np_m4a4_firefly"							costs 3 position (+ 7 %column) (+ 35 %row) }
	{"np_m7"					requires 	"np_m4a3_105"							costs 2 position (+ 8 %column) (+ 36 %row) }
	
	; ---Heavy Tanks---
	;---->
	
	{"np_churchill_mk_ii"		requires 	"np_cromwell_mk_iv"						costs 5 position (+ 0 %column) (+ 38 %row) }
	{"np_churchill_mk_iv"		requires 	"np_churchill_mk_ii"						costs 2 position (+ 2 %column) (+ 38 %row) }
	{"np_churchill_mk_ix"		requires 	"np_churchill_mk_iv"						costs 2 position (+ 5 %column) (+ 37 %row) }
	{"np_churchill_mk_vii"		requires 	"np_churchill_mk_iv"						costs 4 position (+ 4 %column) (+ 38 %row) }
	{"np_churchill_crocodile"	requires 	"np_churchill_mk_vii"						costs 2 position (+ 6 %column) (+ 38 %row) }
	{"np_black_prince"			requires 	"np_churchill_mk_vii"						costs 5 position (+ 6 %column) (+ 40 %row) }
	{"np_tog2"					requires 	"np_black_prince"							costs 2 position (+ 8 %column) (+ 40 %row) }

	; ---Self Propelled Guns---
	{"np_achilles"				requires 	"np_qf17pdr"								costs 8 position (+ 7 %column) (+ 17 %row) }
	{"np_bishop"				requires 	"np_qf25pdr"								costs 6 position (+ 6 %column) (+ 18 %row) }
	{"np_sexton"				requires 	"np_bishop"								costs 1 position (+ 8 %column) (+ 18 %row) }

	{"np_churchill_gun_carrier"	requires 	"np_churchill_mk_ii"					costs 3 position (+ 1 %column) (+ 39 %row) }
	{"np_churchill_avre"		requires 	"np_churchill_gun_carrier"				costs 2 position (+ 3 %column) (+ 39 %row) }
	{"np_churchill_mk_viii"		requires 	"np_churchill_avre"					costs 1 position (+ 4 %column) (+ 40 %row) }
)
