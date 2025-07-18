
;/*=========== Mines Begin ==========*/

{"mine"
	{inflammation_time 3}
	{on spawn
		{volumes "body1" disable all}
		{add_view "mined_view_own"		"mined_own"		"mined_view"}
		{add_view "mined_view_enemy"	"mined_enemy"	"mined_view"}
		{add_view "mined_view_defused"	"defused"		"mined_view"}
		{call "change_state"}
	}
	{on "explosion"
		{if mined
			{tags remove "mine_planted"}
			{volumes "body1" disable blast}
			{volumes "body" disable blast}
			{stuff_detonate}
		}
	}
	{on "change_state"
		{if mined
			{tags add "mine_planted"}
			{volumes "body1" disable all}
			{volumes "body1" enable blast}
			{volumes "body" enable select touch contact}
			{volumes "body" disable blast}

		else tagged "grounded"
			{volumes "body1" enable blast}

		else
			{tags remove "mine_planted"}
			{volumes "body1" enable select touch contact contact_ground blast}
			{volumes "body" disable all}
		}
	}
	{on blast_hit
		{if mined
			{if min_energy 3
				{stuff_detonate}
			}
		else
			{if min_energy 0.8
				{stuff_detonate}
			}
		}
	}
	{on bullet_hit
		{if not mined
			{stuff_detonate}
		}
	}
}

{"mine antipersonnel"
	{on contact
		{if mine_effector "human"
			{call "explosion"}
		else mine_effector "vehicle"
			{call "explosion"}
		else mine_effector "animal"
			{call "explosion"}
		}
	}
}

{"mine grenade"
	{on contact overload
		{if mine_effector "human"
			{call "explosion"}
		else mine_effector "vehicle"
			{if mined
				{volumes disable contact}
				{delay 0.20
					{call "explosion"}
				}
			}
		else mine_effector "mine_exploder"
			{delay 0
				{call "explosion"}
			}
		else mine_effector "animal"
			{call "explosion"}
		}
	}
}

{"mine antitank"
	{on contact
		{if mine_effector "mine_exploder"
			{delay 0
				{call "explosion"}
			}
		else mine_effector "vehicle"
			{if mined
				{volumes disable contact}
				{delay 0.20
					{call "explosion"}
				}
			}
		}
	}
}

{"mine bounding"
	{on contact overload
		{if mine_effector "human"
			{call "bound"}
		else mine_effector "vehicle"
			{call "explosion"}
		else mine_effector "animal"
			{call "bound"}
		}
	}
	(define "bound"
		{on "bound"
			{if mined
				;{delete}
				;{spawn "%0" "antipersonal_mine" x
					{link_sound "jump" "detonation/small/smine"}
					{play_sound "jump"}
					{physics_work 1}
					{volumes "body" disable all}
					{volumes "body1" disable all}
					{impulse up 5.5 0.1 com}
					{delay 0.5
						{stuff_detonate}
					}
				;}
			}
		}
	)
}

{"mine bounding mine_s"
	("bound" args mine_s)
}
{"mine bounding mine_m2"
	("bound" args mine_m2)
}


;/*=========== Mines End ==========*/

;/*=========== Explosive Charges Begin ==========*/

{"dynamite"
	{on "undermine"
		{tags add "dynamite_planted"}
		{call "fuse_lit"}
		{delay 1
			{explosive 1}
		}
		{volumes disable touch select}
	}
	{on "onThrow"
		{if stuff_activated
			{call "fuse_lit"}
			{volumes disable touch select}
		}
	}
	{on "fuse_lit"
		{tags add "fuse"}
		{add_view "flash_fuse_small" "fire" "fire"}
		{view start "fire"}
		{ani_play "fire" 0.06}
	}
	{on blast
		{if min_energy 0.25
			{stuff_detonate}
		}
	}
	{on "explosion"
		{stuff_detonate}
	}
}

{"dynamite mission"					;// for mission scripting. Explosive that doesn't explode when planted by scripted to remote detonate
	{on spawn
		{if tagged "radio_fuse"
			{add_view "mined_view_own" "mined_own" "mined_view" not_manual not_scenario}
		}
	}
	{on "fuse_lit" overload}
	{on "undermine"
		{tags add "radio_fuse"}
		{delay 0.5
			{add_view "mined_view_own" "mined_own" "mined_view" not_manual not_scenario}
		}
	}
}
;/*=========== Explosive Charges End ==========*/

;/*=========== Bombs Begin ==========*/

