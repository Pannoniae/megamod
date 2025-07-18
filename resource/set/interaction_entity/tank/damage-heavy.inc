

;/*=========== Piercing Probability Begin ===========*/

{on pierce sync
	("damage_process_pierce" staff(ptr)					;// Anti-Tank Rifles (Must be first because ptr also have bullet tag)
		tag_test(0)
		crew_shock_chance(1)
		crew_shock_time(1)
		kill_crew(0.1)
		pen_fx(auto)
		pen_sound(bullet)
	)

	("damage_process_pierce" staff(bullet)				;// hmgun/mgun/rifle/smg/pistol
		tag_test(0)
		crew_shock_chance(0)
		crew_shock_time(0)
		kill_crew(0.05)
		pen_fx(bullet)
		pen_sound(none)
	)

	("damage_process_pierce" staff(20to25)				;// 20-25mm Auto-Cannons
		tag_test(0)
		crew_shock_chance(1)
		crew_shock_time(2)
		kill_crew(0.1)
		pen_fx(auto)
		pen_sound(bullet)
	)

	("damage_process_pierce" staff(37to40)				;// 37-40mm Auto-Cannons
		tag_test(0)
		crew_shock_chance(1)
		crew_shock_time(3)
		kill_crew(0.2)
		pen_fx(37_57)
		pen_sound(small)
	)

	("damage_process_pierce" staff(37to47_he_filler)	;// 37-47mm Shells with HE filler
		tag_test(0)
		crew_shock_chance(1)
		crew_shock_time(4)
		kill_crew(0.4)
		pen_fx(37_57)
		pen_sound(small)
	)

	("damage_process_pierce" staff(37to47)				;// 37-47mm Shells NO HE filler
		tag_test(0)
		crew_shock_chance(1)
		crew_shock_time(3)
		kill_crew(0.3)
		pen_fx(37_57)
		pen_sound(small)
	)

	("damage_process_pierce" staff(50to57_he_filler)	;// 50-57mm Shells with HE filler
		tag_test(0)
		crew_shock_chance(1)
		crew_shock_time(6)
		kill_crew(0.5)
		pen_fx(37_57)
		pen_sound(small)
	)

	("damage_process_pierce" staff(50to57)				;// 50-57mm Shells NO HE filler
		tag_test(0)
		crew_shock_chance(1)
		crew_shock_time(5)
		kill_crew(0.4)
		pen_fx(37_57)
		pen_sound(small)
	)

	("damage_process_pierce" staff(size2_heat_shell)	;// 75to76 HEAT Shells
		tag_test(0)
		crew_shock_chance(1)
		crew_shock_time(4)
		kill_crew(0.45)
		pen_fx(75_105_heat)
		pen_sound(medium)
	)

	("damage_process_pierce" staff(75to76_he_filler)	;// 75to76 Shells with HE filler
		tag_test(0)
		crew_shock_chance(1)
		crew_shock_time(7)
		kill_crew(0.6)
		pen_fx(75_105)
		pen_sound(medium)
	)

	("damage_process_pierce" staff(75to76)				;// 75-76mm Shells NO HE filler
		tag_test(0)
		crew_shock_chance(1)
		crew_shock_time(6)
		kill_crew(0.5)
		pen_fx(75_105)
		pen_sound(medium)
	)

	("damage_process_pierce" staff(size3_heat_shell)	;// 85-105mm HEAT Shells
		tag_test(0)
		crew_shock_chance(1)
		crew_shock_time(6)
		kill_crew(0.55)
		pen_fx(75_105_heat)
		pen_sound(medium)
	)

	("damage_process_pierce" staff(88to105_he_filler)	;// 85-105mm Shells with HE filler
		tag_test(0)
		crew_shock_chance(1)
		crew_shock_time(8)
		kill_crew(0.7)
		pen_fx(75_105)
		pen_sound(medium)
	)

	("damage_process_pierce" staff(88to105)				;// 85-105mm Shells NO HE filler
		tag_test(0)
		crew_shock_chance(1)
		crew_shock_time(7)
		kill_crew(0.6)
		pen_fx(75_105)
		pen_sound(medium)
	)

	("damage_process_pierce" staff(122to128)			;// 122-128mm Shells with HE filler
		tag_test(0)
		crew_shock_chance(1)
		crew_shock_time(10)
		kill_crew(1.0)
		pen_fx(120_152)
		pen_sound(large)
	)

	("damage_process_pierce" staff(size4_heat_shell)	;// 150-152mm HEAT Shells
		tag_test(0)
		crew_shock_chance(1)
		crew_shock_time(7)
		kill_crew(0.85)
		pen_fx(120_152_heat)
		pen_sound(large)
	)

	("damage_process_pierce" staff(150to152)			;// 150-152mm Shells with HE filler
		tag_test(0)
		crew_shock_chance(1)
		crew_shock_time(11)
		kill_crew(1.0)
		pen_fx(120_152)
		pen_sound(large)
	)

	("damage_process_pierce" staff(cumulative_charge)	;// HEAT Grenades (RPG40, RPG43, PWM1)
		tag_test(0)
		crew_shock_chance(1)
		crew_shock_time(6)
		kill_crew(0.6)
		pen_fx(37_57)
		pen_sound(small)
	)

	("at_grenade_pierce"								;// HEAT Grenades (RPG40, RPG43, PWM1)
		pierce_body_brake(1)
		pierce_body_destroy(0.25)
		pierce_engine_brake(1)
	)

	("damage_process_pierce" staff(rocketlauncher)		;// Bazooka Class weapons (RPG's)
		tag_test(0)
		crew_shock_chance(1)
		crew_shock_time(6)
		kill_crew(0.6)
		pen_fx(75_105_heat)
		pen_sound(small)
	)

	{set "pierced_processed" 0}							;// clears check that is set if one of the above ammo types penetrates
}

