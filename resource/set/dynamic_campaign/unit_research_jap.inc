(define "research_jap"
	;---->
	{"single_officer(jap)"			requires	""								costs 1 position (+ 0 %column) (+ 3 %row) }
	{"single_sniper(jap)"			requires	"single_officer(jap)"			costs 1 position (+ 2 %column) (+ 3 %row) }
	{"mechanized_infantry_jap"		requires 	"single_officer(jap)"			costs 2 position (+ 1 %column) (+ 2 %row) }
	{"type87_com"					requires	"mechanized_infantry_jap"		costs 2 position (+ 3 %column) (+ 2 %row) }


;//---Off Map Support---
	{"105mm_type_91_smoke_barrage"		requires	"single_officer(jap)"				costs 1 position (+ 1 %column) (+ 4 %row) }
	{"81mm_brandt_jap_mortar_barrage"	requires	"105mm_type_91_smoke_barrage"		costs 1 position (+ 3 %column) (+ 4 %row) }
	{"105mm_type_91_artillery_barrage"	requires	"81mm_brandt_jap_mortar_barrage"	costs 1 position (+ 5 %column) (+ 4 %row) }
	{"150mm_type_97_mortar_barrage"		requires	"type87_com"						costs 1 position (+ 8 %column) (+ 2 %row) }
	{"150mm_type_96_artillery_barrage"	requires	"type87_com"						costs 1 position (+ 7 %column) (+ 3 %row) }
	
	{"conquest_ki76"					requires	"single_officer(jap)"				costs 1 position (+ 0 %column) (+ 5 %row) }
	{"conquest_d3a_aichi_50"			requires	"conquest_ki76"						costs 1 position (+ 4 %column) (+ 5 %row) }
	{"conquest_d3a_aichi"				requires	"conquest_d3a_aichi_50"				costs 1 position (+ 6 %column) (+ 5 %row) }
	

; ---SQUADS---
	;---->
	{"single_auxiliary(jap)"		requires	""								costs 0  position (+ 0 %column) (+ 7 %row) }
	{"single_medic(jap)"			requires	"single_auxiliary(jap)"			costs 1  position (+ 2 %column) (+ 6 %row) }
	{"squad_light(jap)"				requires	"single_auxiliary(jap)"			costs 1  position (+ 2 %column) (+ 7 %row) }
	{"squad_regular(jap)"			requires	"squad_light(jap)"				costs 2  position (+ 4 %column) (+ 7 %row) }
	{"squad_regular_heavy(jap)"		requires	"squad_regular(jap)"			costs 1  position (+ 6 %column) (+ 7 %row) }
	{"squad_pionier(jap)"			requires	"squad_regular_heavy(jap)"		costs 2  position (+ 5 %column) (+ 6 %row) }
	{"squad_scout(jap)"				requires	"squad_pionier(jap)"			costs 1  position (+ 7 %column) (+ 6 %row) }
	{"squad_imperialguard(jap)"		requires	"squad_scout(jap)"				costs 1  position (+ 8 %column) (+ 5 %row) }
	{"squad_stormtrooper(jap)"		requires	"squad_regular(jap)"			costs 2  position (+ 5 %column) (+ 8 %row) }
	{"squad_snlf_elite(jap)"		requires	"squad_stormtrooper(jap)"		costs 2  position (+ 7 %column) (+ 8 %row) }
	{"squad_kamikaze(jap)" 			requires	"squad_regular_heavy(jap)"		costs 5  position (+ 8 %column) (+ 7 %row) }
	{"squad_shanghai(jap)"			requires	"squad_stormtrooper(jap)"		costs 0  position (+ 6 %column) (+ 9 %row) }
	
	
	;---->
	
	{"single_riflegrenade(jap)"		requires	""								costs 1 position (+ 0 %column) (+ 8 %row) }
	{"single_at(jap)"				requires	"single_riflegrenade(jap)"		costs 1 position (+ 2 %column) (+ 8 %row) }
	
	;---->
	{"single_engineer(jap)"			requires	""								costs 1 position (+ 0 %column) (+ 10 %row) }
	{"single_ap_miner(jap)"			requires	"single_engineer(jap)"			costs 1 position (+ 1 %column) (+ 9 %row) }
	{"single_at_miner(jap)"			requires	"single_ap_miner(jap)"			costs 1 position (+ 3 %column) (+ 9 %row) }
	{"single_flamer(jap)"			requires	"single_engineer(jap)"			costs 1 position (+ 2 %column) (+ 10 %row) }
	{"type94eng"					requires	"single_engineer(jap)"			costs 2 position (+ 1 %column) (+ 11 %row) }
	{"type97_eng"					requires	"type94eng"						costs 2 position (+ 4 %column) (+ 11 %row) }
	{"single_engineer_arty(jap)"	requires	"single_flamer(jap)"			costs 11 position (+ 5 %column) (+ 10 %row) }

; ---MG---
	{"single_mg(jap)"				requires	""								costs 1 position (+ 1 %column) (+ 12 %row) }
	{"type92_stan"					requires 	"single_mg(jap)"				costs 1 position (+ 3 %column) (+ 12 %row) }
	{"7_7mm_type92_lewis"			requires 	"type92_stan"					costs 1 position (+ 5 %column) (+ 12 %row) }
	{"type97_sidecar"				requires 	"7_7mm_type92_lewis"			costs 2 position (+ 6 %column) (+ 11 %row) }
	{"13mm_type_93"					requires 	"7_7mm_type92_lewis"			costs 1 position (+ 7 %column) (+ 12 %row) }
	{"type95"						requires 	"13mm_type_93"					costs 2 position (+ 8 %column) (+ 11 %row) }

; ---Mortars---
	{"single_mortar(jap)"			requires	""								costs 1 position (+ 0 %column) (+ 13 %row) }
	{"81mm_brandt_jap"				requires 	"single_mortar(jap)"			costs 1 position (+ 2 %column) (+ 13 %row) }
	{"150mm_type_97"				requires 	"81mm_brandt_jap"				costs 3 position (+ 4 %column) (+ 13 %row) }
	{"200mm_type_4"					requires	"150mm_type_97"					costs 2 position (+ 6 %column) (+ 13 %row) }
	{"toyota_rocket"				requires	"200mm_type_4"					costs 3 position (+ 8 %column) (+ 13 %row) }

; ---AA---
	{"20mm_type_98"					requires	""								costs 1 position (+ 0 %column) (+ 14 %row) }
	{"20mm_type_2"					requires	"20mm_type_98"					costs 1 position (+ 1 %column) (+ 14 %row) }
	{"75mm_type_88"					requires	"20mm_type_2"					costs 3 position (+ 3 %column) (+ 15 %row) }
	{"type94aa" 					requires 	"20mm_type_2"					costs 3 position (+ 3 %column) (+ 14 %row) }
	{"75mm_type_4"					requires	"75mm_type_88"					costs 3 position (+ 6 %column) (+ 14 %row) }
	{"88mm_type_99"					requires	"75mm_type_88"					costs 3 position (+ 5 %column) (+ 15 %row) }
	{"ijn_12cm_spg"					requires	"88mm_type_99"					costs 3 position (+ 7 %column) (+ 15 %row) }

; ---AT Guns---
	{"20mm_type_97"					requires	""								costs 1 position (+ 0 %column) (+ 16 %row) }
	{"37mm_type_11"					requires	"20mm_type_97"					costs 1 position (+ 1 %column) (+ 17 %row) }
	{"37mm_type_94"					requires	"20mm_type_97"					costs 1 position (+ 2 %column) (+ 16 %row) }
	{"47mm_type_1"					requires	"37mm_type_94"					costs 1 position (+ 4 %column) (+ 16 %row) }
	{"57mm_type_2"					requires	"47mm_type_1"					costs 1 position (+ 5 %column) (+ 17 %row) }
	{"75mm_type_90"					requires	"47mm_type_1"					costs 2 position (+ 6 %column) (+ 16 %row) }
	{"type1_ho-ni1"					requires 	"75mm_type_90"					costs 5 position (+ 8 %column) (+ 16 %row) }


; ---Infantry Guns---
	{"70mm_type_92"					requires 	"37mm_type_94"					costs 2 position (+ 3 %column) (+ 17 %row) }	
	{"75mm_type_41"					requires 	"70mm_type_92"					costs 1 position (+ 4 %column) (+ 18 %row) }

; ---Artillery---
	{"105mm_type_91"				requires	"75mm_type_41"					costs 2 position (+ 6 %column) (+ 19 %row) }
	{"type1_ho-ni2"					requires 	"105mm_type_91"					costs 6 position (+ 8 %column) (+ 19 %row) }
	{"120mm_type_38"				requires	"105mm_type_91"					costs 2 position (+ 5 %column) (+ 20 %row) }
	{"105mm_type_92"				requires	"120mm_type_38"					costs 2 position (+ 6 %column) (+ 21 %row) }
	{"150mm_type_96"				requires	"105mm_type_92"					costs 2 position (+ 7 %column) (+ 22 %row) }
	{"type4_ho-ro"					requires 	"150mm_type_96"					costs 6 position (+ 8 %column) (+ 21 %row) }
	{"type4_ha-to"					requires	"150mm_type_96"					costs 7 position (+ 8 %column) (+ 23 %row) }
	
;---Trucks---	
	{"inf_crate_jap"				requires	""								costs 0 position (+ 0 %column) (+ 22 %row) }
	{"type94"						requires	"inf_crate_jap"					costs 1 position (+ 2 %column) (+ 22 %row) }
	{"type94inf"					requires	"type94"						costs 1 position (+ 2 %column) (+ 21 %row) }
	{"type94_fuel"					requires	"type94"						costs 1 position (+ 4 %column) (+ 22 %row) }
	{"type94art"					requires	"type94"						costs 2 position (+ 2 %column) (+ 23 %row) }
	{"type1_ho-ki"					requires	"type94inf"						costs 1 position (+ 3 %column) (+ 20 %row) }
	
;---Armored Cars---
	
	{"type87"						requires 	""								costs 1 position (+ 1 %column) (+ 24 %row) }
	{"type1_ho-ki_mg"				requires 	"type87"						costs 1 position (+ 3 %column) (+ 24 %row) }
	{"type1_ho-ha"					requires 	"type1_ho-ki_mg"				costs 4 position (+ 4 %column) (+ 23 %row) }
	{"type93" 						requires 	"type87"						costs 1 position (+ 5 %column) (+ 24 %row) }
	{"type94_te-ke"					requires 	"type93"						costs 1 position (+ 7 %column) (+ 24 %row) }

; ---Light Tanks---
	{"renault_otsu"					requires 	" "								costs 1 position (+ 0 %column) (+ 25 %row) }
	{"type89_chi-ro"				requires 	"renault_otsu"					costs 6 position (+ 4 %column) (+ 25 %row) }
	{"type89_i-go"					requires 	"type89_chi-ro"					costs 1 position (+ 6 %column) (+ 25 %row) }
	{"type91_heavy"					requires 	"type89_i-go"					costs 2 position (+ 8 %column) (+ 25 %row) }
	{"type95_ro-go"					requires 	"type91_heavy"					costs 3 position (+ 8 %column) (+ 26 %row) }
	{"type97_te-ke"					requires 	"renault_otsu"					costs 1 position (+ 1 %column) (+ 26 %row) }
	{"type95_ha-go"					requires 	"type97_te-ke"					costs 1 position (+ 3 %column) (+ 26 %row) }
	{"type4_ke-nu"					requires 	"type95_ha-go"					costs 3 position (+ 5 %column) (+ 26 %row) }
	
; ---Medium Tanks---
	{"type97_chi-ha"				requires 	"type95_ha-go"					costs 3 position (+ 0 %column) (+ 27 %row) }
	{"type97_shi-ki"				requires 	"type97_chi-ha"					costs 0 position (+ 2 %column) (+ 27 %row) }
	{"type1_ho-i"					requires 	"type97_chi-ha"					costs 6 position (+ 4 %column) (+ 27 %row) }
	{"type2_ho-i"					requires 	"type1_ho-i"					costs 2 position (+ 6 %column) (+ 27 %row) }
	{"type2_ho-i_kou"				requires 	"type2_ho-i"					costs 2 position (+ 8 %column) (+ 27 %row) }
	{"type97_shinhoto_47mm"			requires 	"type97_chi-ha"					costs 1 position (+ 1 %column) (+ 28 %row) }
	{"type97_shinhoto_120mm"		requires 	"type97_shinhoto_47mm"			costs 7 position (+ 3 %column) (+ 28 %row) }
	{"type1_chi-he"					requires 	"type97_shinhoto_47mm"			costs 2 position (+ 2 %column) (+ 29 %row) }
	{"type3_chi-nu"					requires 	"type1_chi-he"					costs 5 position (+ 4 %column) (+ 29 %row) }
	{"type3_chi-nu2"				requires 	"type3_chi-nu"					costs 3 position (+ 6 %column) (+ 30 %row) }
	
; ---Heavy Tanks---
	{"type5_chi-ri"					requires 	"type3_chi-nu2"					costs 8 position (+ 8 %column) (+ 31 %row) }
)