{"air_bomb"
	{on "explosion"
		{stuff_detonate}
	}
	{on spawn
		{if air
			{impulse up 0.01 rnd_dir 3 com}
			{ani_play "start"}
			{volumes disable bullet}
			{delay 1
				{volumes enable contact}
			}
		}
	}
	{on ground_hit
		{if min_speed 10
			{call "explosion"}
		}
	}
	{on contact
		{if min_speed 8
			{call "explosion"}
		}
	}
}


;/*=========== Bombs End ==========*/

;/*=========== Artillery Begin ==========*/

{"offmap_dummy"			;// Helper that spawns firing sounds and falling shells after delay
	(define "offmap"
		{on spawn overload
			{start_sound "weapon/shot/ambient_cannon"}
			{delay 5
				{start_sound "weapon/shot/mortar/whistle"}
				{delay 1
					{start_sound "weapon/shot/artillery"}
					{spawn %0 offset -250 0 1000}
					{hide 1}
				}
			}
		}
	)
}

{"offmap_dummy 105 generic"
	("offmap" args "artillery_single_105")
}

{"offmap_dummy 105_vt"
	("offmap" args "artillery_single_105_vt")
}

{"offmap_dummy 150 generic"
	("offmap" args "artillery_single_150")
}

{"offmap_dummy 155"
	("offmap" args "artillery_single_155")
}

{"offmap_dummy 155_vt"
	("offmap" args "artillery_single_155_vt")
}

{"offmap_dummy 180 generic"
	("offmap" args "artillery_single_180")
}

{"offmap_dummy 203"
	("offmap" args "artillery_single_203")
}

{"offmap_dummy 203_vt"
	("offmap" args "artillery_single_203_vt")
}

{"offmap_dummy 240"
	("offmap" args "artillery_single_240")
}

{"artillery_shell"			;// Settings for all shells that fall to ground
	{on spawn
		{add_view "pfaust_tail" "trace" "tail"}
		{view start "trace"}
		{impulse up -56.25 forward 15 rnd_dir 3 com}
	}
	{on ground_hit sync
		{call "explosion"}
	}
	{on contact
		{call "explosion"}
	}
	{on "explosion"
		{stuff_detonate}
	}
}

{"artillery_shell 105_vt"			;// fragment pattern for airburst
	{on ground_hit sync overload
		{volumes "body" disable all}
		(mod "mp"
			{call "explosion"}
		)
		(mod not "mp"
			{delay 0.05 0.05
				{call "explosion"}
			}
		)
	}
	{on "explosion"
		{if terrain_fx "snow"
			{spawn "ex_air_fragments_size3_snow"}
		else terrain_fx "ice"
			{spawn "ex_air_fragments_size3_snow"}
		else terrain_fx "water"
			{spawn "ex_air_fragments_size3_water"}
		else terrain_fx "shallow_water"
			{spawn "ex_air_fragments_size3_water"}
		else terrain_fx "deep_water"
			{spawn "ex_air_fragments_size3_water"}
		else
			{spawn "ex_air_fragments_size3"}
		}
	}
}
{"artillery_shell 155_vt"			;// fragment pattern for airburst
	{on ground_hit sync overload
		{volumes "body" disable all}
		(mod "mp"
			{call "explosion"}
		)
		(mod not "mp"
			{delay 0.05 0.05
				{call "explosion"}
			}
		)
	}
	{on "explosion"
		{if terrain_fx "snow"
			{spawn "ex_air_fragments_size4_snow"}
		else terrain_fx "ice"
			{spawn "ex_air_fragments_size4_snow"}
		else terrain_fx "water"
			{spawn "ex_air_fragments_size4_water"}
		else terrain_fx "shallow_water"
			{spawn "ex_air_fragments_size4_water"}
		else terrain_fx "deep_water"
			{spawn "ex_air_fragments_size4_water"}
		else
			{spawn "ex_air_fragments_size4"}
		}
	}
}
{"artillery_shell 203_vt"			;// fragment pattern for airburst
	{on ground_hit sync overload
		{volumes "body" disable all}
		(mod "mp"
			{call "explosion"}
		)
		(mod not "mp"
			{delay 0.05 0.05
				{call "explosion"}
			}
		)
	}
	{on "explosion"
		{if terrain_fx "snow"
			{spawn "ex_air_fragments_size5_snow"}
		else terrain_fx "ice"
			{spawn "ex_air_fragments_size5_snow"}
		else terrain_fx "water"
			{spawn "ex_air_fragments_size5_water"}
		else terrain_fx "shallow_water"
			{spawn "ex_air_fragments_size5_water"}
		else terrain_fx "deep_water"
			{spawn "ex_air_fragments_size5_water"}
		else
			{spawn "ex_air_fragments_size5"}
		}
	}
}

