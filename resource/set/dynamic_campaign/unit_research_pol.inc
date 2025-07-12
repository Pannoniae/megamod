(define "research_pol"
; ---SQUADS---

	{"single_officer(pol)"			requires	""								costs 1 position (+ 0 %column) (+ 3 %row) }
	{"single_sniper(pol)"			requires	"single_officer(pol)"			costs 1 position (+ 2 %column) (+ 2 %row) }
	

	;//---Off Map Support---
	{"105mm_wz29_smoke_barrage"			requires	"single_officer(pol)"				costs 1 position (+ 2 %column) (+ 3 %row) }
	{"81mm_brandt_pol_mortar_barrage"	requires	"105mm_wz29_smoke_barrage"			costs 1 position (+ 4 %column) (+ 3 %row) }
	{"105mm_wz29_artillery_barrage"		requires	"81mm_brandt_pol_mortar_barrage"	costs 1 position (+ 6 %column) (+ 3 %row) }
	{"155mm_wz1917_artillery_barrage"	requires	"105mm_wz29_artillery_barrage"		costs 1 position (+ 8 %column) (+ 3 %row) }
		
	{"conquest_pzlp23"				requires	"single_officer(pol)"			costs 2 position (+ 4 %column) (+ 2 %row) }


	{"single_auxiliary(pol)"		requires	""								costs 0 position (+ 0 %column) (+ 5 %row) }
	{"squad_light(pol)"				requires	"single_auxiliary(pol)"			costs 2 position (+ 2 %column) (+ 5 %row) }
	{"squad_regular(pol)"			requires	"squad_light(pol)"				costs 2 position (+ 4 %column) (+ 5 %row) }
	{"squad_regular_heavy(pol)"		requires	"squad_regular(pol)"			costs 2 position (+ 6 %column) (+ 5 %row) }
	{"squad_pionier(pol)"			requires	"squad_regular(pol)"			costs 3 position (+ 5 %column) (+ 4 %row) }
	{"squad_sturmtrooper(pol)"		requires	"squad_regular(pol)"			costs 3 position (+ 5 %column) (+ 6 %row) }

	{"single_engineer(pol)"			requires	""								costs 2 position (+ 0 %column) (+ 8 %row) }
	{"single_ap_miner(pol)"			requires	"single_engineer(pol)"			costs 0 position (+ 1 %column) (+ 7 %row) }
	{"single_at_miner(pol)"			requires	"single_ap_miner(pol)"			costs 0 position (+ 3 %column) (+ 7 %row) }
	{"pf621_eng"					requires	"single_engineer(pol)"			costs 2 position (+ 3 %column) (+ 8 %row) }
	
	
	{"single_mg(pol)"				requires	""								costs 1 position (+ 0 %column) (+ 9 %row) }
	{"ckm_wz30_mgun"				requires	"single_mg(pol)"				costs 1 position (+ 2 %column) (+ 9 %row) }
	{"sokol1000"					requires	"ckm_wz30_mgun"					costs 2 position (+ 4 %column) (+ 9 %row) }
	{"pf621_aa"						requires	"sokol1000"						costs 1 position (+ 6 %column) (+ 9 %row) }
	
	{"single_mortar(pol)"			requires	""								costs 1 position (+ 1 %column) (+ 10 %row) }
	{"81mm_brandt_pol"				requires	"single_mortar(pol)"			costs 1 position (+ 3 %column) (+ 10 %row) }

	{"20mm_fka"						requires	""								costs 2 position (+ 0 %column) (+ 11 %row) }
	{"40mm_bofors"					requires	"20mm_fka"						costs 2 position (+ 2 %column) (+ 11 %row) }
	{"75mm_aa_wz36"					requires	"40mm_bofors"					costs 4 position (+ 4 %column) (+ 11 %row) }

	{"single_at(pol)"				requires	""								costs 1 position (+ 0 %column) (+ 13 %row) }
	{"37mm_bofors"					requires	"single_at(pol)"				costs 1 position (+ 2 %column) (+ 13 %row) }
	{"75mm_wz_02_26"				requires	"37mm_bofors"					costs 2 position (+ 3 %column) (+ 12 %row) }
	{"75mm_wz97"					requires	"37mm_bofors"					costs 2 position (+ 4 %column) (+ 13 %row) }
	{"pf621_75mm"					requires	"75mm_wz97"						costs 2 position (+ 6 %column) (+ 12 %row) }
	{"105mm_wz1913"					requires	"75mm_wz97"						costs 4 position (+ 6 %column) (+ 14 %row) }
	{"105mm_wz29"					requires	"105mm_wz1913"					costs 1 position (+ 8 %column) (+ 14 %row) }
	{"155mm_wz1917"					requires	"105mm_wz29"					costs 4 position (+ 8 %column) (+ 15 %row) }

	{"inf_crate_pol"				requires	""								costs 0 position (+ 0 %column) (+ 16 %row) }
	{"praga_rv"						requires	"inf_crate_pol"					costs 1 position (+ 2 %column) (+ 16 %row) }
	{"pf621_inf"					requires	"praga_rv"						costs 1 position (+ 3 %column) (+ 17 %row) }
	{"pf621_art"					requires	"praga_rv"						costs 2 position (+ 3 %column) (+ 15 %row) }
	{"pf621_fuel"					requires	"praga_rv"						costs 1 position (+ 4 %column) (+ 16 %row) }
	
	{"wz34"							requires	" "								costs 1 position (+ 0 %column) (+ 18 %row) }
	{"wz34puteaux"					requires	"wz34"							costs 1 position (+ 2 %column) (+ 18 %row) }
	{"wz29"							requires	"wz34puteaux"					costs 1 position (+ 4 %column) (+ 18 %row) }

	{"tks-mg"						requires	""								costs 1 position (+ 0 %column) (+ 19 %row) }
	{"tks-20mm"						requires	"tks-mg" 						costs 1 position (+ 1 %column) (+ 20 %row) }
	{"vickersedw"					requires	"tks-20mm"						costs 1 position (+ 2 %column) (+ 20 %row) }
	{"tks-37mm"						requires	"tks-20mm"						costs 1 position (+ 1 %column) (+ 21 %row) }
	{"vickersejw"					requires	"vickersedw"					costs 1 position (+ 4 %column) (+ 20 %row) }
	{"7tp"							requires	"vickersejw"					costs 2 position (+ 6 %column) (+ 20 %row) }
	{"10tp"							requires	"7tp"							costs 2 position (+ 7 %column) (+ 19 %row) }
	{"r35_pol"						requires	"7tp"							costs 2 position (+ 7 %column) (+ 21 %row) }
	{"h39_pol"						requires	"r35_pol"						costs 1 position (+ 8 %column) (+ 21 %row) }

	;---->
	{"single_officer_late(pol)"		requires	"single_officer(pol)"			costs 6 position (+ 0 %column) (+ 22 %row) }
	{"single_sniper_late(pol)"		requires	"single_officer_late(pol)"		costs 1 position (+ 2 %column) (+ 22 %row) }
	{"mechanized_infantry_pol"		requires 	"single_officer_late(pol)"		costs 2 position (+ 1 %column) (+ 24 %row) }
	{"conquest_b25_pol"				requires	"single_officer_late(pol)"		costs 2 position (+ 5 %column) (+ 23 %row) }
	{"staghound_com_pol"			requires 	"mechanized_infantry_pol"		costs 2 position (+ 3 %column) (+ 24 %row) }

	;---->
	{"single_auxiliary_late(pol)"	requires	"single_officer_late(pol)"		costs 0 position (+ 0 %column) (+ 26 %row) }
	{"single_medic_late(pol)"		requires	"single_auxiliary_late(pol)"	costs 0 position (+ 2 %column) (+ 25 %row) }
	{"squad_light_late(pol)"		requires	"single_auxiliary_late(pol)"	costs 1 position (+ 2 %column) (+ 26 %row) }
	{"squad_regular_late(pol)"		requires	"squad_light_late(pol)"			costs 2 position (+ 4 %column) (+ 26 %row) }
	{"squad_pionier_late(pol)"		requires	"squad_regular_late(pol)"		costs 2 position (+ 5 %column) (+ 25 %row) }
	{"squad_scout_late(pol)"		requires	"squad_regular_late(pol)"		costs 2 position (+ 6 %column) (+ 26 %row) }
	{"squad_stormtrooper_late(pol)"	requires	"squad_regular_late(pol)"		costs 2 position (+ 5 %column) (+ 27 %row) }
	{"squad_elite_late(pol)"		requires	"squad_pionier_late(pol)"		costs 1 position (+ 7 %column) (+ 25 %row) }
	
	;---->

	
	;---->
	{"single_atrifle(pol)"			requires	"single_auxiliary_late(pol)"	costs 1 position (+ 0 %column) (+ 28 %row) }
	{"single_riflegrenade_late(pol)"	requires	"single_atrifle(pol)"		costs 1 position (+ 1 %column) (+ 27 %row) }
	{"single_at_late(pol)"			requires	"single_atrifle(pol)"			costs 1 position (+ 2 %column) (+ 29 %row) }
	
	;---->
	{"single_mortar_late(pol)"		requires	"single_riflegrenade_late(pol)"	costs 1 position (+ 3 %column) (+ 27 %row) }
	


	;---->
	{"single_engineer_late(pol)"	requires	"single_atrifle(pol)"			costs 1 position (+ 0 %column) (+ 31 %row) }
	{"single_ap_miner_late(pol)"	requires	"single_engineer_late(pol)"		costs 1 position (+ 1 %column) (+ 30 %row) }
	{"single_at_miner_late(pol)"	requires	"single_ap_miner_late(pol)"		costs 1 position (+ 3 %column) (+ 30 %row) }
	{"single_flamer_late(pol)"		requires	"single_engineer_late(pol)"		costs 1 position (+ 1 %column) (+ 32 %row) }
	{"bedford_ql_eng"				requires	"single_engineer_late(pol)"		costs 2 position (+ 4 %column) (+ 31 %row) }
	{"m5hst_pol"					requires	"bedford_ql_eng"				costs 2 position (+ 6 %column) (+ 31 %row) }
	
; ---MG---
	{"single_mg_late(pol)"			requires	"single_engineer_late(pol)"		costs 1 position (+ 0 %column) (+ 33 %row) }
	{"303_bren_pol"					requires 	"single_mg_late(pol)"			costs 1 position (+ 2 %column) (+ 33 %row) }
	{"303_bren_tripod_aa"			requires 	"303_bren_pol"					costs 1 position (+ 4 %column) (+ 33 %row) }

; ---AA---
	;---->
	{"qf40mm_pol"			requires	"qf2pdr_pol"							costs 2 position (+ 2 %column) (+ 35 %row) }

; ---AT Guns---
	;---->
	{"qf2pdr_pol"			requires	"single_mg_late(pol)"					costs 1 position (+ 0 %column) (+ 36 %row) }
	{"qf6pdr_pol"			requires	"qf2pdr_pol"							costs 2 position (+ 2 %column) (+ 36 %row) }
	{"qf17pdr_pol"			requires	"qf6pdr_pol"							costs 7 position (+ 5 %column) (+ 36 %row) }

; ---Infantry Guns---

; ---Artillery---
	{"75mm_m1_pol"			requires	"qf6pdr_pol"							costs 2 position (+ 4 %column) (+ 35 %row) }
	{"qf25pdr_pol"			requires	"qf6pdr_pol"							costs 3 position (+ 4 %column) (+ 37 %row) }
	{"bl45_pol"				requires	"qf25pdr_pol"							costs 2 position (+ 6 %column) (+ 37 %row) }
	
	;---->
	{"inf_crate_pol2"		requires	"qf2pdr_pol"							costs 1 position (+ 0 %column) (+ 39 %row) }
	{"chevrolet_pol"		requires	"inf_crate_pol2"						costs 1 position (+ 2 %column) (+ 39 %row) }
	{"chevrolet_fuel_pol"	requires	"chevrolet_pol"							costs 1 position (+ 4 %column) (+ 39 %row) }
	{"bedford_ql_inf"		requires	"chevrolet_pol"							costs 1 position (+ 3 %column) (+ 38 %row) }
	{"bedford_ql_art"		requires	"chevrolet_pol"							costs 2 position (+ 3 %column) (+ 40 %row) }
	{"m3halftrack_pol" 		requires 	"bedford_ql_inf"						costs 1 position (+ 7 %column) (+ 38 %row) }
	
;---Armored Cars---
	;---->
	{"dingo_pol"			requires 	"inf_crate_pol2"						costs 1 position (+ 0 %column) (+ 42 %row) }
	{"mk2daimler_pol"		requires 	"dingo_pol"								costs 2 position (+ 2 %column) (+ 42 %row) }
	{"cmp_tri-polsten"		requires 	"dingo_pol"								costs 3 position (+ 3 %column) (+ 43 %row) }
	{"staghound_pol" 		requires 	"mk2daimler_pol"						costs 1 position (+ 4 %column) (+ 42 %row) }

	; ---Light Tanks---
	;---->
	{"m5a1_pol"				requires 	"dingo_pol"								costs 3 position (+ 0 %column) (+ 44 %row) }
	{"crusader_aa2_pol"		requires 	"m5a1_pol"								costs 1 position (+ 2 %column) (+ 44 %row) }
	{"crusader_pol"			requires 	"crusader_aa2_pol"						costs 1 position (+ 4 %column) (+ 44 %row) }
	{"crusader_mki_cs_pol"	requires 	"crusader_pol"							costs 3 position (+ 6 %column) (+ 44 %row) }

	
	; ---Medium Tanks---
	;---->
	{"cromwell_mk_iv_pol"	requires 	"m5a1_pol"								costs 9 position (+ 0 %column) (+ 47 %row) }
	{"challenger_pol"		requires 	"cromwell_mk_iv_pol"					costs 7 position (+ 2 %column) (+ 47 %row) }
	{"cromwell_mk_vi_pol"	requires 	"cromwell_mk_iv_pol"					costs 5 position (+ 3 %column) (+ 46 %row) }
	
	;---->
	{"m4a4_pol"				requires 	"cromwell_mk_iv_pol"					costs 4 position (+ 2 %column) (+ 48 %row) }
	{"m4a1_76_pol"			requires 	"m4a4_pol"								costs 6 position (+ 4 %column) (+ 48 %row) }
	{"m4a4_firefly_pol"		requires 	"m4a4_pol"								costs 7 position (+ 6 %column) (+ 49 %row) }
	{"m4a3_105_pol"			requires 	"m4a4_firefly_pol"						costs 1 position (+ 8 %column) (+ 49 %row) }
	
	; ---Heavy Tanks---

	; ---Self Propelled Guns---
	{"achilles_pol"			requires 	"qf17pdr_pol"							costs 8 position (+ 7 %column) (+ 36 %row) }
	{"sexton_pol"			requires 	"qf25pdr_pol"							costs 7 position (+ 8 %column) (+ 37 %row) }
)