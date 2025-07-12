(define "research_rus"

;//---Off Map Support---
	{"conquest_po2"						requires	"single_officer(rus)"				costs 1  position (+ 0 %column) (+ 4 %row) }
	{"conquest_yak1"					requires	"squad_officer_con(rus)"			costs 1  position (+ 2 %column) (+ 4 %row) }
	{"conquest_il2"						requires	"squad_officer_gaz_con"				costs 1  position (+ 4 %column) (+ 4 %row) }


	{"122mm_m1910_smoke_barrage"		requires	"single_officer(rus)"				costs 1  position (+ 0 %column) (+ 3 %row) }

	{"82mm_bm37_mortar_barrage"			requires	"squad_officer_con(rus)"			costs 1  position (+ 2 %column) (+ 3 %row) }
	{"122mm_m1910_artillery_barrage"	requires	"squad_officer_gaz_con"				costs 1  position (+ 4 %column) (+ 3 %row) }
	
	{"120mm_pm38_mortar_barrage"		requires	"ba20_command"						costs 1  position (+ 6 %column) (+ 3 %row) }
	{"152mm_ml20_artillery_barrage"		requires	"ba20_command"						costs 1  position (+ 7 %column) (+ 3 %row) }


;TOTAL:


;//---SQUADS---
;//	{"single_officer(rus)"				requires	""									costs 1  position (+ 0 %column) (+ 2 %row) }
	{"squad_officer_con(rus)"			requires	"single_officer(rus)"				costs 2  position (+ 2 %column) (+ 2 %row) }
	{"squad_officer_gaz_con"			requires	"squad_officer_con(rus)"			costs 5  position (+ 4 %column) (+ 2 %row) }
	{"ba20_command"						requires	"squad_officer_gaz_con"				costs 8  position (+ 6 %column) (+ 2 %row) }

	{"single_engineer(rus)"				requires	""									costs 2  position (+ 0 %column) (+ 11 %row) }
	{"single_ap_miner(rus)"				requires	"single_engineer(rus)"				costs 0  position (+ 1 %column) (+ 11 %row) }
	{"single_at_miner(rus)"				requires	"single_ap_miner(rus)"				costs 0  position (+ 2 %column) (+ 11 %row) }
	{"single_flamer(rus)"				requires	"single_at_miner(rus)"				costs 0  position (+ 3 %column) (+ 11 %row) }

	{"single_sniper(rus)"				requires	"squad_rifleunit_alt_con(rus)"		costs 1  position (+ 3 %column) (+ 16 %row) }
	{"single_at(rus)"					requires	""									costs 0  position (+ 0 %column) (+ 6 %row) }
	{"single_riflegrenade(rus)"			requires	"single_at(rus)"					costs 1  position (+ 1 %column) (+ 7 %row) }
	{"single_at2(rus)"					requires	"single_at(rus)"					costs 1  position (+ 2 %column) (+ 6 %row) }
	{"single_at_pzs_late_con(rus)"		requires	"single_at2(rus) reinforcement_stage_4"	costs 5  position (+ 5 %column) (+ 6 %row) }
	{"single_at_late_con(rus)"			requires	"single_at_pzs_late_con(rus)"		costs 2  position (+ 7 %column) (+ 6 %row) }

	{"squad_rifleunit_alt_con(rus)"		requires	"squad_conscripts_con(rus)"			costs 1  position (+ 2 %column) (+ 17 %row) }
	{"squad_rifleunit_con(rus)"			requires	"squad_rifleunit_alt_con(rus)"		costs 2  position (+ 4 %column) (+ 17 %row) }
	{"squad_recon_con(rus)"				requires	"squad_rifleunit_alt_con(rus)"		costs 1  position (+ 2 %column) (+ 19 %row) }
	{"squad_recon_44_con(rus)"			requires	"squad_recon_con(rus) squad_rifle_44_con(rus)"	costs 1  position (+ 9 %column) (+ 19 %row) }
	{"squad_sapper_con(rus)"			requires	"squad_rifleunit_alt_con(rus)"		costs 1  position (+ 3 %column) (+ 18 %row) }
	{"squad_sapper_44_con(rus)"			requires	"squad_sapper_con(rus) squad_rifle_44_con(rus)"	costs 1  position (+ 10 %column) (+ 18 %row) }
	{"squad_at_rifle_con(rus)"			requires	"squad_rifleunit_con(rus)"			costs 1  position (+ 5 %column) (+ 16 %row) }
	{"squad_rifle_43_con(rus)"			requires	"squad_rifleunit_con(rus)"			costs 2  position (+ 6 %column) (+ 17 %row) }
	{"squad_rifle_43_heavy_con(rus)"	requires	"squad_rifle_43_con(rus)"			costs 2  position (+ 7 %column) (+ 17 %row) }
	{"squad_rifle_44_con(rus)"			requires	"squad_rifle_43_heavy_con(rus)"		costs 2  position (+ 9 %column) (+ 17 %row) }
	{"squad_smg_con(rus)"				requires	"squad_rifleunit_con(rus)"			costs 2  position (+ 4 %column) (+ 14 %row) }
	{"squad_smg_mg_43_con(rus)"			requires	"squad_smg_con(rus) squad_rifle_43_con(rus)"		costs 2  position (+ 6 %column) (+ 14 %row) }
	{"squad_smg_mg_43_heavy_con(rus)"	requires	"squad_smg_mg_43_con(rus)"			costs 2  position (+ 6 %column) (+ 13 %row) }
	{"squad_smg_mg_44_con(rus)"			requires	"squad_smg_mg_43_con(rus) squad_rifle_44_con(rus)"	costs 2  position (+ 9 %column) (+ 14 %row) }
	{"squad_rifle_motorised_con"		requires	"squad_rifleunit_con(rus) zis5"		costs 1  position (+ 4 %column) (+ 15 %row) }
	{"squad_mountainrifles_con(rus)"	requires	"squad_rifleunit_con(rus)"			costs 3  position (+ 4 %column) (+ 20 %row) }
	{"squad_cav_44_con(rus)"			requires	"squad_mountainrifles_con(rus)"		costs 3  position (+ 6 %column) (+ 20 %row) }
	{"squad_guards_cav_44_con(rus)"		requires	"squad_cav_44_con(rus)"				costs 2  position (+ 8 %column) (+ 20 %row) }
	{"squad_mountain_cav_44_con(rus)"	requires	"squad_guards_cav_44_con(rus)"		costs 2  position (+ 10 %column) (+ 20 %row) }

	{"squad_paras_con(rus)"				requires	""									costs 8  position (+ 13 %column) (+ 17 %row) }
	{"squad_guards_paras_con(rus)"		requires	"squad_paras_con(rus) squad_guardsrifle_44_con(rus)"	costs 2  position (+ 13 %column) (+ 16 %row) }
	{"squad_spetsnaz(rus)"				requires	"squad_guards_smg_con(rus)"			costs 2  position (+ 8 %column) (+ 12 %row) }
	
	{"squad_marines_reg_con(rus)"		requires	"squad_rifleunit_alt_con(rus)"		costs 5  position (+ 2 %column) (+ 12 %row) }
	{"squad_guards_marines_44_con(rus)"	requires	"squad_marines_reg_con(rus) squad_guardsrifle_con(rus)"	costs 1  position (+ 7 %column) (+ 12 %row) }
	{"squad_marines_con(rus)"			requires	"squad_marines_reg_con(rus)"		costs 5  position (+ 3 %column) (+ 13 %row) }

	{"squad_guardsrifle_con(rus)"		requires	"squad_rifle_43_con(rus)"			costs 3  position (+ 7 %column) (+ 16 %row) }
	{"squad_guards_smg_con(rus)"		requires	"squad_guardsrifle_con(rus) squad_smg_mg_43_con(rus)"	costs 3  position (+ 7 %column) (+ 13 %row) }
	{"squad_guardsrifle_motorised_con"	requires	"squad_guardsrifle_con(rus) squad_rifle_motorised_con"	costs 1  position (+ 8 %column) (+ 15 %row) }
	{"squad_guardsrifle_44_con(rus)"	requires	"squad_guardsrifle_con(rus) squad_rifle_44_con(rus)"	costs 3  position (+ 10 %column) (+ 16 %row) }
	{"squad_guardsrifle_44_motor_con(rus)"requires	"squad_guardsrifle_44_con(rus) squad_guardsrifle_motorised_con"	costs 3  position (+ 11 %column) (+ 15 %row) }
	{"squad_guards_smg_mg_44_con(rus)"	requires	"squad_guardsrifle_44_con(rus) squad_guards_smg_con(rus) squad_smg_mg_44_con(rus)"	costs 3  position (+ 10 %column) (+ 13 %row) }
	{"squad_guards_smg_mg_44_motor_con(rus)"requires"squad_guards_smg_mg_44_con(rus) squad_guardsrifle_44_motor_con(rus)"	costs 3  position (+ 11 %column) (+ 12 %row) }
	{"squad_elite_guardsrifle_44_motor_con(rus)"requires"squad_guardsrifle_44_motor_con(rus)"	costs 2  position (+ 12 %column) (+ 15 %row) }
	{"squad_elite_guards_smg_mg_44_motor_con(rus)"requires"squad_guards_smg_mg_44_motor_con(rus)"	costs 2  position (+ 12 %column) (+ 12 %row) }

	{"squad_assaultsappers_con(rus)"	requires	"squad_guards_smg_mg_44_con(rus)"	costs 3  position (+ 12 %column) (+ 13 %row) }
	{"squad_assaultsappers_flame_con(rus)"	requires	"squad_assaultsappers_con(rus)"	costs 1  position (+ 13 %column) (+ 13 %row) }
	{"squad_assaultsappers_at_con(rus)"	requires	"squad_assaultsappers_flame_con(rus)"	costs 1  position (+ 14 %column) (+ 13 %row) }

	{"squad_partisan_con(rus)"			requires	""									costs 1  position (+ 11 %column) (+ 18 %row) }
	{"squad_vet_partisan_rifle_late_con(rus)"requires	"squad_partisan_con(rus) squad_rifle_44_con(rus)"	costs 0  position (+ 11 %column) (+ 17 %row) }
	{"squad_vet_partisan_smg_late_con(rus)"requires	"squad_vet_partisan_rifle_late_con(rus)"	costs 0  position (+ 12 %column) (+ 17 %row) }
	{"squad_conscripts_con(rus)"		requires	""									costs 0  position (+ 1 %column) (+ 17 %row) }
	{"squad_border(rus)"				requires	""									costs 0  position (+ 0 %column) (+ 17 %row) }
	{"squad_penal_con(rus)"				requires	"squad_border(rus)"					costs 1  position (+ 0 %column) (+ 16 %row) }
	{"squad_nkvd_rifle_con(rus)"		requires	"squad_penal_con(rus)"				costs 1  position (+ 0 %column) (+ 15 %row) }
	{"squad_nkvd_recon_con(rus)"		requires	"squad_nkvd_rifle_con(rus)"			costs 1  position (+ 1 %column) (+ 16 %row) }
	{"squad_nkvd_sapper_con(rus)"		requires	"squad_nkvd_rifle_con(rus)"			costs 1  position (+ 1 %column) (+ 14 %row) }
	{"squad_nkvd_at_rifle_con(rus)"		requires	"squad_nkvd_rifle_con(rus)"			costs 1  position (+ 1 %column) (+ 15 %row) }
	{"squad_nkvd_mountain_con(rus)"		requires	"squad_nkvd_rifle_con(rus)"			costs 4  position (+ 0 %column) (+ 13 %row) }
	{"squad_nkvd_mountain_cav_con(rus)"	requires	"squad_nkvd_mountain_con(rus)"		costs 4  position (+ 1 %column) (+ 12 %row) }
;TOTAL:


;//---MG---
	{"maxim"			requires	""					costs 1  position (+ 0 %column) (+ 21 %row) }
	{"ds39_stand"		requires	"maxim"				costs 1  position (+ 1 %column) (+ 21 %row) }
	{"sg43_stand"		requires	"ds39_stand"		costs 1  position (+ 2 %column) (+ 21 %row) }
	{"dshk_stan"		requires	"dshk_aa"			costs 0  position (+ 1 %column) (+ 26 %row) }


;//---Mortar---
	{"82mm_bm37"		requires	""					costs 2 position (+ 4 %column) (+ 21 %row) }
	{"m41_ampulomet"	requires	"82mm_bm37"			costs 1  position (+ 5 %column) (+ 22 %row) }
	{"120mm_pm38"		requires	"82mm_bm37"			costs 4  position (+ 7 %column) (+ 21 %row) }

;//---AA---
	{"dshk_aa"		requires	""						costs 1  position (+ 0 %column) (+ 25 %row) }
	{"25mm_72k"		requires	"dshk_aa"				costs 2  position (+ 2 %column) (+ 25 %row) }
	{"37mm_61k"		requires	"25mm_72k"				costs 2  position (+ 4 %column) (+ 25 %row) }
	{"76mm_m1938"	requires	"37mm_61k"				costs 2  position (+ 5 %column) (+ 24 %row) } ;//LIB
	{"85mm_52k"		requires	"37mm_61k"				costs 4  position (+ 6 %column) (+ 25 %row) }

;//---AT Guns---
	{"45mm_m37"		requires	""						costs 0  position (+ 0 %column) (+ 29 %row) }
	{"45mm_m42"		requires	"45mm_m37"				costs 1  position (+ 1 %column) (+ 28 %row) }
	{"76mm_m1902"	requires	"45mm_m37"				costs 1  position (+ 2 %column) (+ 29 %row) }
	{"76mm_bpk76"	requires	"76mm_m1902"			costs 1  position (+ 3 %column) (+ 28 %row) }
	{"76mm_m1933"	requires	"76mm_m1902"			costs 1  position (+ 3 %column) (+ 29 %row) }
	{"76mm_f22"		requires	"76mm_m1933"			costs 1  position (+ 4 %column) (+ 29 %row) }
	{"76mm_zis3"	requires	"76mm_f22"				costs 3  position (+ 6 %column) (+ 29 %row) }
	{"57mm_zis2"	requires	"76mm_f22"				costs 3  position (+ 5 %column) (+ 28 %row) }
	{"100mm_bs3"	requires	"76mm_zis3"				costs 5  position (+ 8 %column) (+ 29 %row) }

;//---Field Guns---
	{"76mm_m1927"	requires	"45mm_m37"				costs 2  position (+ 1 %column) (+ 30 %row) }
	{"76mm_m43"		requires	"76mm_m1927"			costs 2  position (+ 2 %column) (+ 30 %row) }
	{"su12"			requires	"76mm_m1927"			costs 1  position (+ 4 %column) (+ 30 %row) }
;//---Artillery---
	{"107mm_m1910_30"	requires	"76mm_m1927"		costs 3  position (+ 1 %column) (+ 31 %row) }
	{"122mm_m1910"		requires	"107mm_m1910_30"	costs 3  position (+ 3 %column) (+ 31 %row) }

	{"152mm_br2"		requires	"122mm_m1910"		costs 2  position (+ 5 %column) (+ 31 %row) }
	{"203mm_b4"			requires	"152mm_br2"			costs 6  position (+ 7 %column) (+ 31 %row) }
	{"280mm_br5"		requires	"203mm_b4"			costs 6  position (+ 8 %column) (+ 31 %row) }

	{"122mm_m30"		requires	"107mm_m1910_30"	costs 3  position (+ 2 %column) (+ 32 %row) }
	{"122mm_a19"		requires	"122mm_m30"			costs 1  position (+ 3 %column) (+ 32 %row) }
	{"152mm_ml20"		requires	"122mm_a19"			costs 3  position (+ 5 %column) (+ 32 %row) }
	{"152mm_d1"			requires	"122mm_m30"			costs 4  position (+ 4 %column) (+ 33 %row) }

	{"300mm_m30"		requires	"bm13_studebaker"	costs 2  position (+ 10 %column) (+ 33 %row) }
	{"300mm_m31"		requires	"300mm_m30"			costs 2  position (+ 11 %column) (+ 33 %row) }
;TOTAL:


;//---Trucks---
	{"inf_crate_rus"	requires	""					costs 0  position (+ 0 %column) (+ 9 %row) }
	{"zis5"				requires	""					costs 1  position (+ 3 %column) (+ 15 %row) }
	{"ap_2"				requires	"inf_crate_rus"		costs 1  position (+ 1 %column) (+ 9 %row) }
	{"gaz_aaa_supply"	requires	"ap_2"				costs 1  position (+ 3 %column) (+ 9 %row) }
	{"gaz_fuel"			requires	"gaz_aaa_supply"	costs 1  position (+ 5 %column) (+ 9 %row) }
	{"gaz_aaa_maximx4"	requires	"maxim"				costs 2  position (+ 1 %column) (+ 22 %row) }
	{"gaz_aaa_72k"		requires	"25mm_72k"			costs 1  position (+ 3 %column) (+ 24 %row) }
	{"zis6_61k"			requires	"37mm_61k"				costs 2  position (+ 7 %column) (+ 24 %row) }
	{"yag10_29k"		requires	"76mm_m1938"			costs 1  position (+ 6 %column) (+ 23 %row) }
	{"zis5eng"			requires	"single_flamer(rus)"	costs 1  position (+ 4 %column) (+ 11 %row) }
	{"zis5_dshk"		requires	"dshk_aa"			costs 1  position (+ 1 %column) (+ 24 %row) }

	{"zis6_bm8_48"		requires	"152mm_ml20"		costs 4  position (+ 6 %column) (+ 32 %row) }
	{"t60_bm8_24"		requires	"zis6_bm8_48"		costs 1  position (+ 7 %column) (+ 33 %row) }
	{"zis6_bm13_16"		requires	"zis6_bm8_48"		costs 4  position (+ 8 %column) (+ 32 %row) }
	{"bm13_studebaker"	requires	"zis6_bm13_16"		costs 1  position (+ 9 %column) (+ 32 %row) }
	{"bm31_12"			requires	"bm13_studebaker 300mm_m31"	costs 3  position (+ 12 %column) (+ 32 %row) }
;TOTAL:


;//---Armored Cars---
	{"fai_m"			requires	""				costs 1  position (+ 0 %column) (+ 34 %row) }
	{"ba20"				requires	"fai_m"			costs 1  position (+ 1 %column) (+ 34 %row) }
	{"ba27m"			requires	"fai_m"			costs 2  position (+ 1 %column) (+ 33 %row) }
	{"ba6"				requires	"ba20"			costs 1  position (+ 2 %column) (+ 34 %row) }
	{"ba11"				requires	"ba6"			costs 1  position (+ 3 %column) (+ 33 %row) }
	{"ba10"				requires	"ba6"			costs 1  position (+ 3 %column) (+ 34 %row) }
	{"ba64"				requires	"ba10"			costs 1  position (+ 6 %column) (+ 34 %row) }

	{"universal_carrier_rus" requires	"ba10"		costs 1  position (+ 4 %column) (+ 35 %row) }
	{"mmg_carrier_rus"		 requires	"universal_carrier_rus"	costs 1 position (+ 5 %column) (+ 35 %row) }
	{"m3a1e1_scout_mgun"	 requires	"ba10"		costs 1  position (+ 3 %column) (+ 36 %row) }
	{"m3_rus"				requires	"m3a1e1_scout_mgun"		costs 1  position (+ 6 %column) (+ 36 %row) }
	{"m17"					requires	"m3_rus"				costs 1  position (+ 7 %column) (+ 36 %row) }
	{"su57"					requires	"m17"					costs 1  position (+ 8 %column) (+ 35 %row) }
;TOTAL:


;//---Light Tanks---
	{"t27"				requires	""				costs 0  position (+ 0 %column) (+ 39 %row) }
	{"t20"				requires	"t27"			costs 1  position (+ 1 %column) (+ 38 %row) }
	{"t37a"				requires	"t27"			costs 1  position (+ 1 %column) (+ 39 %row) }
	{"t40"				requires	"t37a"			costs 1  position (+ 2 %column) (+ 39 %row) }
	{"t30"				requires	"t40"			costs 1  position (+ 3 %column) (+ 39 %row) }
	{"t60"				requires	"t30"			costs 1  position (+ 4 %column) (+ 39 %row) }
	{"t70"				requires	"t60"			costs 2  position (+ 5 %column) (+ 39 %row) }
	{"t70m"				requires	"t70"			costs 1  position (+ 6 %column) (+ 39 %row) }
	{"t80"				requires	"t70m"			costs 2  position (+ 7 %column) (+ 39 %row) }
	{"t50"				requires	"bt7"			costs 2  position (+ 4 %column) (+ 42 %row) }
	{"zis30"			requires	"57mm_zis2"		costs 3  position (+ 5 %column) (+ 27 %row) }
	{"su76"				requires	"76mm_zis3"		costs 3  position (+ 7 %column) (+ 28 %row) }
	{"su76i"			requires	"su76"			costs 1  position (+ 8 %column) (+ 28 %row) }
	{"t18"				requires	""				costs 2  position (+ 0 %column) (+ 36 %row) }	
	{"t26_31"			requires	""				costs 1  position (+ 0 %column) (+ 48 %row) }
	{"kht26"			requires	"t26_31"		costs 1  position (+ 0 %column) (+ 47 %row) }
	{"t26_33"			requires	"t26_31"		costs 2  position (+ 1 %column) (+ 48 %row) }
	{"kht130"			requires	"t26_33"		costs 1  position (+ 1 %column) (+ 47 %row) }
	{"t26_39"			requires	"t26_33"		costs 2  position (+ 2 %column) (+ 48 %row) }
	{"su26"				requires	"t26_39"		costs 2  position (+ 3 %column) (+ 47 %row) } ;//SE
	{"su5"				requires	"su26"			costs 2  position (+ 5 %column) (+ 47 %row) }
	{"bt2"				requires	""				costs 2  position (+ 0 %column) (+ 42 %row) }
	{"bt2_da2"			requires	"bt2"			costs 0  position (+ 1 %column) (+ 41 %row) }
	{"bt5"				requires	"bt2"			costs 2  position (+ 1 %column) (+ 42 %row) }
	{"bt7"				requires	"bt5"			costs 2  position (+ 2 %column) (+ 42 %row) }
	{"bt7a"				requires	"bt7"			costs 1  position (+ 3 %column) (+ 41 %row) }
	{"valentine2"		requires	"t70"			costs 2  position (+ 5 %column) (+ 37 %row) }
	{"matilda2"			requires	"valentine2"	costs 1  position (+ 6 %column) (+ 37 %row) }	
	{"valentine7"		requires	"valentine2"	costs 1  position (+ 7 %column) (+ 37 %row) }
	{"valentine9"		requires	"valentine7"	costs 3  position (+ 8 %column) (+ 37 %row) }

	{"m3_stuart_late_rus" requires	"t70"			costs 2  position (+ 5 %column) (+ 38 %row) }
	{"m3a1_stuart_rus"	requires	"m3_stuart_late_rus"	costs 1  position (+ 6 %column) (+ 38 %row) }
;TOTAL:


;//---Medium Tanks---
	{"t28"				requires	"bt7"			costs 3  position (+ 2 %column) (+ 43 %row) }
	{"t28_38"			requires	"t28"			costs 2  position (+ 2 %column) (+ 44 %row) }
	{"t28_late"			requires	"t28_38"		costs 1  position (+ 1 %column) (+ 44 %row) }
	{"t28e"				requires	"t28_38"		costs 1  position (+ 2 %column) (+ 45 %row) }
	{"t3476_40"			requires	"t28_38"		costs 3  position (+ 3 %column) (+ 44 %row) }
	{"t3476_41"			requires	"t3476_40"		costs 3  position (+ 4 %column) (+ 44 %row) }
	{"t3476_41e"		requires	"t3476_41"		costs 1  position (+ 4 %column) (+ 45 %row) } ;//SE
	{"t3457_41"			requires	"t3476_41"		costs 4  position (+ 4 %column) (+ 43 %row) }
	{"t3476_42"			requires	"t3476_41"		costs 3  position (+ 5 %column) (+ 44 %row) }
	{"t3476_uztm"		requires	"t3476_42"		costs 1  position (+ 5 %column) (+ 45 %row) }
	{"t3476_43"			requires	"t3476_42"		costs 4  position (+ 6 %column) (+ 44 %row) }
	{"t3457_43"			requires	"t3476_42"		costs 4  position (+ 5 %column) (+ 43 %row) }
	{"t3476_43_flame"	requires	"t3476_43"		costs 4  position (+ 6 %column) (+ 43 %row) }

	{"t3485_43"			requires	"t3476_43"		costs 5  position (+ 7 %column) (+ 44 %row) }
	{"t3485_44"			requires	"t3485_43"		costs 1  position (+ 8 %column) (+ 44 %row) }
	{"t3485_44_flame"	requires	"t3485_44"		costs 4  position (+ 8 %column) (+ 43 %row) }
	{"t3485_44a"		requires	"t3485_44"		costs 1  position (+ 9 %column) (+ 44 %row) } ;//SE
	{"t3485_44a_flame"	requires	"t3485_44_flame t3485_44a" costs 1  position (+ 9 %column) (+ 43 %row) } ;//SE
	{"t3485_44b"		requires	"t3485_44"		costs 1  position (+ 10 %column) (+ 44 %row) } ;//SE

	{"su122"			requires	"t3476_43"		costs 5  position (+ 6 %column) (+ 45 %row) }
	{"su85"				requires	"su122"			costs 5  position (+ 7 %column) (+ 45 %row) }
	{"su85m"			requires	"su85"			costs 1  position (+ 8 %column) (+ 46 %row) } ;//SE
	{"su100"			requires	"su85"			costs 5  position (+ 8 %column) (+ 45 %row) }

	{"m3_lee_rus"		  requires "m3a1_stuart_rus"	costs 4  position (+ 8 %column) (+ 38 %row) }
	{"m4a2_75_early_rus"  requires "m3_lee_rus"			costs 4  position (+ 9 %column) (+ 38 %row) }
	{"m4a2_75_late_rus"   requires "m4a2_75_early_rus"	costs 1  position (+ 10 %column) (+ 38 %row) }
	{"m4a2_76w_early_rus" requires "m4a2_75_late_rus"	costs 7  position (+ 12 %column) (+ 38 %row) }
	{"m4a2_76w_late_rus"  requires "m4a2_76w_early_rus"	costs 1  position (+ 13 %column) (+ 38 %row) }
	{"wolverine"		  requires "m4a2_75_late_rus" 	costs 4  position (+ 11 %column) (+ 39 %row) }
;TOTAL:


;//---Heavy Tanks---
	{"churchill3"		requires	"valentine9"	costs 3  position (+ 8 %column) (+ 36 %row) }
	{"t35"				requires	"t26_33"		costs 7  position (+ 1 %column) (+ 50 %row) }
	{"t35_late"			requires	"t35"			costs 2  position (+ 2 %column) (+ 51 %row) }
	{"smk"				requires	"t35"			costs 2  position (+ 1 %column) (+ 51 %row) }
	{"kv1_39"			requires	"t35"			costs 5  position (+ 3 %column) (+ 50 %row) }
	{"kv1_40"			requires	"kv1_39"		costs 2  position (+ 4 %column) (+ 50 %row) }
	{"kv1_40e"			requires	"kv1_40"		costs 1  position (+ 4 %column) (+ 49 %row) }
	{"kv2_40"			requires	"kv1_40"		costs 6  position (+ 4 %column) (+ 51 %row) }
	{"kv1_41"			requires	"kv1_40"		costs 2  position (+ 5 %column) (+ 50 %row) }
	{"kv8"				requires	"kv1_41"		costs 1  position (+ 5 %column) (+ 49 %row) } ;//SE
	{"kv1_42"			requires	"kv1_41"		costs 2  position (+ 6 %column) (+ 50 %row) }
	{"kv1_122"			requires	"kv1_42"		costs 2  position (+ 6 %column) (+ 51 %row) }
	{"kv1s"				requires	"kv1_42"		costs 2  position (+ 7 %column) (+ 50 %row) }
	{"kv8s"				requires	"kv1s"			costs 1  position (+ 7 %column) (+ 49 %row) }
	{"kv85"				requires	"kv1s"			costs 6  position (+ 8 %column) (+ 50 %row) }
	{"su152"			requires	"kv1s"			costs 6  position (+ 7 %column) (+ 51 %row) }
	{"kv122"			requires	"kv85"			costs 8  position (+ 9 %column) (+ 49 %row) }
	{"is1_43"			requires	"kv85"			costs 9  position (+ 9 %column) (+ 50 %row) }
	{"isu152"			requires	"is1_43"		costs 10 position (+ 9 %column) (+ 51 %row) }
	{"isu122s"			requires	"isu152"		costs 5  position (+ 11 %column) (+ 51 %row) }
	{"is2_43"			requires	"is1_43"		costs 11 position (+ 10 %column) (+ 50 %row) }
	{"is2_44"			requires	"is2_43"		costs 12 position (+ 11 %column) (+ 50 %row) }
	{"is2_44_e"			requires	"is2_44"		costs 1  position (+ 11 %column) (+ 49 %row) } ;//SE
	{"is2_45"			requires	"is2_44"		costs 2  position (+ 12 %column) (+ 50 %row) } ;//SE
)

	