(define "rnd_art_bomb"
	{delay %delay 0.5
		{spawn "%shell" random_position %postion}
	}
)

(define "8x2_barrage"
	{on spawn
		{if not tagged "fired"
			{tags add "fired"}

			("rnd_art_bomb" delay(0.5) shell(%shell) postion(%postion))
			("rnd_art_bomb" delay(1.0) shell(%shell) postion(%postion))
			("rnd_art_bomb" delay(1.5) shell(%shell) postion(%postion))
			("rnd_art_bomb" delay(2.0) shell(%shell) postion(%postion))
			("rnd_art_bomb" delay(2.5) shell(%shell) postion(%postion))
			("rnd_art_bomb" delay(3.0) shell(%shell) postion(%postion))
			("rnd_art_bomb" delay(3.5) shell(%shell) postion(%postion))
			("rnd_art_bomb" delay(4.0) shell(%shell) postion(%postion))

			("rnd_art_bomb" delay(13.5) shell(%shell) postion(%postion))
			("rnd_art_bomb" delay(14.0) shell(%shell) postion(%postion))
			("rnd_art_bomb" delay(14.5) shell(%shell) postion(%postion))
			("rnd_art_bomb" delay(15.0) shell(%shell) postion(%postion))
			("rnd_art_bomb" delay(15.5) shell(%shell) postion(%postion))
			("rnd_art_bomb" delay(16.0) shell(%shell) postion(%postion))
			("rnd_art_bomb" delay(16.5) shell(%shell) postion(%postion))
			("rnd_art_bomb" delay(17.0) shell(%shell) postion(%postion))
			{hide 18}
		}
	}
)

(define "4x2_barrage"
	{on spawn
		{if not tagged "fired"
			{tags add "fired"}

			("rnd_art_bomb" delay(0.5) shell(%shell) postion(%postion))
			("rnd_art_bomb" delay(1.0) shell(%shell) postion(%postion))
			("rnd_art_bomb" delay(1.5) shell(%shell) postion(%postion))
			("rnd_art_bomb" delay(2.0) shell(%shell) postion(%postion))

			("rnd_art_bomb" delay(15.5) shell(%shell) postion(%postion))
			("rnd_art_bomb" delay(16.0) shell(%shell) postion(%postion))
			("rnd_art_bomb" delay(16.5) shell(%shell) postion(%postion))
			("rnd_art_bomb" delay(17.0) shell(%shell) postion(%postion))
			{hide 18}
		}
	}
)

(define "4x3_barrage"
	{on spawn
		{if not tagged "fired"
			{tags add "fired"}

			("rnd_art_bomb" delay(0.5) shell(%shell) postion(%postion))
			("rnd_art_bomb" delay(1.0) shell(%shell) postion(%postion))
			("rnd_art_bomb" delay(1.5) shell(%shell) postion(%postion))
			("rnd_art_bomb" delay(2.0) shell(%shell) postion(%postion))

			("rnd_art_bomb" delay(15.5) shell(%shell) postion(%postion))
			("rnd_art_bomb" delay(16.0) shell(%shell) postion(%postion))
			("rnd_art_bomb" delay(16.5) shell(%shell) postion(%postion))
			("rnd_art_bomb" delay(17.0) shell(%shell) postion(%postion))

			("rnd_art_bomb" delay(30.5) shell(%shell) postion(%postion))
			("rnd_art_bomb" delay(31.0) shell(%shell) postion(%postion))
			("rnd_art_bomb" delay(32.5) shell(%shell) postion(%postion))
			("rnd_art_bomb" delay(33.0) shell(%shell) postion(%postion))
			{hide 35}
		}
	}
)

(define "2x2_barrage"
	{on spawn
		{if not tagged "fired"
			{tags add "fired"}

			("rnd_art_bomb" delay(0.5) shell(%shell) postion(%postion))
			("rnd_art_bomb" delay(1.0) shell(%shell) postion(%postion))

			("rnd_art_bomb" delay(19.5) shell(%shell) postion(%postion))
			("rnd_art_bomb" delay(20.0) shell(%shell) postion(%postion))

			{hide 21}
		}
	}
)