;/*=========== Piercing Probability End ===========*/

;/*=========== Blastwave Probability Begin ===========*/

{on blast sync 							;// higher energy must be first
	("damage_process_blast"
		blast_energy(9)					;// 150 HE and Up, Dynamite, Air Bombs
		crew_shock_chance(1)
		crew_shock_time(10)
		kill_crew(0.5)
	)
	("damage_process_blast"
		blast_energy(7)					;// 100mm HE - 130mm HE
		crew_shock_chance(1)
		crew_shock_time(8)
		kill_crew(0.25)
	)
	("damage_process_blast"
		blast_energy(5)					;// 85mm HE - 93mm HE, AT Mine, 12cm Mortar
		crew_shock_chance(0.75)
		crew_shock_time(4)
		kill_crew(0)
	)
	("damage_process_blast"
		blast_energy(3.5)				;// 75mm HE - 77mm HE
		crew_shock_chance(0.5)
		crew_shock_time(0)
		kill_crew(0)
	)
	("damage_process_blast"
		blast_energy(2)					;// 37mm HE - 65mm HE, 8cm Mortar, RPG's
		crew_shock_chance(0)
		crew_shock_time(0)
		kill_crew(0)
	)
	("damage_process_blast"
		blast_energy(0.9)				;// AP Mine, Most Grenades, 5cm Mortar
		crew_shock_chance(0)
		crew_shock_time(0)
		kill_crew(0)
	)
}

{on break_armor
	("at_grenade_blast"					;// Explosive AT Grenades (M24 Geballteladung, Hafthohlladung)
		pierce_body_brake(1)
		pierce_engine_brake(1)
	)
	("at_mine_blast"					;// Explosive AT Mines
		pierce_body_brake(0)
		pierce_engine_brake(1)
	)
}

{on break_armor_again
	("at_grenade_blast"					;// Explosive AT Grenades (M24 Geballteladung, Hafthohlladung)
		pierce_body_brake(0.25)
		pierce_engine_brake(0.25)
	)
	("at_mine_blast"					;// Explosive AT Mines
		pierce_body_brake(0.25)
		pierce_engine_brake(0.25)
	)
}

;/*=========== Blastwave Probability End ===========*/
