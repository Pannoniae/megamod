(define "research_ger"

;//---Off Map Support---
	{"conquest_fi156"					requires	"single_officer(ger)"				costs 1  position (+ 0 %column) (+ 4 %row) }
	{"conquest_bf109"					requires	"squad_officer_con(ger)"			costs 1  position (+ 2 %column) (+ 4 %row) }
	{"conquest_bf110"					requires	"squad_officer_kubel_con"			costs 1  position (+ 4 %column) (+ 4 %row) }

	{"105mm_lefh18_smoke_barrage"		requires	"single_officer(ger)"				costs 1  position (+ 0 %column) (+ 3 %row) }

	{"80mm_sgrw34_mortar_barrage"		requires	"squad_officer_con(ger)"			costs 1  position (+ 2 %column) (+ 3 %row) }
	{"105mm_lefh18_artillery_barrage"	requires	"squad_officer_kubel_con"			costs 1  position (+ 4 %column) (+ 3 %row) }
	
	{"120mm_sgrw42_mortar_barrage"		requires	"squad_officer_250_3_con"			costs 1  position (+ 6 %column) (+ 3 %row) }
	{"150mm_sfh18_artillery_barrage"	requires	"squad_officer_250_3_con"			costs 1  position (+ 7 %column) (+ 3 %row) }
;TOTAL:


;//---SQUADS---
;//	{"single_officer(ger)"				requires	""									costs 1  position (+ 0 %column) (+ 2 %row) }
	{"squad_officer_con(ger)"			requires	"single_officer(ger)"				costs 2  position (+ 2 %column) (+ 2 %row) }
	{"squad_officer_kubel_con"			requires	"squad_officer_con(ger)"			costs 5  position (+ 4 %column) (+ 2 %row) }
	{"squad_officer_250_3_con"			requires	"squad_officer_kubel_con"			costs 8  position (+ 6 %column) (+ 2 %row) }

	{"single_engineer(ger)"				requires	""									costs 2  position (+ 0 %column) (+ 12 %row) }
	{"single_ap_miner(ger)"				requires	"single_engineer(ger)"				costs 0  position (+ 1 %column) (+ 11 %row) }
	{"single_at_miner(ger)"				requires	"single_ap_miner(ger)"				costs 0  position (+ 2 %column) (+ 11 %row) }
	{"single_flamer(ger)"				requires	"single_engineer(ger)"				costs 0  position (+ 1 %column) (+ 13 %row) }

	{"single_sniper(ger)"				requires	"squad_recon_con(ger)"				costs 1  position (+ 1 %column) (+ 21 %row) }
	{"single_at(ger)"					requires	""									costs 0  position (+ 0 %column) (+ 6 %row) }
	{"single_riflegrenade(ger)"			requires	"single_at(ger)"					costs 1  position (+ 1 %column) (+ 7 %row) }
	{"single_at_pzs_late_con(ger)"		requires	"28mm_pzb41 reinforcement_stage_4"	costs 5  position (+ 5 %column) (+ 6 %row) }
	{"squad_at_late_con(ger)"			requires	"single_at_pzs_late_con(ger)"		costs 3  position (+ 7 %column) (+ 6 %row) }

	{"squad_regular_con(ger)"			requires	"squad_sicherung_con(ger)"			costs 2  position (+ 1 %column) (+ 18 %row) }
	{"squad_regular_motor_con"			requires	"blitz3_6"							costs 0  position (+ 4 %column) (+ 18 %row) }
	{"squad_regular_armor_con"			requires	"squad_regular_motor_con"			costs 2  position (+ 5 %column) (+ 17 %row) }
	{"squad_regular_vet_con(ger)"		requires	"squad_regular_con(ger)"			costs 2  position (+ 3 %column) (+ 16 %row) }
	{"squad_grenadier_con(ger)"			requires	"squad_regular_armor_con"			costs 5  position (+ 8 %column) (+ 17 %row) }
	{"squad_pzgren_motor_con"			requires	"squad_grenadier_con(ger)"			costs 2  position (+ 10 %column) (+ 17 %row) }
	{"squad_pzgren_armor_con"			requires	"squad_pzgren_motor_con"			costs 1  position (+ 11 %column) (+ 17 %row) }
	{"squad_sturm_pzgren_armor_con"		requires	"squad_pzgren_armor_con"			costs 2  position (+ 12 %column) (+ 17 %row) }
	{"squad_gd_motor_con"				requires	"squad_regular_vet_con(ger) squad_regular_motor_con"	costs 3  position (+ 4 %column) (+ 16 %row) }
	{"squad_pzg_gd_armor_con"			requires	"squad_gd_motor_con squad_pzgren_armor_con"				costs 2  position (+ 12 %column) (+ 16 %row) }
	{"squad_pzg_lehr_armor_con"			requires	"squad_pzgren_armor_con"			costs 3  position (+ 12 %column) (+ 18 %row) }
	{"squad_sturm_pzg_lehr_armor_con"	requires	"squad_pzg_lehr_armor_con"			costs 2  position (+ 13 %column) (+ 18 %row) }
	{"squad_volksg_con(ger)"			requires	"squad_grenadier_con(ger)"			costs 1  position (+ 10 %column) (+ 19 %row) }
	{"squad_volksg_sturm_con(ger)"		requires	"squad_volksg_con(ger)"				costs 2  position (+ 11 %column) (+ 19 %row) }
	{"squad_volksg_heavy_con(ger)"		requires	"squad_volksg_sturm_con(ger)"		costs 2  position (+ 12 %column) (+ 19 %row) }
	{"squad_sturmgren_con(ger)"			requires	"squad_volksg_con(ger)"				costs 3  position (+ 11 %column) (+ 20 %row) }
	{"squad_sturmgren_heavy_con(ger)"	requires	"squad_sturmgren_con(ger)"			costs 2  position (+ 12 %column) (+ 20 %row) }
	{"squad_volkssturm_con(ger)"		requires	"squad_volksg_con(ger)"				costs 0  position (+ 10 %column) (+ 18 %row) }
	{"squad_sicherung_con(ger)"			requires	""									costs 0  position (+ 0 %column) (+ 19 %row) }
	{"squad_pionier_con(ger)"			requires	"squad_sicherung_con(ger)"			costs 2  position (+ 1 %column) (+ 19 %row) }
	{"squad_pz_pio_con"					requires	"squad_pionier_con(ger) squad_regular_motor_con"		costs 2  position (+ 5 %column) (+ 19 %row) }
	{"squad_pz_pio_302_con(ger)"		requires	"squad_pz_pio_con"					costs 1  position (+ 6 %column) (+ 18 %row) }
	{"squad_pz_pio_303b_con(ger)"		requires	"squad_pz_pio_302_con(ger)"			costs 0  position (+ 7 %column) (+ 18 %row) }
	{"squad_pz_pio_late_con"			requires	"squad_pz_pio_con"					costs 3  position (+ 7 %column) (+ 19 %row) }

	{"squad_recon_con(ger)"				requires	"squad_sicherung_con(ger)"			costs 1  position (+ 1 %column) (+ 20 %row) }
	{"squad_recon_motor_con"			requires	"kubelwagen_dak"					costs 0  position (+ 4 %column) (+ 20 %row) }
	{"squad_recon_armor_con"			requires	"squad_recon_motor_con"				costs 2  position (+ 5 %column) (+ 21 %row) }
	{"squad_pz_recon_armor_late_con"	requires	"squad_recon_armor_con"				costs 2  position (+ 6 %column) (+ 21 %row) }
	{"squad_fusilier_late_con(ger)"		requires	"squad_recon_motor_con squad_grenadier_con(ger)" costs 1  position (+ 8 %column) (+ 20 %row) }
	{"squad_fusilier_smg_late_con(ger)"	requires	"squad_fusilier_late_con(ger) squad_volksg_con(ger)" costs 1  position (+ 10 %column) (+ 20 %row) }
	{"squad_jaeger_con(ger)"			requires	"squad_regular_con(ger)"			costs 3  position (+ 1 %column) (+ 15 %row) }
	{"squad_gebirgsjaeger_con(ger)"		requires	"squad_jaeger_con(ger)"				costs 4  position (+ 6 %column) (+ 15 %row) }
	{"squad_gebirgsjaeger_late_con(ger)"requires	"squad_gebirgsjaeger_con(ger)"		costs 5  position (+ 8 %column) (+ 15 %row) }
	{"squad_gebirgs_recon_late_con(ger)"requires	"squad_gebirgsjaeger_late_con(ger)"	costs 1  position (+ 9 %column) (+ 15 %row) }
	{"squad_sturmjager_con(ger)"		requires	"squad_gebirgsjaeger_con(ger)"		costs 5  position (+ 7 %column) (+ 14 %row) }

	{"squad_osttruppen_con(ger)"		requires	"squad_sicherung_con(ger)"			costs 1  position (+ 0 %column) (+ 21 %row) }
	{"squad_strafbatallion_con(ger)"	requires	"squad_osttruppen_con(ger)"			costs 1  position (+ 1 %column) (+ 22 %row) }
	{"squad_luftwaffe_con(ger)"			requires	"squad_strafbatallion_con(ger)"		costs 1  position (+ 2 %column) (+ 22 %row) }
	{"squad_lw_jaeger_con(ger)"			requires	"squad_luftwaffe_con(ger)"			costs 5  position (+ 3 %column) (+ 23 %row) }
	{"squad_fallschirmjaeger_con(ger)"	requires	"squad_luftwaffe_con(ger)"			costs 8  position (+ 7 %column) (+ 22 %row) }
	{"squad_fallschirmjaeger_motor_con"	requires	"squad_fallschirmjaeger_con(ger)"	costs 2  position (+ 8 %column) (+ 22 %row) }
	{"squad_fallschirmjaeger_late_motor_con" requires "squad_fallschirmjaeger_motor_con squad_lw_jaeger_con(ger)" costs 3  position (+ 9 %column) (+ 23 %row) }
	{"squad_fallschirm_recon_late_con(ger)"	requires "squad_fallschirmjaeger_late_motor_con" costs 1  position (+ 10 %column) (+ 23 %row) }
	{"squad_blau_con(ger)"				requires	"squad_regular_con(ger)"			costs 5  position (+ 0 %column) (+ 17 %row) }
	{"squad_brandenburger_con(ger)"		requires	"squad_regular_vet_con(ger)"		costs 5  position (+ 3 %column) (+ 14 %row) }
	{"squad_brandenburger_44_con(ger)"	requires	"squad_brandenburger_con(ger)"		costs 5  position (+ 5 %column) (+ 14 %row) }
	
	{"squad_sturm_begleitgren_motor_con"requires	"stug3g_late"						costs 0  position (+ 6 %column) (+ 53 %row) } ;// only found in stug (sturmartillerie) units
;TOTAL:


;//---Special---
	;//{"150mm_sw34_ger"	requires	"single_officer(ger)" costs 1  position (+ 1 %column) (+ 3 %row) } ;//Talvisota, SE
	{"panzernest_krab_ger" requires	"blitz3_6_engineering" costs 2  position (+ 5 %column) (+ 13 %row) } ;//Talvisota, SE

;//---MG---
	{"mg34_lafette"	requires 	""					costs 1  position (+ 0 %column) (+ 24 %row) }
	{"mg42_lafette"	requires 	"mg34_lafette"		costs 1  position (+ 2 %column) (+ 24 %row) }

;//---Mortar---
	{"80mm_sgrw34"	requires	""					costs 2  position (+ 4 %column) (+ 24 %row) }
	{"100mm_nbw35"	requires	"80mm_sgrw34"		costs 2  position (+ 6 %column) (+ 24 %row) }
	{"120mm_sgrw42"	requires	"100mm_nbw35"		costs 2  position (+ 8 %column) (+ 24 %row) }
	{"200mm_ldgw40"	requires	"blitz3_6_engineering" costs 4  position (+ 6 %column) (+ 12 %row) }

;//---AA---
	{"20mm_flak30"	requires	""					costs 1  position (+ 0 %column) (+ 27 %row) }
	{"20mm_flak38"	requires	"20mm_flak30"		costs 1  position (+ 1 %column) (+ 26 %row) } ;//SE, LIB
	{"37mm_flak37"	requires	"20mm_flak30"		costs 2  position (+ 2 %column) (+ 27 %row) }
	{"20mm_flakvierling38" requires "20mm_flak38"	costs 1  position (+ 2 %column) (+ 25 %row) } ;//AIR																		 
	{"50mm_flak41"	requires	"37mm_flak37"		costs 2  position (+ 4 %column) (+ 27 %row) }
	{"88mm_flak18"	requires	"50mm_flak41"		costs 2  position (+ 6 %column) (+ 27 %row) }
	{"88mm_flak36"	requires	"88mm_flak18"		costs 4  position (+ 8 %column) (+ 27 %row) }

;//---AT Guns---
	{"28mm_pzb41"	requires	"single_at(ger)"	costs 1  position (+ 2 %column) (+ 6 %row) }
	{"37mm_pak36"	requires	""					costs 0  position (+ 0 %column) (+ 31 %row) }
	{"47mm_pakt"	requires	"37mm_pak36"		costs 1  position (+ 2 %column) (+ 31 %row) }
	{"50mm_pak38"	requires	"47mm_pakt"			costs 2  position (+ 4 %column) (+ 31 %row) }
	{"75mm_pak9738"	requires	"50mm_pak38"		costs 2  position (+ 5 %column) (+ 31 %row) }
	{"75mm_pak40"	requires	"75mm_pak9738"		costs 3  position (+ 6 %column) (+ 31 %row) }
	{"88mm_pak4341"	requires	"75mm_pak40"		costs 6  position (+ 8 %column) (+ 31 %row) } ;//SE, LIB
	{"128mm_pak44"	requires	"88mm_pak4341"		costs 2  position (+ 9 %column) (+ 31 %row) } 

;//---Infantry Guns---
	{"75mm_lg40"		requires 	"squad_fallschirmjaeger_con(ger)"	costs 2  position (+ 7 %column) (+ 21 %row) }
	{"75mm_leig18"		requires 	"37mm_pak36"	costs 2  position (+ 1 %column) (+ 32 %row) }
	{"150mm_sig33"		requires	"75mm_leig18"	costs 3  position (+ 4 %column) (+ 32 %row) }

;//---Artillery---
	{"105mm_lefh18"			requires	"75mm_leig18"			costs 3  position (+ 2 %column) (+ 33 %row) }
	{"105mm_lefh18_40"		requires	"105mm_lefh18"			costs 1  position (+ 2 %column) (+ 34 %row) } ;//Air
	{"105mm_sk18"			requires	"105mm_lefh18"			costs 1  position (+ 3 %column) (+ 33 %row) }
	{"150mm_sfh18"			requires	"105mm_sk18"			costs 4  position (+ 5 %column) (+ 33 %row) }
	{"155mm_gpf_ger"		requires	"150mm_sfh18"			costs 2  position (+ 6 %column) (+ 32 %row) } ;//LIB
	{"170mm_k18"			requires	"210mm_morser18"		costs 4  position (+ 8 %column) (+ 32 %row) } ;//SE
	{"210mm_morser18"		requires	"150mm_sfh18"			costs 6  position (+ 7 %column) (+ 33 %row) }
	{"600mm_thor"			requires	"210mm_morser18"		costs 8  position (+ 9 %column) (+ 33 %row) } ;//SE

	{"150mm_nebelwerfer41"	requires	"150mm_sfh18"			costs 3  position (+ 5 %column) (+ 35 %row) }
	{"210mm_nebelwerfer42"	requires	"150mm_nebelwerfer41"	costs 3  position (+ 6 %column) (+ 35 %row) }
	{"300mm_nebelwerfer42"	requires	"210mm_nebelwerfer42"	costs 6  position (+ 8 %column) (+ 35 %row) }
;TOTAL:


;//---Trucks---
	{"inf_crate_ger"		requires	""						costs 0  position (+ 0 %column) (+ 9 %row) }
	{"blitz3_6"				requires	"squad_regular_con(ger)" costs 2  position (+ 3 %column) (+ 18 %row) }
	{"blitz3_6_fuel"		requires	"blitz3_6_art_ammo"		costs 1  position (+ 5 %column) (+ 9 %row) }
	{"infantry_cart_if8"	requires	"inf_crate_ger"			costs 0  position (+ 1 %column) (+ 9 %row) }
	{"ammo_trailer"			requires	"infantry_cart_if8"		costs 1  position (+ 2 %column) (+ 9 %row) }
	{"blitz3_6_art_ammo"	requires	"ammo_trailer"			costs 1  position (+ 3 %column) (+ 9 %row) }
	{"sdkfz6_ammo"			requires	"blitz3_6_art_ammo"		costs 2  position (+ 4 %column) (+ 10 %row) } ;//SE LIB
	{"blitz3_6_engineering"	requires	"kettenkrad_eng"		costs 1  position (+ 4 %column) (+ 12 %row) }
	{"blitz3_6_flak30"		requires	"20mm_flak30"			costs 1  position (+ 0 %column) (+ 26 %row) }
	{"kubelwagen_dak"		requires	"squad_recon_con(ger)"	costs 1  position (+ 3 %column) (+ 20 %row) }

	{"kettenkrad_eng"		requires	"single_engineer(ger)"	costs 1  position (+ 3 %column) (+ 12 %row) }
	{"sdkfz10"				requires	""						costs 1  position (+ 0 %column) (+ 30 %row) }
	{"sdkfz10_4"			requires	"sdkfz10 20mm_flak30"	costs 0  position (+ 0 %column) (+ 28 %row) }
	{"sdkfz10_pak38"		requires	"sdkfz10 50mm_pak38"	costs 0  position (+ 4 %column) (+ 30 %row) }
	{"sdkfz6_2"				requires	"37mm_flak37 sdkfz10_4"	costs 1  position (+ 2 %column) (+ 28 %row) }
	{"sdkfz7_1"				requires	"20mm_flak38"			costs 2  position (+ 3 %column) (+ 26 %row) }
	{"sdkfz7_2"				requires	"sdkfz6_2"				costs 2  position (+ 3 %column) (+ 29 %row) } ;//SE, LIB
	{"sdkfz8_flak18"		requires	"88mm_flak18 sdkfz6_2"	costs 2  position (+ 7 %column) (+ 28 %row) }
	{"sdkfz251b"			requires	"kfz13" 				costs 1  position (+ 1 %column) (+ 40 %row) }
	{"sdkfz251c"			requires	"sdkfz251b" 			costs 1  position (+ 1 %column) (+ 41 %row) }
	{"sdkfz251c_2"			requires	"sdkfz251c"				costs 2  position (+ 2 %column) (+ 41 %row) }
	{"sdkfz251d_1"			requires	"sdkfz251c"				costs 1  position (+ 2 %column) (+ 42 %row) }
	{"sdkfz251d_16"			requires	"sdkfz251d_1"			costs 2  position (+ 5 %column) (+ 42 %row) } ;// LIB
	{"sdkfz251d_17"			requires	"sdkfz251d_16"			costs 1  position (+ 6 %column) (+ 42 %row) } ;// LIB
	{"sdkfz251d_21"			requires	"sdkfz251d_17"			costs 2  position (+ 8 %column) (+ 42 %row) } ;// LIB
	{"sdkfz251d_22"			requires	"sdkfz251d_21"			costs 4  position (+ 9 %column) (+ 42 %row) } ;// LIB

	{"kfz13"				requires	""				costs 1  position (+ 0 %column) (+ 40 %row) }
	{"sdkfz221"				requires	"kfz13"			costs 1  position (+ 1 %column) (+ 39 %row) }
	{"sdkfz222a"			requires	"sdkfz221"		costs 1  position (+ 2 %column) (+ 38 %row) }
	{"sdkfz231"				requires	"sdkfz221"		costs 1  position (+ 2 %column) (+ 39 %row) }
	{"p204_f"				requires	"sdkfz222a"		costs 1  position (+ 5 %column) (+ 38 %row) }
	{"sdkfz250a_1"			requires	"kfz13"			costs 1  position (+ 1 %column) (+ 40 %row) }
	{"sdkfz250a_9"			requires	"sdkfz250a_1"	costs 1  position (+ 2 %column) (+ 40 %row) } ;//SE, LIB
	{"sdkfz250a_11"			requires	"28mm_pzb41"	costs 1  position (+ 3 %column) (+ 7 %row) }

	{"sdkfz234_1"			requires	"sdkfz234_2"	costs 1  position (+ 6 %column) (+ 40 %row) } ;//SE
	{"sdkfz234_2"			requires	"sdkfz231"		costs 3  position (+ 5 %column) (+ 39 %row) }
	{"sdkfz234_3"			requires	"sdkfz234_2"	costs 2  position (+ 6 %column) (+ 39 %row) } ;//SE, LIB
	{"sdkfz234_4"			requires	"sdkfz234_3"	costs 3  position (+ 7 %column) (+ 39 %row) }  ;//SE, LIB

	{"panzerwerfer42"		requires	"150mm_nebelwerfer41"	costs 3  position (+ 5 %column) (+ 36 %row) } ;// LIB
	{"sdkfz251d_1_stuka"	requires	"210mm_nebelwerfer42"	costs 3  position (+ 7 %column) (+ 36 %row) }
	{"zgkw303f"				requires	"150mm_nebelwerfer41"	costs 3  position (+ 6 %column) (+ 36 %row) }
;TOTAL:


;//---Light Tanks---
	{"pz38h_735"			requires	"p204_f"		costs 2  position (+ 8 %column) (+ 38 %row) }
	{"pz38h_w40"			requires	"pz38h_735 300mm_nebelwerfer42" costs 1  position (+ 8 %column) (+ 36 %row) } ;//Talvisota

	{"panzer1b"				requires	""				costs 1  position (+ 0 %column) (+ 45 %row) }
	{"panzerjager1"			requires	"panzer1b"		costs 2  position (+ 1 %column) (+ 44 %row) }
	{"bison"				requires	"panzerjager1"	costs 3  position (+ 2 %column) (+ 44 %row) }
	{"panzer1f"				requires	"panzer1b"		costs 5  position (+ 3 %column) (+ 45 %row) }
	{"flakpanzer1a"			requires	"sdkfz7_1"		costs 1  position (+ 5 %column) (+ 26 %row) }

	{"panzer2c"				requires	"panzer1b"		costs 1  position (+ 0 %column) (+ 47 %row) }
	{"panzer2f"				requires	"panzer2c"		costs 1  position (+ 1 %column) (+ 47 %row) }
	{"panzer2j"				requires	"panzer2f"		costs 1  position (+ 2 %column) (+ 46 %row) }
	{"panzer2l"				requires	"panzer2f"		costs 1  position (+ 3 %column) (+ 47 %row) }
	{"marder2"				requires	"panzer2f"		costs 3  position (+ 2 %column) (+ 48 %row) }

	{"pz35t"				requires	"panzer2c"		costs 1  position (+ 0 %column) (+ 49 %row) }
	{"pz38t_a"				requires	"pz35t"			costs 1  position (+ 0 %column) (+ 50 %row) }
	{"pz38t_f"				requires	"pz38t_a"		costs 1  position (+ 1 %column) (+ 50 %row) }
	{"pz38t_g"				requires	"pz38t_f"		costs 1  position (+ 2 %column) (+ 50 %row) }
	{"marder139"			requires	"pz38t_f"		costs 2  position (+ 3 %column) (+ 51 %row) }
	{"marder3m"				requires	"pz38t_g"		costs 2  position (+ 3 %column) (+ 50 %row) }
	{"grille_m"				requires	"marder3m"		costs 2  position (+ 3 %column) (+ 49 %row) }
	{"grille_k"				requires	"marder3m"		costs 2  position (+ 4 %column) (+ 49 %row) } ;//SE
	{"hetzer"				requires	"marder3m stug3g" costs 2  position (+ 4 %column) (+ 50 %row) }

	{"wespe"				requires	"105mm_lefh18"	costs 2  position (+ 3 %column) (+ 34 %row) }
;TOTAL:


;//---Medium Tanks---
	{"panzer35s"			requires	"pz38h_735"		costs 3  position (+ 9 %column) (+ 38 %row) }

	{"panzer3e"				requires	"pz38t_a"		costs 2  position (+ 0 %column) (+ 54 %row) }
	{"panzer3f"				requires	"panzer3e"		costs 2  position (+ 1 %column) (+ 54 %row) }
	{"panzer3h"				requires	"panzer3f"		costs 2  position (+ 2 %column) (+ 54 %row) }
	{"panzer3j"				requires	"panzer3h"		costs 1  position (+ 3 %column) (+ 54 %row) }
	{"panzer3j1"			requires	"panzer3j"		costs 2  position (+ 4 %column) (+ 54 %row) }
	{"panzer3l"				requires	"panzer3j1"		costs 2  position (+ 5 %column) (+ 54 %row) }
	{"panzer3l_pak38"		requires	"panzer3l"		costs 1  position (+ 5 %column) (+ 55 %row) }
	{"panzer3m"				requires	"panzer3l"		costs 1  position (+ 6 %column) (+ 54 %row) }
	{"panzer3n"				requires	"panzer3m"		costs 2  position (+ 7 %column) (+ 54 %row) }
	{"panzer3_flamm"		requires	"panzer3m"		costs 2  position (+ 7 %column) (+ 53 %row) }

	{"stug3b"				requires	"panzer3f"		costs 2  position (+ 2 %column) (+ 53 %row) }
	{"stug3a"				requires	"panzer3f"		costs 2  position (+ 0 %column) (+ 53 %row) }	
	{"sig33b"				requires	"stug3b"		costs 4  position (+ 3 %column) (+ 52 %row) }
	{"stug3f"				requires	"stug3b"		costs 3  position (+ 3 %column) (+ 53 %row) }
	{"stug3g"				requires	"stug3f"		costs 2  position (+ 4 %column) (+ 53 %row) }
	{"stug3g_late"			requires	"stug3g"		costs 2  position (+ 5 %column) (+ 53 %row) }
	{"stuh42"				requires	"stug3g"		costs 3  position (+ 5 %column) (+ 52 %row) }
	{"stug4g"				requires	"stug3g_late"	costs 1  position (+ 6 %column) (+ 52 %row) }

	{"hummel"				requires	"150mm_sfh18"	costs 3  position (+ 6 %column) (+ 34 %row) } ;//LIB
	{"nashorn"				requires	"88mm_pak4341"	costs 4  position (+ 8 %column) (+ 30 %row) } ;//LIB

	{"panzer4d"				requires	"panzer3f"		costs 3  position (+ 1 %column) (+ 57 %row) }
	{"panzer4f1"			requires	"panzer4d"		costs 2  position (+ 2 %column) (+ 57 %row) }
	{"panzer4f1_shielded"	requires	"panzer4f1"		costs 1  position (+ 2 %column) (+ 56 %row) }
	{"dicker_max"			requires	"panzer4d"		costs 6  position (+ 2 %column) (+ 58 %row) }
	{"geschuetzwagen_ivb"	requires	"dicker_max"	costs 3  position (+ 4 %column) (+ 58 %row) }
	{"panzer4f2"			requires	"panzer4f1"		costs 4  position (+ 3 %column) (+ 57 %row) }
	{"panzer4g"				requires	"panzer4f2"		costs 4  position (+ 4 %column) (+ 57 %row) }
	{"wirbelwind"			requires	"panzer4g"		costs 2  position (+ 4 %column) (+ 56 %row) } ;//SE, LIB
	{"ostwind"				requires	"panzer4g"		costs 2  position (+ 5 %column) (+ 56 %row) } ;//SE, LIB
	{"panzer4h"				requires	"panzer4g"		costs 3  position (+ 5 %column) (+ 57 %row) }
	{"panzer4j"				requires	"panzer4h"		costs 1  position (+ 6 %column) (+ 57 %row) }

	{"panzer5d"				requires	"panzer4h"		costs 10  position (+ 5 %column) (+ 60 %row) }
	{"panzer5a"				requires	"panzer5d"		costs 3  position (+ 6 %column) (+ 60 %row) }
	{"panzer5g"				requires	"panzer5a"		costs 3  position (+ 7 %column) (+ 60 %row) }
	{"panzer5g_steelrims"	requires	"panzer5g"		costs 3  position (+ 7 %column) (+ 61 %row) }
	{"jagdpanther"			requires	"panzer5g"		costs 4  position (+ 8 %column) (+ 60 %row) }

	{"sturmpanzer4"			requires	"panzer4h"		costs 3  position (+ 6 %column) (+ 56 %row) }
	{"jagdpanzer4_l48_early" requires	"panzer4h"		costs 2  position (+ 6 %column) (+ 58 %row) }
	{"jagdpanzer4_l48"		requires	"jagdpanzer4_l48_early"	costs 2  position (+ 7 %column) (+ 58 %row) }
	{"panzer4_70_v"			requires	"jagdpanzer4_l48" costs 4  position (+ 8 %column) (+ 58 %row) } ;//LIB
;TOTAL:


;//---Heavy Tanks---
	{"panzerb2"				requires	"panzer35s"		costs 4  position (+ 10 %column) (+ 38 %row) }
	{"tiger_p"				requires	"panzer4h"		costs 8  position (+ 6 %column) (+ 59 %row) }
	{"tiger1h"				requires	"panzer4h"		costs 10 position (+ 5 %column) (+ 62 %row) }
	{"ferdinand"			requires	"tiger1h"		costs 10 position (+ 5 %column) (+ 64 %row) }
	{"tiger1e_early"		requires	"tiger1h"		costs 5  position (+ 6 %column) (+ 61 %row) }
	{"tiger1e"				requires	"tiger1e_early"	costs 1  position (+ 6 %column) (+ 62 %row) }
	{"tiger1hunt"			requires	"tiger1e"		costs 5  position (+ 7 %column) (+ 63 %row) }
	{"sturmtiger"			requires	"tiger1e"		costs 10 position (+ 6 %column) (+ 65 %row) }
	{"tiger2p"				requires	"tiger1e"		costs 12 position (+ 8 %column) (+ 62 %row) }
	{"tiger2h"				requires	"tiger2p"		costs 6  position (+ 8 %column) (+ 63 %row) }
	{"jagdtiger"			requires	"tiger2h"		costs 6  position (+ 8 %column) (+ 64 %row) } ;//SE, LIB
;TOTAL:
)