(define "2x3_barrage" ;// >200mm
	{on spawn
		{if not tagged "fired"
			{tags add "fired"}

			("rnd_art_bomb" delay(0.5) shell(%shell) postion(%postion))
			("rnd_art_bomb" delay(1.0) shell(%shell) postion(%postion))

			("rnd_art_bomb" delay(19.5) shell(%shell) postion(%postion))
			("rnd_art_bomb" delay(20.0) shell(%shell) postion(%postion))

			("rnd_art_bomb" delay(39.5) shell(%shell) postion(%postion))
			("rnd_art_bomb" delay(40.0) shell(%shell) postion(%postion))

			{hide 41}
		}
	}
)

(define "3x3_barrage"		;// custom barrage used in liberation missions, requires effect start allowing to place via script first.
	{on spawn
		{tags add "_3x3_barrage"}
	}
	{on "start"
		{if not tagged "fired"
			{tags add "fired"}

			("rnd_art_bomb" delay(0.5) shell(%shell) postion(%postion))
			("rnd_art_bomb" delay(1.0) shell(%shell) postion(%postion))
			("rnd_art_bomb" delay(1.5) shell(%shell) postion(%postion))

			("rnd_art_bomb" delay(16.5) shell(%shell) postion(%postion))
			("rnd_art_bomb" delay(17.0) shell(%shell) postion(%postion))
			("rnd_art_bomb" delay(17.5) shell(%shell) postion(%postion))

			("rnd_art_bomb" delay(32.5) shell(%shell) postion(%postion))
			("rnd_art_bomb" delay(33.0) shell(%shell) postion(%postion))
			("rnd_art_bomb" delay(33.5) shell(%shell) postion(%postion))

			{hide 40}
			{delay 41 {delete}}
		}
	}
)

(define "smoke_barrage"
	{on spawn
		{if not tagged "fired"
			{tags add "fired"}
			("rnd_art_bomb" delay(0.5) shell(%shell) postion(%postion))
			("rnd_art_bomb" delay(1) shell(%shell) postion(%postion))
			("rnd_art_bomb" delay(1.5) shell(%shell) postion(%postion))
			("rnd_art_bomb" delay(2) shell(%shell) postion(%postion))
			("rnd_art_bomb" delay(2.5) shell(%shell) postion(%postion))
			("rnd_art_bomb" delay(3) shell(%shell) postion(%postion))
			{hide 18}
		}
	}
)

(define "std_mortar_barrage"
	{on spawn
		{if not tagged "fired"
			{tags add "fired"}
			("rnd_art_bomb" delay(2) shell(%shell) postion(%postion))
			("rnd_art_bomb" delay(4) shell(%shell) postion(%postion))
			("rnd_art_bomb" delay(6) shell(%shell) postion(%postion))
			("rnd_art_bomb" delay(8) shell(%shell) postion(%postion))
			("rnd_art_bomb" delay(10) shell(%shell) postion(%postion))
			("rnd_art_bomb" delay(12) shell(%shell) postion(%postion))
			("rnd_art_bomb" delay(14) shell(%shell) postion(%postion))
			("rnd_art_bomb" delay(16) shell(%shell) postion(%postion))
			("rnd_art_bomb" delay(18) shell(%shell) postion(%postion))
			{hide 19}
		}
	}
)

(define "con_mortar_barrage"
	{on spawn
		{if not tagged "fired"
			{tags add "fired"}
			("rnd_art_bomb" delay(1) shell(%shell) postion(%postion))
			("rnd_art_bomb" delay(1) shell(%shell) postion(%postion))
			("rnd_art_bomb" delay(1) shell(%shell) postion(%postion))
			("rnd_art_bomb" delay(1) shell(%shell) postion(%postion))

			("rnd_art_bomb" delay(6) shell(%shell) postion(%postion))
			("rnd_art_bomb" delay(6) shell(%shell) postion(%postion))
			("rnd_art_bomb" delay(6) shell(%shell) postion(%postion))
			("rnd_art_bomb" delay(6) shell(%shell) postion(%postion))

			("rnd_art_bomb" delay(11) shell(%shell) postion(%postion))
			("rnd_art_bomb" delay(11) shell(%shell) postion(%postion))
			("rnd_art_bomb" delay(11) shell(%shell) postion(%postion))
			("rnd_art_bomb" delay(11) shell(%shell) postion(%postion))
			{hide 15}
		}
	}
)



{"artillery_barrage_105"
	("8x2_barrage" shell(artillery_single_105_dummy) postion(550))
}

{"artillery_barrage_105_vt"	;// 1 battery, 4 guns firing at maximum speed of 10 RPM with 4 rounds each
	("8x2_barrage" shell(artillery_single_105_vt_dummy) postion(550))
}

{"artillery_barrage_150"
	("4x2_barrage" shell(artillery_single_150_dummy) postion(550))
}

