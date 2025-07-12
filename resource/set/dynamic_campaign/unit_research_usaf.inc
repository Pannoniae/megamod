(define "research_usaf"

;//---Off Map Support---
	{"us-conquest_piper_j-3"			requires	"single_officer(usaf)"			costs 1  position (+ 0 %column) (+ 5 %row) }
	{"us-conquest_b25_50"				requires	"us-conquest_piper_j-3"			costs 1  position (+ 4 %column) (+ 5 %row) }
	{"us-conquest_b25"					requires	"us-conquest_b25_50"				costs 1  position (+ 6 %column) (+ 5 %row) }
	{"us-105_mm_m2a1l_smoke_barrage"	requires	"single_officer(usaf)"			costs 1  position (+ 1 %column) (+ 4 %row) }
	{"us-81_mm_m1_mortar_barrage"		requires	"us-105_mm_m2a1l_smoke_barrage"	costs 1  position (+ 3 %column) (+ 4 %row) }
	{"us-105_mm_m2a1l_artillery_barrage"	requires	"us-81_mm_m1_mortar_barrage"		costs 1  position (+ 5 %column) (+ 4 %row) }
	{"us-107_mm_m2_mortar_barrage"		requires	"us-m8_grayhound_com"				costs 1  position (+ 8 %column) (+ 2 %row) }
	{"us-155_mm_m2_artillery_barrage"	requires	"us-m8_grayhound_com"				costs 1  position (+ 8 %column) (+ 4 %row) }

; ---SQUADS---

	;---->
	{"single_officer(usaf)"			requires	""								costs 1 position (+ 0 %column) (+ 3 %row) }
	{"single_sniper(usaf)"			requires	"single_officer(usaf)"			costs 1 position (+ 2 %column) (+ 2 %row) }
	{"us-pathfinders"				requires	"single_sniper(usaf)"			costs 1 position (+ 4 %column) (+ 2 %row) }
	{"us-mechanized_infantry"		requires 	"us-pathfinders"				costs 2 position (+ 6 %column) (+ 2 %row) }
	{"us-m8_grayhound_com"				requires	"us-mechanized_infantry"		costs 2 position (+ 7 %column) (+ 3 %row) }

	;---->
	{"single_auxiliary(usaf)"		requires	""								costs 0 position (+ 0 %column) (+ 7 %row) }
	{"single_medic(usaf)"			requires	"single_auxiliary(usaf)"			costs 1 position (+ 1 %column) (+ 8 %row) }
	{"squad_regular_early(usaf)"		requires	"single_auxiliary(usaf)"			costs 1 position (+ 1 %column) (+ 6 %row) }
	{"squad_regular_heavy_early(usaf)"	requires	"squad_regular_early(usaf)"			costs 2 position (+ 3 %column) (+ 6 %row) }
	{"squad_light(usaf)"				requires	"single_auxiliary(usaf)"	costs 1 position (+ 2 %column) (+ 7 %row) }
	{"squad_regular_afr(usaf)"		requires	"squad_light(usaf)"				costs 2 position (+ 3 %column) (+ 8 %row) }
	{"squad_regular(usaf)"			requires	"squad_light(usaf)"				costs 2 position (+ 4 %column) (+ 7 %row) }
	{"squad_regular_heavy(usaf)"		requires	"squad_regular(usaf)"			costs 2 position (+ 5 %column) (+ 8 %row) }
	{"squad_pionier(usaf)"			requires	"squad_regular(usaf)"			costs 2 position (+ 5 %column) (+ 6 %row) }
	{"squad_marine(usaf)"			requires	"squad_regular(usaf)"			costs 2 position (+ 6 %column) (+ 7 %row) }
	{"squad_paramarine(usaf)"		requires	"squad_marine(usaf)"				costs 2 position (+ 7 %column) (+ 6 %row) }
	{"us-mechanized_marines"		requires	"squad_marine(usaf)"				costs 2 position (+ 8 %column) (+ 7 %row) }
	{"squad_stormtrooper(usaf)"		requires	"squad_regular_heavy(usaf)"		costs 3 position (+ 6 %column) (+ 9 %row) }
	{"squad_commandos(usaf)"			requires	"squad_stormtrooper(usaf)"		costs 1 position (+ 7 %column) (+ 8 %row) }
	{"squad_stormtrooper_heavy(usaf)"	requires	"squad_stormtrooper(usaf)"	costs 2 position (+ 7 %column) (+ 10 %row) }
	
	
	;---->
	{"single_riflegrenade(usaf)"		requires	""								costs 1	position (+ 0 %column) (+ 9 %row) }
	{"single_riflegrenade_elite(usaf)"	requires	"single_riflegrenade(usaf)"	costs 1	position (+ 2 %column) (+ 9 %row) }
	{"single_at(usaf)"				requires	"single_riflegrenade(usaf)"		costs 1	position (+ 4 %column) (+ 9 %row) }

	;---->
	{"single_engineer(usaf)"			requires	""								costs 1 position (+ 0 %column) (+ 12 %row) }
	{"single_ap_miner(usaf)"			requires	"single_engineer(usaf)"			costs 1 position (+ 1 %column) (+ 11 %row) }
	{"single_at_miner(usaf)"			requires	"single_ap_miner(usaf)"			costs 1 position (+ 3 %column) (+ 11 %row) }
	{"single_flamer(usaf)"			requires	"single_engineer(usaf)"			costs 1 position (+ 1 %column) (+ 13 %row) }
	{"us-cckw353_eng"					requires	"single_engineer(usaf)"			costs 2 position (+ 4 %column) (+ 12 %row) }
	{"us-m4hst"						requires	"us-cckw353_eng"					costs 2 position (+ 6 %column) (+ 12 %row) }



; ---MG---
	;---->
	{"single_mg(usaf)"				requires	""								costs 1 position (+ 0 %column) (+ 14 %row) }
	{"single_mg_elite(usaf)"			requires	"single_mg(usaf)"				costs 1 position (+ 2 %column) (+ 14 %row) }
	{"us-0_3cal_m1917a1_aa"			requires 	"single_mg(usaf)"				costs 1 position (+ 4 %column) (+ 14 %row) }
	{"us-0_5cal_m2hb"					requires 	"us-0_3cal_m1917a1_aa"				costs 1 position (+ 6 %column) (+ 14 %row) }
	{"us-chevrolet_aa"					requires 	"us-0_3cal_m1917a1_aa"				costs 2 position (+ 7 %column) (+ 13 %row) }

; ---Mortars---
	;---->
	{"single_mortar(usaf)"			requires	""								costs 1	position (+ 1 %column) (+ 15 %row) }
	{"us-60_mm_m2"						requires 	"single_mortar(usaf)"			costs 1 position (+ 2 %column) (+ 16 %row) }
	{"us-81_mm_m1"						requires 	"us-60_mm_m2"						costs 1 position (+ 3 %column) (+ 16 %row) }
	{"us-107_mm_m2"					requires 	"us-81_mm_m1"						costs 3 position (+ 5 %column) (+ 16 %row) }
	{"us-m4halftrack" 					requires 	"us-107_mm_m2"						costs 1 position (+ 7 %column) (+ 16 %row) }
	{"us-cckw353_2xt27" 				requires 	"us-m4halftrack"					costs 5 position (+ 8 %column) (+ 17 %row) }	

; ---AA---
	;---->
	{"us-0_5cal_maxson"				requires	""								costs 1 position (+ 0 %column) (+ 17 %row) }
	{"us-40_mm_m1"						requires	"us-0_5cal_maxson"					costs 2 position (+ 2 %column) (+ 17 %row) }
	{"us-m15a1" 						requires 	"us-40_mm_m1"						costs 1 position (+ 4 %column) (+ 17 %row) }
	{"us-90_mm_m1"						requires	"us-40_mm_m1"						costs 7 position (+ 6 %column) (+ 17 %row) }

; ---AT Guns---
	;---->
	{"us-37_mm_m3"						requires	""								costs 1 position (+ 0 %column) (+ 18 %row) }
	{"us-57_mm_m18"					requires	"us-37_mm_m3"						costs 1 position (+ 1 %column) (+ 19 %row) }
	{"us-75_mm_m1897a4"				requires	"us-37_mm_m3"						costs 2 position (+ 2 %column) (+ 18 %row) }
	{"us-t12gmc"						requires 	"us-75_mm_m1897a4"					costs 2 position (+ 4 %column) (+ 18 %row) }
	{"us-57_mm_m1"						requires	"us-75_mm_m1897a4"					costs 2 position (+ 3 %column) (+ 19 %row) }
	{"us-76_mm_m5"						requires	"us-57_mm_m1"						costs 2 position (+ 5 %column) (+ 19 %row) }
	{"us-76_mm_m5late"					requires	"us-76_mm_m5"						costs 1 position (+ 7 %column) (+ 19 %row) }


; ---Infantry Guns---
	{"us-75_mm_m1"						requires 	"us-75_mm_m1897a4"					costs 2 position (+ 2 %column) (+ 20 %row) }
	{"us-t30hmc"						requires 	"us-75_mm_m1"						costs 1 position (+ 4 %column) (+ 20 %row) }

; ---Artillery---
	{"us-105_mm_m3"					requires	"us-75_mm_m1"						costs 2 position (+ 2 %column) (+ 21 %row) }
	{"us-105_mm_m2a1l"					requires	"us-105_mm_m3"						costs 1 position (+ 4 %column) (+ 21 %row) }
	{"us-t19hmc"						requires 	"us-105_mm_m2a1l"					costs 1 position (+ 2 %column) (+ 22 %row) }
	{"us-m7"							requires 	"us-105_mm_m2a1l"					costs 2 position (+ 7 %column) (+ 21 %row) }
	{"us-155mm_gpf"					requires	"us-105_mm_m2a1l"					costs 4 position (+ 4 %column) (+ 22 %row) }
	{"us-155_mm_m1"					requires	"us-155mm_gpf"					costs 2 position (+ 4 %column) (+ 23 %row) }
	{"us-155_mm_m2"					requires	"us-155_mm_m1"					costs 1 position (+ 5 %column) (+ 23 %row) }
	{"us-m12gmc"						requires 	"us-155mm_gpf"						costs 3 position (+ 6 %column) (+ 22 %row) }
	{"us-203_mm_m115"					requires	"us-155_mm_m2"						costs 8 position (+ 7 %column) (+ 23 %row) }
	{"us-m4a3c"						requires 	"us-155_mm_m2"						costs 5 position (+ 8 %column) (+ 24 %row) }

;---Trucks---
	;---->
	{"us-inf_crate"				requires	""								costs 0 position (+ 0 %column) (+ 25 %row) }
	{"us-cckw352"						requires	"us-inf_crate"					costs 1 position (+ 2 %column) (+ 25 %row) }
	{"us-cckw353_inf"					requires	"us-cckw352"						costs 1 position (+ 3 %column) (+ 24 %row) }
	{"us-cckw353_fuel"					requires	"us-cckw352"						costs 1 position (+ 4 %column) (+ 25 %row) }
	{"us-cckw352_art"					requires	"us-cckw352"						costs 2 position (+ 3 %column) (+ 26 %row) }
	{"us-m3"						requires 	"us-cckw353_inf"					costs 2 position (+ 6 %column) (+ 25 %row) }
	;---->
	{"us-willysmb"						requires	""								costs 0 position (+ 0 %column) (+ 27 %row) }
	{"us-willys50"						requires	"us-willysmb"						costs 1 position (+ 2 %column) (+ 27 %row) }
	{"us-dodgewc55"					requires	"us-willysmb"						costs 2 position (+ 4 %column) (+ 27 %row) }
	{"us-m3a1_scout"					requires 	"us-willysmb"						costs 2 position (+ 6 %column) (+ 27 %row) }

;---Armored Cars---
	;---->
	{"us-m20" 							requires 	""								costs 2 position (+ 1 %column) (+ 28 %row) }
	{"us-m16" 							requires 	"us-m20"							costs 1 position (+ 3 %column) (+ 28 %row) }
	{"us-m8_grayhound_2" 				requires 	"us-m16"							costs 2 position (+ 5 %column) (+ 28 %row) }
	{"us-m8_grayhound" 					requires 	"us-m8_grayhound_2"					costs 1 position (+ 7 %column) (+ 28 %row) }
	

; ---Light Tanks---
	;---->
	{"us-m1a1_car"						requires 	""								costs 1 position (+ 0 %column) (+ 29 %row) }
	{"us-m22"							requires 	"us-m1a1_car"						costs 1 position (+ 2 %column) (+ 29 %row) }
	{"us-m2a4"							requires 	"us-m1a1_car"						costs 1 position (+ 0 %column) (+ 30 %row) }
	{"us-m3_stuart"					requires 	"us-m2a4"							costs 1 position (+ 0 %column) (+ 31 %row) }
	{"us-m5a1"							requires 	"us-m3_stuart"						costs 1 position (+ 2 %column) (+ 30 %row) }
	{"us-m3_satan"						requires 	"us-m5a1"							costs 1 position (+ 4 %column) (+ 29 %row) }
	{"us-m8"							requires 	"us-m5a1"							costs 5 position (+ 4 %column) (+ 31 %row) }
	{"us-lvt4"							requires 	"us-m8"							costs 1 position (+ 6 %column) (+ 31 %row) }
	{"us-m24_chaffee"					requires 	"us-m5a1"							costs 7 position (+ 8 %column) (+ 30 %row) }
	
; ---Medium Tanks---
	{"us-m2_medium"					requires 	"us-m3_stuart"						costs 2 position (+ 2 %column) (+ 32 %row) }
	{"us-m3lee"						requires 	"us-m2_medium"						costs 8 position (+ 2 %column) (+ 33 %row) }
	{"us-m4a1"							requires 	"us-m3lee"							costs 2 position (+ 4 %column) (+ 33 %row) }
	{"us-m4"							requires 	"us-m4a1"							costs 2 position (+ 5 %column) (+ 32 %row) }
	{"us-m4a3_75"						requires 	"us-m4a1"							costs 2 position (+ 5 %column) (+ 34 %row) }
	{"us-m4a3_zippo"					requires 	"us-m4a3_75"						costs 2 position (+ 7 %column) (+ 34 %row) }
	{"us-m4a1_76_w"					requires 	"us-m4a1"							costs 7 position (+ 0 %column) (+ 35 %row) }
	{"us-m4a1e8"						requires 	"us-m4a1_76_w"						costs 1 position (+ 1 %column) (+ 36 %row) }
	{"us-m4a3e8"						requires 	"us-m4a1e8"						costs 1 position (+ 2 %column) (+ 37 %row) }
	{"us-m4a3e8_fury"					requires 	"us-m4a3e8"						costs 1 position (+ 3 %column) (+ 37 %row) }
	{"us-m4a3_105"						requires 	"us-m4a3e8"						costs 2 position (+ 4 %column) (+ 37 %row) }
	{"us-m4a3e2_jumbo"					requires 	"us-m4a3e8"						costs 2 position (+ 4 %column) (+ 38 %row) }
	{"us-m4a3e2_jumbo_76w"				requires 	"us-m4a3e2_jumbo"					costs 3 position (+ 6 %column) (+ 38 %row) }
	
; ---Heavy Tanks---
	{"us-m6"							requires 	"us-m4a3_75"						costs 8 position (+ 7 %column) (+ 35 %row) }
	{"us-m26_pershing"					requires 	"us-m4a3e2_jumbo_76w"				costs 5 position (+ 6 %column) (+ 40 %row) }
	{"us-t26e2"							requires 	"us-m26_pershing"					costs 2 position (+ 7 %column) (+ 39 %row) }
	{"us-m26_veteran"					requires 	"us-m26_pershing"					costs 2 position (+ 7 %column) (+ 41 %row) }
	{"us-m26e4_pershing"				requires 	"us-m26_pershing"					costs 2 position (+ 8 %column) (+ 40 %row) }
	{"us-t26e4"							requires 	"us-m26e4_pershing"					costs 2 position (+ 8 %column) (+ 42 %row) }

; ---Self Propelled Guns---
	{"us-m10wolverine"					requires 	"us-m4a1"							costs 7 position (+ 4 %column) (+ 42 %row) }
	{"us-m18"							requires 	"us-m10wolverine"					costs 1 position (+ 5 %column) (+ 43 %row) }
	{"us-m18_90"						requires 	"us-m18"							costs 6 position (+ 5 %column) (+ 44 %row) }
	{"us-m36b1"						requires 	"us-m18_90"						costs 2 position (+ 6 %column) (+ 44 %row) }
	{"us-m36gmc"						requires 	"us-m36b1"							costs 1 position (+ 8 %column) (+ 44 %row) }
	{"us-m36b2"						requires 	"us-m36gmc"						costs 1 position (+ 8 %column) (+ 45 %row) }
)