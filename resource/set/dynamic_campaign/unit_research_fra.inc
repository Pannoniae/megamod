(define "research_fra"

; ---SQUADS---
	{"single_officer(fra)"				requires	""								costs 1 position (+ 0 %column) (+ 3 %row) }
	{"single_sniper(fra)"				requires	"single_officer(fra)"			costs 1 position (+ 2 %column) (+ 2 %row) }

;---Off Map Support---
	{"105mm_mle1913_smoke_barrage"		requires	"single_officer(fra)"				costs 1 position (+ 1 %column) (+ 4 %row) }
	{"81mm_brandt_fra_mortar_barrage"	requires	"105mm_mle1913_smoke_barrage"		costs 1 position (+ 3 %column) (+ 3 %row) }
	{"105mm_mle1913_artillery_barrage"	requires	"81mm_brandt_fra_mortar_barrage"	costs 1 position (+ 5 %column) (+ 3 %row) }
	{"155mm_gpf_artillery_barrage"		requires	"105mm_mle1913_artillery_barrage"	costs 1 position (+ 7 %column) (+ 3 %row) }
		
	{"conquest_douglas_50"				requires	"single_officer(fra)"			costs 1 position (+ 4 %column) (+ 2 %row) }

	{"single_auxiliary(fra)"			requires	""								costs 0 position (+ 0 %column) (+ 5 %row) }
	{"squad_light(fra)"					requires	"single_auxiliary(fra)"			costs 2 position (+ 2 %column) (+ 5 %row) }
	{"squad_regular(fra)"				requires	"squad_light(fra)"				costs 2 position (+ 4 %column) (+ 5 %row) }
	{"squad_pionier(fra)"				requires	"squad_regular(fra)"			costs 2 position (+ 6 %column) (+ 4 %row) }
	{"squad_fallschirmjaeger(fra)"		requires	"squad_regular(fra)"			costs 2 position (+ 6 %column) (+ 6 %row) }
	{"fra-mechanized_infantry"			requires	"squad_pionier(fra)"			costs 2 position (+ 8 %column) (+ 4 %row) }

	{"single_at(fra)"					requires	""								costs 1 position (+ 0 %column) (+ 7 %row) }
	{"25mm_hotchkiss_mle34"				requires	"single_at(fra)"				costs 1 position (+ 2 %column) (+ 7 %row) }

	{"single_engineer(fra)"				requires	""								costs 2 position (+ 0 %column) (+ 10 %row) }
	{"single_ap_miner(fra)"				requires	"single_engineer(fra)"			costs 1 position (+ 1 %column) (+ 9 %row) }
	{"single_at_miner(fra)"				requires	"single_ap_miner(fra)"			costs 1 position (+ 3 %column) (+ 9 %row) }
	{"single_flamer(fra)"				requires	"single_engineer(fra)"			costs 1 position (+ 1 %column) (+ 11 %row) }
	{"citroen_23r_eng"					requires 	"single_engineer(fra)"			costs 1 position (+ 4 %column) (+ 10 %row) }

; ---MG---
	{"single_mg(fra)"					requires 	""								costs 1 position (+ 0 %column) (+ 12 %row) }
	{"hotchkiss_mle1914"				requires 	"single_mg(fra)"				costs 1 position (+ 2 %column) (+ 12 %row) }
	{"13mm_hotchkiss"					requires	"hotchkiss_mle1914"				costs 1 position (+ 4 %column) (+ 12 %row) }
	{"laffly_v15t_mg"					requires 	"13mm_hotchkiss"				costs 1 position (+ 6 %column) (+ 12 %row) }
	{"25mm_hotchkiss_mle38"				requires 	"13mm_hotchkiss"				costs 2 position (+ 7 %column) (+ 11 %row) }

; ---Mortars---
	{"single_riflegrenade(fra)"			requires	""								costs 1 position (+ 1 %column) (+ 13 %row) }
	{"81mm_brandt_fra"					requires 	"single_riflegrenade(fra)"		costs 1 position (+ 3 %column) (+ 13 %row) }

; ---AA---

; ---AT Guns---
	{"47mm_puteaux_mle37"				requires	""								costs 3 position (+ 0 %column) (+ 15 %row) }
	{"laffly15tcc"						requires 	"47mm_puteaux_mle37" 			costs 2 position (+ 2 %column) (+ 14 %row) }
	{"75mm_mle1897"						requires	"47mm_puteaux_mle37"			costs 2 position (+ 2 %column) (+ 15 %row) }
	{"autocanon_75mm"					requires 	"75mm_mle1897"					costs 1 position (+ 4 %column) (+ 14 %row) }
	{"105mm_mle1913"					requires 	"75mm_mle1897"					costs 2 position (+ 5 %column) (+ 15 %row) }
	{"155mm_gpf"						requires	"105mm_mle1913"					costs 3 position (+ 6 %column) (+ 14 %row) }
	{"22cm_mortier"						requires	"155mm_gpf"						costs 6 position (+ 8 %column) (+ 15 %row) }

;---Cars---
	{"inf_crate_fra"					requires 	""								costs 0 position (+ 0 %column) (+ 17 %row) }
	{"renault_agk"						requires 	"inf_crate_fra"					costs 1 position (+ 2 %column) (+ 17 %row) }
	{"citroen_23r_inf"					requires 	"renault_agk"					costs 1 position (+ 3 %column) (+ 16 %row) }
	{"citroen_23r_art"					requires 	"renault_agk"					costs 2 position (+ 3 %column) (+ 18 %row) }
	{"renault_fuel"						requires 	"renault_agk"					costs 1 position (+ 4 %column) (+ 17 %row) }


;---Armored Cars---
	{"laffly_s15_toe"					requires 	""								costs 1 position (+ 0 %column) (+ 19 %row) }
	{"amc_p16"							requires 	"laffly_s15_toe"				costs 2 position (+ 2 %column) (+ 19 %row) }
	{"panhard"							requires 	"amc_p16"						costs 2 position (+ 4 %column) (+ 19 %row) }


; ---Light Tanks---
	{"amr35-13mm"						requires 	""								costs 1 position (+ 0 %column) (+ 21 %row) }
	{"amr35-25mm"						requires 	"amr35-13mm"					costs 1 position (+ 1 %column) (+ 22 %row) }
	{"fcm36"							requires	"amr35-25mm"					costs 2 position (+ 2 %column) (+ 23 %row) }
	{"r35"								requires 	"fcm36"							costs 1 position (+ 2 %column) (+ 25 %row) }
	{"r39"								requires 	"r35"							costs 1 position (+ 3 %column) (+ 26 %row) }
	{"h39"								requires 	"r39"							costs 1 position (+ 4 %column) (+ 27 %row) }
	{"s35"								requires 	"h39"							costs 2 position (+ 4 %column) (+ 28 %row) }
	{"char_d2"							requires 	"s35"							costs 2 position (+ 6 %column) (+ 28 %row) }
	{"b1bis"							requires 	"char_d2"						costs 4 position (+ 8 %column) (+ 28 %row) }
	{"sau40"							requires 	"s35"							costs 4 position (+ 7 %column) (+ 29 %row) }
	
	{"ft17m31"							requires 	""								costs 1 position (+ 0 %column) (+ 25 %row) }
	{"ft17"								requires 	"ft17m31"						costs 1 position (+ 1 %column) (+ 26 %row) }
	{"bs-75"							requires 	"ft17"							costs 5 position (+ 2 %column) (+ 27 %row) }
	
; ---SQUADS---
	;---->
	{"single_officer_late(fra)"			requires	"single_officer(fra)"			costs 5 position (+ 0 %column) (+ 31 %row) }
	{"single_sniper_late(fra)"			requires	"single_officer_late(fra)"		costs 1 position (+ 2 %column) (+ 30 %row) }
	{"mechanized_infantry_fra"			requires 	"single_officer_late(fra)"		costs 2 position (+ 1 %column) (+ 32 %row) }
	{"conquest_douglas"					requires	"single_officer_late(fra)"		costs 2 position (+ 5 %column) (+ 31 %row) }
	{"m8_grayhound_com_fr"				requires	"mechanized_infantry_fra"		costs 2 position (+ 3 %column) (+ 32 %row) }
	
	;---->
	{"single_auxiliary_late(fra)"		requires	"single_officer_late(fra)"		costs 0  position (+ 0 %column) (+ 34 %row) }
	{"single_medic_late(fra)"			requires	"single_auxiliary_late(fra)"	costs 1  position (+ 2 %column) (+ 33 %row) }
	{"squad_light_late(fra)"			requires	"single_auxiliary_late(fra)"	costs 1  position (+ 2 %column) (+ 34 %row) }
	{"squad_regular_late(fra)"			requires	"squad_light_late(fra)"			costs 2  position (+ 4 %column) (+ 34 %row) }
	{"squad_pionier_late(fra)"			requires	"squad_regular_late(fra)"		costs 2  position (+ 5 %column) (+ 33 %row) }
	{"squad_marine_late(fra)"			requires	"squad_regular_late(fra)"		costs 2  position (+ 6 %column) (+ 34 %row) }
	{"squad_stormtrooper_late(fra)"		requires	"squad_regular_late(fra)"		costs 2  position (+ 5 %column) (+ 35 %row) }
	{"squad_commandos_late(fra)"		requires	"squad_marine_late(fra)"		costs 2  position (+ 8 %column) (+ 34 %row) }
	
	;---->
	{"single_riflegrenade_late(fra)"	requires	"single_auxiliary_late(fra)"	costs 1 position (+ 0 %column) (+ 35 %row) }
	{"single_at_late(fra)"				requires	"single_riflegrenade_late(fra)"	costs 1 position (+ 2 %column) (+ 35 %row) }
	
	;---->
	{"single_engineer_late(fra)"		requires	"single_riflegrenade_late(fra)"	costs 1 position (+ 0 %column) (+ 37 %row) }
	{"single_ap_miner_late(fra)"		requires	"single_engineer_late(fra)"		costs 1 position (+ 1 %column) (+ 37 %row) }
	{"single_at_miner_late(fra)"		requires	"single_ap_miner_late(fra)"		costs 1 position (+ 3 %column) (+ 37 %row) }
	{"single_flamer_late(fra)"			requires	"single_engineer_late(fra)"		costs 2 position (+ 1 %column) (+ 38 %row) }
	{"cckw352_fr_eng"					requires	"single_engineer_late(fra)"		costs 2 position (+ 4 %column) (+ 37 %row) }
	{"m4hst_fr"							requires	"cckw352_fr_eng"				costs 2 position (+ 6 %column) (+ 37 %row) }

; ---MG---
	{"single_mg_late(fra)"				requires	"single_engineer_late(fra)"		costs 1 position (+ 0 %column) (+ 39 %row) }
	{"0_3cal_m1919a4_fr"				requires 	"single_mg_late(fra)"			costs 1 position (+ 2 %column) (+ 39 %row) }
	{"0_5cal_m2hb_fr"					requires 	"0_3cal_m1919a4_fr"				costs 1 position (+ 4 %column) (+ 39 %row) }

; ---Mortars---
	{"single_mortar_late(fra)"			requires	"single_mg_late(fra)"			costs 1 position (+ 1 %column) (+ 40 %row) }
	{"81_mm_m1_fr"						requires 	"single_mortar_late(fra)"		costs 1 position (+ 3 %column) (+ 40 %row) }
	{"m4halftrack_fr" 					requires 	"81_mm_m1_fr"					costs 4 position (+ 5 %column) (+ 40 %row) }

; ---AA---
	{"0_3cal_m1917a1_aa_fra"			requires 	"single_mortar_late(fra)"		costs 1 position (+ 2 %column) (+ 41 %row) }
	{"40_mm_m1_fr"						requires	"0_3cal_m1917a1_aa_fra"			costs 2 position (+ 4 %column) (+ 41 %row) }
	{"m17_fr" 							requires 	"40_mm_m1_fr"					costs 1 position (+ 6 %column) (+ 41 %row) }

; ---AT Guns---
	{"57_mm_m1_fr"						requires	"0_3cal_m1917a1_aa_fra"			costs 2 position (+ 0 %column) (+ 42 %row) }
	{"dodgewc55_fr"						requires	"57_mm_m1_fr"					costs 1 position (+ 1 %column) (+ 43 %row) }
	{"75_mm_m1897a4_fr"					requires	"57_mm_m1_fr"					costs 2 position (+ 2 %column) (+ 42 %row) }
	{"t12gmc_fr"						requires 	"75_mm_m1897a4_fr"				costs 1 position (+ 4 %column) (+ 42 %row) }

; ---Artillery---
	{"105_mm_m3_fr"						requires 	"75_mm_m1897a4_fr"				costs 4 position (+ 4 %column) (+ 43 %row) }
	{"105_mm_m2a1l_fr"					requires 	"105_mm_m3_fr"					costs 1 position (+ 5 %column) (+ 44 %row) }
	{"m7_fr"							requires 	"105_mm_m2a1l_fr"				costs 2 position (+ 6 %column) (+ 43 %row) }
	{"155_mm_m1918"						requires	"105_mm_m2a1l_fr"				costs 4 position (+ 6 %column) (+ 45 %row) }
	{"155mm_gpf_late"					requires	"155_mm_m1918"					costs 1 position (+ 8 %column) (+ 45 %row) }	
	{"m12gmc_fr"						requires 	"155mm_gpf_late"				costs 2 position (+ 8 %column) (+ 46 %row) }
	

;---Trucks---
	{"inf_crate_fr"						requires	"57_mm_m1_fr"					costs 0 position (+ 0 %column) (+ 46 %row) }
	{"chevrolet_fr"						requires	"inf_crate_fr"					costs 1 position (+ 2 %column) (+ 46 %row) }
	{"cckw352_fr_inf"					requires	"chevrolet_fr"					costs 1 position (+ 2 %column) (+ 45 %row) }
	{"chevrolet_fuel_fr"				requires	"chevrolet_fr"					costs 1 position (+ 4 %column) (+ 46 %row) }
	{"cckw352_fr_art"					requires	"chevrolet_fr"					costs 1 position (+ 2 %column) (+ 47 %row) }

;---Armored Cars---
	{"m3a1_scout_fr"					requires 	"inf_crate_fr"					costs 1 position (+ 1 %column) (+ 48 %row) }
	{"m20_fr" 							requires 	"m3a1_scout_fr"					costs 1 position (+ 3 %column) (+ 48 %row) }
	{"m8_grayhound_fr" 					requires 	"m20_fr"						costs 2 position (+ 5 %column) (+ 48 %row) }
	

; ---Light Tanks---
	{"m5a1_fr"							requires 	"m3a1_scout_fr"					costs 3 position (+ 0 %column) (+ 50 %row) }
	{"m8_fr"							requires 	"m5a1_fr"						costs 5 position (+ 2 %column) (+ 50 %row) }

	
; ---Medium Tanks---
	{"cavalier_mk_vii"					requires 	"m5a1_fr"						costs 6 position (+ 4 %column) (+ 50 %row) }
	{"m4a3_75_fr"						requires 	"m5a1_fr"						costs 9 position (+ 2 %column) (+ 52 %row) }
	{"m4a3_76_fr"						requires 	"m4a3_75_fr"					costs 8 position (+ 5 %column) (+ 52 %row) }
	{"m4a1e8_fr"						requires 	"m4a3_75_fr"					costs 8 position (+ 4 %column) (+ 53 %row) }
	{"m4a3e2_jumbo_fr"					requires 	"m4a3_76_fr"					costs 4 position (+ 7 %column) (+ 52 %row) }

	
; ---Heavy Tanks---


; ---Self Propelled Guns---
	{"m10wolverine_fr"					requires 	"m4a1e8_fr"						costs 1 position (+ 6 %column) (+ 53 %row) }
	{"m4a3_105_fr"						requires 	"m10wolverine_fr"				costs 1 position (+ 8 %column) (+ 53 %row) }
)