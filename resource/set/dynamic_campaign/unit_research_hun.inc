(define "research_hun"
; ---SQUADS---

	;---->
	{"single_officer(hun)"			requires	""								costs 1 position (+ 0 %column) (+ 3 %row) }
	{"single_sniper(hun)"			requires	"single_officer(hun)"			costs 1 position (+ 2 %column) (+ 2 %row) }
	{"mechanized_infantry_hun"		requires 	"single_sniper(hun)"			costs 2 position (+ 4 %column) (+ 2 %row) }
	{"csaba39m_com"					requires	"mechanized_infantry_hun"		costs 2 position (+ 6 %column) (+ 2 %row) }

	;//---Off Map Support---
	{"10cm_37m_smoke_barrage"			requires	"single_officer(hun)"				costs 1 position (+ 1 %column) (+ 4 %row) }
	{"81mm_brandt_hun_mortar_barrage"	requires	"10cm_37m_smoke_barrage"			costs 1 position (+ 3 %column) (+ 4 %row) }
	{"10cm_37m_artillery_barrage"		requires	"81mm_brandt_hun_mortar_barrage"	costs 1 position (+ 5 %column) (+ 4 %row) }
	{"15cm_feldhaubitze_artillery_barrage"	requires	"csaba39m_com"					costs 1 position (+ 8 %column) (+ 3 %row) }
		
	{"conquest_fi156_hun"			requires	"single_officer(hun)"			costs 1 position (+ 0 %column) (+ 5 %row) }
	{"conquest_ca101_b_50"			requires	"conquest_fi156_hun"			costs 1 position (+ 4 %column) (+ 5 %row) }
	{"conquest_ca101_b"				requires	"conquest_ca101_b_50"			costs 1 position (+ 6 %column) (+ 5 %row) }

	;---->
	{"single_auxiliary(hun)"		requires	""								costs 0 position (+ 0 %column) (+ 7 %row) }
	{"single_medic(hun)"			requires	"single_auxiliary(hun)"			costs 1 position (+ 1 %column) (+ 6 %row) }
	{"squad_light(hun)"				requires	"single_auxiliary(hun)"			costs 1 position (+ 2 %column) (+ 7 %row) }
	{"squad_regular(hun)"			requires	"squad_light(hun)"				costs 2 position (+ 4 %column) (+ 7 %row) }
	{"squad_pionier(hun)"			requires	"squad_regular(hun)"			costs 2 position (+ 5 %column) (+ 6 %row) }
	{"squad_stormtrooper(hun)"		requires	"squad_regular(hun)"			costs 3 position (+ 5 %column) (+ 8 %row) }
	{"squad_laszlo(hun)"			requires	"squad_regular(hun)"			costs 2 position (+ 6 %column) (+ 7 %row) }
	
	;---->
	
	{"single_riflegrenade(hun)"		requires	""								costs 1 position (+ 1 %column) (+ 9 %row) }
	{"single_at(hun)"				requires	"single_riflegrenade(hun)"		costs 1 position (+ 3 %column) (+ 9 %row) }
	{"single_bazooker(hun)"			requires	"single_at(hun)"				costs 2 position (+ 6 %column) (+ 9 %row) }
	

	;---->
	{"single_engineer(hun)"			requires	""								costs 1 position (+ 0 %column) (+ 11 %row) }
	{"single_ap_miner(hun)"			requires	"single_engineer(hun)"			costs 1 position (+ 2 %column) (+ 10 %row) }
	{"single_at_miner(hun)"			requires	"single_ap_miner(hun)"			costs 1 position (+ 4 %column) (+ 10 %row) }
	{"single_flamer(hun)"			requires	"single_engineer(hun)"			costs 1 position (+ 3 %column) (+ 11 %row) }
	{"mercedesl3000_eng"			requires	"single_engineer(hun)"			costs 2 position (+ 2 %column) (+ 12 %row) }
	{"sdkfz7_hun"					requires	"mercedesl3000_eng"				costs 2 position (+ 4 %column) (+ 12 %row) }

	; ---MG---
	{"single_mg(hun)"				requires	""								costs 1 position (+ 0 %column) (+ 13 %row) }
	{"schwarzlose_8mm"				requires 	"single_mg(hun)"				costs 1 position (+ 2 %column) (+ 13 %row) }
	{"schwarzlose_8mm_aa"			requires 	"schwarzlose_8mm"				costs 1 position (+ 4 %column) (+ 13 %row) }
	
	
	; ---Mortars---
	{"single_mortar(hun)"			requires	""								costs 1 position (+ 1 %column) (+ 14 %row) }
	{"81mm_brandt_hun"				requires 	"single_mortar(hun)"			costs 1 position (+ 3 %column) (+ 14 %row) }


	; ---AA---
	{"4cm_bofors_36m"				requires	""								costs 2 position (+ 0 %column) (+ 15 %row) }
	{"nimrod"						requires 	"4cm_bofors_36m"				costs 8 position (+ 2 %column) (+ 15 %row) }
	{"8cm_bofors_29m"				requires	"4cm_bofors_36m"				costs 7 position (+ 4 %column) (+ 16 %row) }

	; ---AT Guns---
	{"2cm_solothurn_hun"			requires	""								costs 1 position (+ 0 %column) (+ 16 %row) }
	{"4cm_40m"						requires	"2cm_solothurn_hun"				costs 1 position (+ 1 %column) (+ 17 %row) }
	{"5cm_38m"						requires	"4cm_40m"						costs 2 position (+ 3 %column) (+ 17 %row) }
	{"7_5cm_pak97_38_hun"			requires	"5cm_38m"						costs 1 position (+ 5 %column) (+ 17 %row) }
	{"21cm_44m_buzoganyveto"		requires	"7_5cm_pak97_38_hun"			costs 5 position (+ 6 %column) (+ 16 %row) }
	{"7_5cm_40m"					requires	"7_5cm_pak97_38_hun"			costs 4 position (+ 8 %column) (+ 17 %row) }

	; ---Infantry Guns---
	{"8cm_feldkanone"				requires 	"4cm_40m"						costs 2 position (+ 2 %column) (+ 18 %row) }

	; ---Artillery---
	{"10cm_37m"						requires	"8cm_feldkanone"				costs 4 position (+ 4 %column) (+ 18 %row) }
	{"15cm_feldhaubitze"			requires	"10cm_37m"						costs 3 position (+ 6 %column) (+ 18 %row) }
	{"15cm_43m"						requires	"10cm_37m"						costs 3 position (+ 6 %column) (+ 19 %row) }
	{"21cm_39m"						requires	"15cm_feldhaubitze"				costs 6 position (+ 8 %column) (+ 19 %row) }
	
	;---Trucks---	
	{"inf_crate_hun"				requires	""								costs 0 position (+ 0 %column) (+ 21 %row) }
	{"botond"						requires	"inf_crate_hun"					costs 1 position (+ 2 %column) (+ 21 %row) }
	{"mercedesl3000"				requires	"botond"						costs 1 position (+ 3 %column) (+ 20 %row) }
	{"hansa_lloyd"					requires	"mercedesl3000"					costs 2 position (+ 5 %column) (+ 20 %row) }
	{"mercedesl3000_fuel"			requires	"botond"						costs 1 position (+ 4 %column) (+ 21 %row) }
	{"mercedesl3000_art"			requires	"botond"						costs 2 position (+ 3 %column) (+ 22 %row) }

	
	;---Armored Cars---
	{"csaba40m"						requires 	""								costs 2 position (+ 0 %column) (+ 23 %row) }
	{"csaba39m" 					requires 	"csaba40m"						costs 1 position (+ 2 %column) (+ 23 %row) }

	; ---Light Tanks---
	{"toldi1"						requires 	""								costs 1 position (+ 0 %column) (+ 24 %row) }
	{"pzkpfw38t_hun"				requires 	"toldi1"						costs 3 position (+ 2 %column) (+ 24 %row) }
	{"hetzer_hun"					requires 	"pzkpfw38t_hun"					costs 10 position (+ 5 %column) (+ 23 %row) }
	{"toldi2"						requires 	"toldi1"						costs 3 position (+ 4 %column) (+ 24 %row) }
	{"toldi2_late"					requires 	"toldi2"						costs 2 position (+ 6 %column) (+ 24 %row) }
	
	
	; ---Medium Tanks---
	{"turan1"						requires 	"toldi2"						costs 2 position (+ 4 %column) (+ 25 %row) }
	{"turan2"						requires 	"turan1"						costs 7 position (+ 5 %column) (+ 27 %row) }
	{"turan2_late"					requires 	"turan2"						costs 2 position (+ 6 %column) (+ 26 %row) }
	{"turan3"						requires 	"turan2"						costs 4 position (+ 7 %column) (+ 28 %row) }
	{"marder2_hun"					requires 	"turan2"						costs 2 position (+ 8 %column) (+ 27 %row) }
	{"pz3m_hun"						requires 	"turan1"						costs 6 position (+ 4 %column) (+ 29 %row) }
	{"pz4f_hun"						requires 	"pz3m_hun"						costs 3 position (+ 6 %column) (+ 29 %row) }
	{"stug3g_hun"					requires 	"pz3m_hun"						costs 4 position (+ 8 %column) (+ 29 %row) }
	{"pz4h_hun"						requires 	"pz4f_hun"						costs 3 position (+ 6 %column) (+ 30 %row) }

	
	; ---Heavy Tanks---
	{"pz6e_hun"						requires 	"pz4h_hun"						costs 7 position (+ 8 %column) (+ 31 %row) }

	; ---Self Propelled Guns---
	
	{"zrinyi1"						requires 	"turan2_late"					costs 4 position (+ 7 %column) (+ 25 %row) }
	{"zrinyi2"						requires 	"zrinyi1"						costs 2 position (+ 8 %column) (+ 24 %row) }
	
)