{"artillery_barrage_155"	;// 1 battery, 4 guns firing at maximum speed of 4 RPM with 4 rounds each
	("4x2_barrage" shell(artillery_single_155_dummy) postion(550))
}

{"artillery_barrage_155_vt" ;// 1 battery, 4 guns firing at maximum speed of 4 RPM with 4 rounds each
	("4x2_barrage" shell(artillery_single_155_vt_dummy) postion(550))
}

{"artillery_barrage_203" ;// 1 battery, 2 guns firing 3 shells each
	("2x2_barrage" shell(artillery_single_203_dummy) postion(400))
}

{"artillery_barrage_203_vt" ;// 1 battery, 2 guns firing 3 shells each
	("2x2_barrage" shell(artillery_single_203_vt_dummy) postion(400))
}

{"artillery_barrage_240" ;// 1 battery, 2 guns firing 3 shells each
	("2x2_barrage" shell(artillery_single_240_dummy) postion(400))
}

{"artillery_barrage_105_3x3" ;// custom barrage used in liberation missions, requires effect start allowing to place via script first.
	("3x3_barrage" shell(artillery_single_105_dummy) postion(550))
}

;//not used
{"artillery_barrage_105_vt_battalion"	;// 1 battalion, 12 guns firing at maximum speed of 10 RPM with 6 rounds each
	("8x2_barrage" shell(artillery_single_105_vt_dummy) postion(900))
}
{"artillery_barrage_155_vt_battalion"	;// 1 battalion, 12 guns firing at maximum speed of 4 RPM with 4 rounds each
	("4x2_barrage" shell(artillery_single_155_vt_dummy) postion(1000))
}
{"artillery_barrage_203_vt_battalion"	;// 1 battalion, 6 guns firing 2 shells each
	("8x2_barrage" shell(artillery_single_203_vt_dummy) postion(1000))
}
{"artillery_barrage_240_battalion"		;// 1 battalion, 6 guns firing 2 shells each
	("8x2_barrage" shell(artillery_single_240_dummy) postion(1000))
}

{"flare_artillery"					;// Flare that spawns shells that fall to ground. Off-map artillery
	{on spawn
		{add_view "smoke_flare_red" "smoke" "root"}
		{view start "smoke"}
		{tags add "flare_landed"}		;//tutorial mission script
		{delay 6 {spawn "artillery_barrage_105"}}
		{delay 31 {spawn "artillery_barrage_105"}}
		{delay 40 {view stop "smoke"}}
		{delay 40 {delete}}
	}
}
{"flare_artillery_105"				;// Flare that spawns shells that fall to ground. Off-map artillery
	{on spawn
		{add_view "smoke_flare_red" "smoke" "root"}
		{view start "smoke"}
		{delay 10 {spawn "artillery_barrage_105"}}
		{delay 36 {spawn "artillery_barrage_105"}}
		{delay 40 {view stop "smoke"}}
		{delay 40 {delete}}
	}
}
{"flare_artillery_105_vt"			;// Flare that spawns shells that fall to ground. Off-map artillery
	{on spawn
		{add_view "smoke_flare_red" "smoke" "root"}
		{view start "smoke"}
		{delay 10 {spawn "artillery_barrage_105_vt"}}
		{delay 36 {spawn "artillery_barrage_105_vt"}}
		{delay 40 {view stop "smoke"}}
		{delay 40 {delete}}
	}
}
{"flare_artillery_155"				;// Flare that spawns shells that fall to ground. Off-map artillery
	{on spawn
		{add_view "smoke_flare_red" "smoke" "root"}
		{view start "smoke"}
		{delay 10 {spawn "artillery_barrage_155"}}
		{delay 40 {view stop "smoke"}}
		{delay 40 {delete}}
	}
}
{"flare_artillery_155_vt"			;// Flare that spawns shells that fall to ground. Off-map artillery
	{on spawn
		{add_view "smoke_flare_red" "smoke" "root"}
		{view start "smoke"}
		{delay 10 {spawn "artillery_barrage_155_vt"}}
		{delay 40 {view stop "smoke"}}
		{delay 40 {delete}}
	}
}
{"flare_artillery_203"				;// Flare that spawns shells that fall to ground. Off-map artillery
	{on spawn
		{add_view "smoke_flare_red" "smoke" "root"}
		{view start "smoke"}
		{delay 10 {spawn "artillery_barrage_203"}}
		{delay 40 {view stop "smoke"}}
		{delay 40 {delete}}
	}
}
{"flare_artillery_203_vt"			;// Flare that spawns shells that fall to ground. Off-map artillery
	{on spawn
		{add_view "smoke_flare_red" "smoke" "root"}
		{view start "smoke"}
		{delay 10 {spawn "artillery_barrage_203_vt"}}
		{delay 40 {view stop "smoke"}}
		{delay 40 {delete}}
	}
}
{"flare_artillery_240"				;// Flare that spawns shells that fall to ground. Off-map artillery
	{on spawn
		{add_view "smoke_flare_red" "smoke" "root"}
		{view start "smoke"}
		{delay 10 {spawn "artillery_barrage_240"}}
		{delay 40 {view stop "smoke"}}
		{delay 40 {delete}}
	}
}
{"flare_mortar_60"					;// Flare that spawns shells that fall to ground. Off-map artillery
	{on spawn
		{add_view "smoke_flare_red" "smoke" "root"}
		{view start "smoke"}
		{delay 10 {spawn "mortar_barrage_60"}}
		{delay 28 {spawn "mortar_barrage_60"}}
		{delay 40 {view stop "smoke"}}
		{delay 40 {delete}}
	}
}
{"flare_mortar_81"					;// Flare that spawns shells that fall to ground. Off-map artillery
	{on spawn
		{add_view "smoke_flare_red" "smoke" "root"}
		{view start "smoke"}
		{delay 10 {spawn "mortar_barrage_81"}}
		{delay 33 {spawn "mortar_barrage_81"}}
		{delay 40 {view stop "smoke"}}
		{delay 40 {delete}}
	}
}

