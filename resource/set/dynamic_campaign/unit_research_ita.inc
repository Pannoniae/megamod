(define "research_ita"

;---SQUADS---
;---->
{"single_officer(ita)"			requires	""						costs 1	position (+ 0 %column) (+ 2 %row) }
{"single_sniper(ita)"			requires	"single_officer(ita)"	costs 1	position (+ 2 %column) (+ 2 %row) }
{"mechanized_infantry_ita"		requires	"single_officer(ita)"	costs 2	position (+ 4 %column) (+ 2 %row) }
{"ab40_com"						requires	"mechanized_infantry_ita"	costs 2	position (+ 6 %column) (+ 2 %row) }


;//---Off Map Support---
{"obice_10017_smoke_barrage"		requires	"single_officer(ita)"				costs 1 position (+ 1 %column) (+ 4 %row) }
{"81mm_brandt_ita_mortar_barrage"	requires	"obice_10017_smoke_barrage"			costs 1 position (+ 3 %column) (+ 4 %row) }
{"obice_10017_artillery_barrage"	requires	"81mm_brandt_ita_mortar_barrage"	costs 1 position (+ 5 %column) (+ 4 %row) }
{"obice_14912_artillery_barrage"	requires	"ab40_com"							costs 1 position (+ 8 %column) (+ 4 %row) }
	
{"conquest_fi156_ita"			requires	"single_officer(ita)"	costs 1 position (+ 0 %column) (+ 5 %row) }
{"conquest_sm79_50"				requires	"conquest_fi156_ita"	costs 1 position (+ 4 %column) (+ 5 %row) }
{"conquest_sm79"				requires	"conquest_sm79_50"		costs 1 position (+ 6 %column) (+ 5 %row) }

 
;---->
{"single_auxiliary(ita)"		requires	"" 						costs 0	position (+ 0 %column) (+ 7 %row) }
{"single_medic(ita)"			requires	"single_auxiliary(ita)"	costs 1	position (+ 1 %column) (+ 6 %row) }
{"squad_light(ita)"				requires	"single_auxiliary(ita)"	costs 1	position (+ 1 %column) (+ 8 %row) }
{"squad_regular(ita)"  			requires	"squad_light(ita)"		costs 2	position (+ 2 %column) (+ 7 %row) }
{"squad_elite(ita)"   			requires	"squad_regular(ita)" 	costs 2	position (+ 4 %column) (+ 6 %row) }
{"squad_pionier(ita)"   		requires	"squad_elite(ita)" 		costs 1	position (+ 6 %column) (+ 6 %row) }
{"squad_scout(ita)"				requires	"squad_regular(ita)" 	costs 2	position (+ 3 %column) (+ 8 %row) }
{"squad_stormtrooper(ita)"		requires	"squad_regular(ita)" 	costs 2	position (+ 7 %column) (+ 7 %row) }
{"squad_nembo_para(ita)"		requires	"squad_pionier(ita)" 	costs 2	position (+ 8 %column) (+ 6 %row) }
{"squad_regular_late(ita)"		requires	"squad_scout(ita)" 		costs 1	position (+ 5 %column) (+ 8 %row) }
{"squad_gnr(ita)"			requires	"squad_regular_late(ita)" 	costs 1	position (+ 6 %column) (+ 9 %row) }
{"squad_stormtrooper_late(ita)"	requires	"squad_gnr(ita)" 		costs 2	position (+ 7 %column) (+ 10 %row) }
{"squad_commando_late(ita)"		requires	"squad_gnr(ita)" 		costs 2	position (+ 8 %column) (+ 11 %row) }
 
;---->
{"single_atrifle(ita)"  		requires	"" 						costs 1	position (+ 0 %column) (+ 9 %row) }
{"single_at(ita)"  				requires	"single_atrifle(ita)"	costs 1	position (+ 2 %column) (+ 9 %row) }
{"2cm_solothurn" 				requires	"single_atrifle(ita)"	costs 1	position (+ 4 %column) (+ 9 %row) }
 
 
;---->
{"single_engineer(ita)"			requires	"" 						costs 1	position (+ 0 %column) (+ 11 %row) }
{"single_ap_miner(ita)"			requires	"single_engineer(ita)" 	costs 1	position (+ 1 %column) (+ 10 %row) }
{"single_at_miner(ita)"			requires	"single_ap_miner(ita)"	costs 1	position (+ 3 %column) (+ 10 %row) }
{"single_flamer(ita)"			requires	"single_engineer(ita)"	costs 1 position (+ 2 %column) (+ 11 %row) }
{"fiat626_eng"					requires	"single_engineer(ita)" 	costs 2	position (+ 1 %column) (+ 12 %row) }
{"breda_61t"					requires	"fiat626_eng"  			costs 2	position (+ 3 %column) (+ 12 %row) }
 
; ---MG---
{"single_mg(ita)"   			requires	""						costs 1	position (+ 0 %column) (+ 13 %row) }
{"8mm_breda_37"					requires	"single_mg(ita)"		costs 1	position (+ 2 %column) (+ 13 %row) }
{"8mm_fiat_revelli_m1914_35"	requires	"8mm_breda_37"			costs 1	position (+ 4 %column) (+ 13 %row) }
{"8mm_breda_37_aa"				requires	"8mm_fiat_revelli_m1914_35"	costs 1	position (+ 6 %column) (+ 13 %row) }
 
; ---AA---
{"cannone_2065"					requires	""						costs 1	position (+ 1 %column) (+ 14 %row) }
{"m15_contraereo"				requires	"cannone_2065"			costs 4	position (+ 3 %column) (+ 14 %row) }
{"cannone_9053"					requires	"m15_contraereo"		costs 5	position (+ 5 %column) (+ 14 %row) }
{"3ro" 							requires	"cannone_9053"			costs 2	position (+ 7 %column) (+ 14 %row) }
 
; ---AT Guns---
 
{"cannone_4732"					requires	"" 						costs 1	position (+ 0 %column) (+ 16 %row) }
{"cannone_7527"					requires	"cannone_4732"   		costs 2	position (+ 2 %column) (+ 17 %row) }
{"7_5cm_pak97_38"				requires	"cannone_4732" 			costs 3	position (+ 2 %column) (+ 15 %row) }
{"cannone_7543"					requires	"7_5cm_pak97_38"		costs 6	position (+ 4 %column) (+ 15 %row) }
{"cannone_8855"  				requires	"cannone_7543"			costs 4	position (+ 6 %column) (+ 15 %row) }
{"cannone_10528"				requires	"cannone_7527" 			costs 6	position (+ 7 %column) (+ 16 %row) }
 
; ---Infantry Guns---
{"81mm_brandt_ita"   			requires	""						costs 2	position (+ 0 %column) (+ 18 %row) }
{"obice_7513" 					requires	"cannone_7527" 			costs 2	position (+ 4 %column) (+ 17 %row) }
{"m7518"  						requires	"obice_7513"   			costs 3	position (+ 6 %column) (+ 17 %row) }
 
; ---Artillery---
{"obice_10017"					requires	"obice_7513"   			costs 6	position (+ 6 %column) (+ 19 %row) }
{"autocannone10017" 			requires	"obice_10017"			costs 2	position (+ 7 %column) (+ 18 %row) }
{"obice_14912"					requires	"obice_10017" 			costs 2	position (+ 7 %column) (+ 20 %row) }
{"obice_210"   					requires	"obice_10017"			costs 6	position (+ 8 %column) (+ 19 %row) }
 
;---Trucks---	
{"inf_crate_ita"				requires	""								costs 0 position (+ 0 %column) (+ 20 %row) }
{"fiat626"						requires	"inf_crate_ita"					costs 1 position (+ 2 %column) (+ 20 %row) }
{"lancia"						requires	"fiat626"						costs 1 position (+ 4 %column) (+ 20 %row) }
{"fiat626_fuel"					requires	"fiat626"						costs 1 position (+ 3 %column) (+ 19 %row) }
{"fiat626_art"					requires	"fiat626"						costs 2 position (+ 3 %column) (+ 21 %row) }
 
;---Armored Cars---
{"as42"							requires	""						costs 1	position (+ 1 %column) (+ 22 %row) }
{"ab40"							requires	"as42"					costs 1	position (+ 3 %column) (+ 22 %row) }
{"ab41"							requires	"ab40"					costs 3	position (+ 5 %column) (+ 22 %row) }
{"ab43"							requires	"ab41"					costs 2	position (+ 6 %column) (+ 23 %row) } 
 
; ---Light Tanks---
{"fiat3000"						requires	""						costs 1	position (+ 0 %column) (+ 23 %row) }
{"cv35"							requires	"fiat3000"				costs 1	position (+ 0 %column) (+ 24 %row) }
{"cv35cc"						requires	"cv35"					costs 1	position (+ 2 %column) (+ 24 %row) }
{"l640"							requires	"cv35cc"				costs 1	position (+ 2 %column) (+ 25 %row) }
{"l640fl"						requires	"l640"					costs 1	position (+ 4 %column) (+ 24 %row) }
{"m4732"						requires	"l640"					costs 1	position (+ 5 %column) (+ 25 %row) }
{"m1139"						requires	"l640"					costs 2	position (+ 2 %column) (+ 26 %row) }
 
; ---Medium Tanks---
{"m1340"						requires	"m1139"					costs 2	position (+ 3 %column) (+ 27 %row) }
{"m1441"						requires	"m1340"					costs 1	position (+ 4 %column) (+ 26 %row) }
{"m1542"						requires	"m1441"					costs 2	position (+ 6 %column) (+ 26 %row) }
{"m7534"						requires	"m1542"					costs 2	position (+ 8 %column) (+ 26 %row) }
{"m10525"						requires	"m7534"					costs 4	position (+ 8 %column) (+ 27 %row) }
{"m7546"						requires	"m10525"				costs 1	position (+ 8 %column) (+ 28 %row) }
{"p2640_18"						requires	"m1542"					costs 6	position (+ 7 %column) (+ 29 %row) }
{"p2640"						requires	"p2640_18"				costs 2	position (+ 8 %column) (+ 30 %row) }
   
{"pz3n_ita"						requires	"m1542"   				costs 7	position (+ 6 %column) (+ 32 %row) }
{"pz4g_ita"						requires	"pz3n_ita"				costs 4	position (+ 8 %column) (+ 31 %row) }
{"stug3g_ita"					requires	"pz3n_ita"				costs 5	position (+ 8 %column) (+ 33 %row) }
{"pz5d_ita"						requires	"stug3g_ita"			costs 4	position (+ 8 %column) (+ 35 %row) }
 
; ---Heavy Tanks---
 )