{"offmap_mortar"					;// Spawns delayed explosion (fake mortar)
	{on spawn
		{start_sound "projectile/Mortar/Incoming/"}
		{delay 1.5
			{stuff_detonate}
		}
	}
}

(define "mortar_fall"
	{on spawn overload
		{link_sound "Incoming" "projectile/Mortar/Incoming/"}
		{start_sound "weapon/shot/cannon/s2/d3/Shared/Mortar/" ambient}
		{delay 5
				{play_sound "Incoming"}
			{delay 0.5
				{spawn %0 offset -250 0 1000}
				{hide 1}
			}
		}
	}
)

{"mortar_single_60_dummy"			;// Shells that fall to ground. Source Off-map artillery
	("mortar_fall" args "mortar_single_60")
}
{"mortar_single_80_dummy"			;// Shells that fall to ground. Source Off-map artillery
	("mortar_fall" args "mortar_single_80")
}

{"mortar_single_81_dummy"			;// Shells that fall to ground. Source Off-map artillery
	("mortar_fall" args "mortar_single_81")
}

{"mortar_single_120_dummy"			;// Shells that fall to ground. Source Off-map artillery
	("mortar_fall" args "mortar_single_120")
}

{"mortar_barrage"					;// Flare that spawns timed explosions randomized in area
	("std_mortar_barrage" shell(mortar_single_120_dummy) postion(350))
}

{"mortar_barrage_60"				;// Flare that spawns timed explosions randomized in area, US 60mm mortar section, 3 mortars, 24 rounds barrage 1/4th of total
	("std_mortar_barrage" shell(mortar_single_60_dummy) postion(350)) ;//400
}

{"mortar_barrage_81"				;// Flare that spawns timed explosions randomized in area, US 81mm mortar section, 2 mortars, 25 rounds 1/4th of total
	("std_mortar_barrage" shell(mortar_single_81_dummy) postion(350)) ;//500
}


;/*=========== Artillery End ==========*/

;/*=========== Conquest Artillery Begin ==========*/


{"offmap_dummy 105_sm ger"
	("offmap" args "artillery_single_105_sm_ger")
}

{"offmap_dummy 105 ger"
	("offmap" args "artillery_single_105_ger")
}

{"offmap_dummy 150 ger"
	("offmap" args "artillery_single_150_ger")
}

{"offmap_dummy 122_sm rus"
	("offmap" args "artillery_single_122_sm_rus")
}

{"offmap_dummy 122 rus"
	("offmap" args "artillery_single_122_rus")
}

{"offmap_dummy 152 rus"
	("offmap" args "artillery_single_152_rus")
}

{"offmap_dummy 155 fin"
	("offmap" args "artillery_single_155_fin")
}

{"offmap_dummy 105_sm usa"
	("offmap" args "artillery_single_105_sm_usa")
}

{"offmap_dummy 105 usa"
	("offmap" args "artillery_single_105_usa")
}

{"offmap_dummy 155 usa"
	("offmap" args "artillery_single_155_usa")
}

{"mortar_barrage_80"
	("con_mortar_barrage" shell(mortar_single_80_dummy) postion(600))
}

{"mortar_barrage_120"
	("con_mortar_barrage" shell(mortar_single_120_dummy) postion(750))
}

{"smoke_barrage_105_ger"
	("smoke_barrage" shell(artillery_single_105_sm_ger_dummy) postion(750))
}

{"artillery_barrage_105_ger"
	("8x2_barrage" shell(artillery_single_105_ger_dummy) postion(1200))
}

{"artillery_barrage_150_ger"
	("8x2_barrage" shell(artillery_single_150_ger_dummy) postion(1400))
}

{"smoke_barrage_122_rus"
	("smoke_barrage" shell(artillery_single_122_sm_rus_dummy) postion(750))
}

{"artillery_barrage_122_rus"
	("8x2_barrage" shell(artillery_single_122_rus_dummy) postion(1200))
}

{"artillery_barrage_152_rus"
	("8x2_barrage" shell(artillery_single_152_rus_dummy) postion(1400))
}

{"artillery_barrage_155_fin"
	("8x2_barrage" shell(artillery_single_155_fin_dummy) postion(1400))
}

{"smoke_barrage_105_usa"
	("smoke_barrage" shell(artillery_single_105_sm_usa_dummy) postion(750))
}

{"artillery_barrage_105_usa"
	("8x2_barrage" shell(artillery_single_105_usa_dummy) postion(1200))
}

{"artillery_barrage_155_usa"
	("8x2_barrage" shell(artillery_single_155_usa_dummy) postion(1400))
}

(define "barrage_delay"
	{link_sound "click" "gui/pointer/"}
	{play_sound "click"}
	{delay %delay {spawn "%barrage"}}
)
(define "last_barrage_delay"
	{delay %delay {spawn "%barrage"} {delay 1 {delete}}}
)

{"conquest_mortar_barrage_80"
	{on spawn
		("barrage_delay" delay(5) barrage(mortar_barrage_80))
		("last_barrage_delay" delay(20) barrage(mortar_barrage_80))
	}
}

{"conquest_mortar_barrage_120"
	{on spawn
		("barrage_delay" delay(5) barrage(mortar_barrage_120))
		("last_barrage_delay" delay(20) barrage(mortar_barrage_120))
	}
}

{"conquest_smoke_barrage_105_ger"
	{on spawn
		{link_sound "click" "gui/pointer/"}
		{play_sound "click"}
		("last_barrage_delay" delay(10) barrage(smoke_barrage_105_ger))
	}
}

{"conquest_smoke_barrage_105_usa"
	{on spawn
		{link_sound "click" "gui/pointer/"}
		{play_sound "click"}
		("last_barrage_delay" delay(10) barrage(smoke_barrage_105_usa))
	}
}
{"conquest_smoke_barrage_122_rus"
	{on spawn
		{link_sound "click" "gui/pointer/"}
		{play_sound "click"}
		("last_barrage_delay" delay(10) barrage(smoke_barrage_122_rus))
	}
}

{"conquest_artillery_barrage_105_ger"
	{on spawn
		("barrage_delay" delay(15) barrage(artillery_barrage_105_ger))
		("last_barrage_delay" delay(40) barrage(artillery_barrage_105_ger))
	}
}

{"conquest_artillery_barrage_105_usa"
	{on spawn
		("barrage_delay" delay(15) barrage(artillery_barrage_105_usa))
		("last_barrage_delay" delay(40) barrage(artillery_barrage_105_usa))
	}
}

{"conquest_artillery_barrage_122_rus"
	{on spawn
		("barrage_delay" delay(15) barrage(artillery_barrage_122_rus))
		("last_barrage_delay" delay(40) barrage(artillery_barrage_122_rus))
	}
}

{"conquest_artillery_barrage_150_ger"
	{on spawn
		("barrage_delay" delay(20) barrage(artillery_barrage_150_ger))
		("last_barrage_delay" delay(45) barrage(artillery_barrage_150_ger))
	}
}

{"conquest_artillery_barrage_152_rus"
	{on spawn
		("barrage_delay" delay(20) barrage(artillery_barrage_152_rus))
		("last_barrage_delay" delay(45) barrage(artillery_barrage_152_rus))
	}
}

{"conquest_artillery_barrage_155_fin"
	{on spawn
		("barrage_delay" delay(20) barrage(artillery_barrage_155_fin))
		("last_barrage_delay" delay(45) barrage(artillery_barrage_155_fin))
	}
}

{"conquest_artillery_barrage_155_usa"
	{on spawn
		("barrage_delay" delay(20) barrage(artillery_barrage_155_usa))
		("last_barrage_delay" delay(45) barrage(artillery_barrage_155_usa))
	}
}


;/*=========== Conquest Artillery End ==========*/

;/*=========== Contaniers Begin ==========*/


{"explosive_barrel"			;// properties/barrel.ext
	{inflammation_time 4}
	{on break_armor
		{if name "pierce"
			{if stuff "bullet"
				{if stuff_filled "fuel" 20
					{call "explosion"}
				else stuff_filled "diesel" 20
					{call "explosion"}
				else stuff_filled "water" 20
					{burn fx "drops_water_small_short" fake}
				}
			
			else stuff "shell"
				{if stuff_filled "fuel" 20
					{call "explosion"}
				else stuff_filled "diesel" 20
					{call "explosion"}
				else 
					{call "break"}
				}
			}
		else name "blast"
			{call "break"}
		}
	}
	{on "burn_end"
		{tags add "burned"}
		{call "break"}
	}
	{on "break"
		{if tagged "burned"
			{if stuff_filled "fuel" 1
				{call "explosion"}
			else stuff_filled "diesel" 1
				{call "explosion"}
			else
				{spawn "car_die_particle"}
				{spawn "burned_spot01"		no_position}
				{hide 0.3}
			}
		else
			{if stuff_filled "fuel" 20
				{call "explosion"}
			else stuff_filled "diesel" 20
				{call "explosion"}
			else
				{spawn "car_die_particle"}
				{spawn "burned_spot01"		no_position}
				{hide 0.3}
			}
		}
	}
	{on "explosion"
		{if not tagged "explosioned"
			{tags add "explosioned"}
			{impulse up 9 5 dir 2 1 cx 0.6 0.5 cy 0.6 0.5 com}
			{blastwave c4 3 r0 4 r1 6}
			{fire radius 1.5 time 1.5 heating 5 effector}

			{spawn "barrel_die_big"}
			{spawn "car_die_particle"}
			{spawn "fire_shellhole"}
			{spawn "burned_spot_round2"		scale 0.45 random_orientation}		;// stamp

			{add_view "smoke_barrel" "smoke" "root"}
			{view start "smoke"}

			{delay 25
				{view stop "smoke"}
				{hide 1}
			}
		}
	}
	{on ground_hit
		{if tagged "explosioned"
			{blastwave c4 2 r0 4 r1 6}
			{spawn "fire_shellhole"}
		    {spawn "burned_spot01"		scale 0.50 random_orientation}		;// stamp
			{spawn "car_die_particle"}
			{spawn "barrel_die" offset 0 0 7}
			{delete}
		}
	}
}

{"explosion"
	{on "explosion"
		{stuff_detonate}
	}
	{on spawn
		{call "explosion"}
	}
}

{"explosive_stuff"			;// props for bombs, rockets, mortars, and cannon shells
	{inflammation_time 3}
	{on "burn_volume"
		{if volume "body"
			{stuff_detonate}
		}
	}
	{on pierce
		{if rand 0.2
			{call_synced "stuff_detonated"}
		}
	}
	{on blast_hit
		{if min_energy 2
			{stuff_detonate}
		else min_energy 1
			{if rand 0.5
				{call_synced "stuff_detonated"}
			}
		}
	}
	{on "stuff_detonated"
		{stuff_detonate}
	}
}

{"balloon"
	{##on break_armor
		{if name "blast"
			{if min_energy 3
				{bullet_detonate}
				{if stuff_filled "flame_thrower" 5
					{call "explosion"}
				}
			}
		}
	}
	{##on "explosion"
		{if not "explosioned"
			{set "explosioned" 1}
			{spawn "fuel_die"}
			{blastwave c4 10 r0 1 r1 1.5}
			{fire radius 6 time 2 heating 6}
			{delete}
		}
	}
}

;/*=========== Contaniers End ==========*/

;/*=========== Special Begin ==========*/

{"smoke activate"			;// ammo for vehicle smoke lauchers (50mm mortar smoke) that is not a grenade. Arms entity for detation specifically when launched from vehicle.
	{on "activate"			;// called via spawn through tank-main on "smoke_screen" event
		{tags add "activated"}
		{volumes "body" disable contact}
		{delay 0.1
			{volumes "body" enable contact}
		}
	}
	{on ground_hit
		{if tagged "activated"
			{stuff_detonate}
		}
	}
	{on contact
		{if tagged "activated"
			{stuff_detonate}
		}
	}
}

;/*=========== Special End ==========*/