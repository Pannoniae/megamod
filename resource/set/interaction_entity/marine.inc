{"marine"
	{on spawn
		{add_view	"smoke_black"			"on_move"	"FX_smoke"}
		{add_view	"wash_ship_stop"		"on_stead"	"FX_bulb_small_center1"}
		{add_view	"wash_ship_stop"		"on_stead"	"FX_bulb_small_center2"}
		{add_view	"wash_ship_stop"		"on_stead"	"FX_bulb_small_center3"}
		{add_view	"wash_ship_stop"		"on_stead"	"FX_bulb_small_center4"}
		{add_view	"wash_ship_stop"		"on_stead"	"FX_bulb_small_center5"}
		{add_view	"wash_ship_stop"		"on_stead"	"FX_bulb_small_center6"}
		{add_view	"wash_ship_stop"		"on_stead"	"FX_bulb_small_center7"}
		{add_view	"wash_ship_stop"		"on_stead"	"FX_bulb_small_center8"}
		{add_view	"wash_ship_stop"		"on_stead"	"FX_bulb_small_center9"}
		{add_view	"wash_ship_stop"		"on_stead"	"FX_bulb_small_center10"}
		{add_view	"wash_ship_stop"		"on_stead"	"FX_bulb_norm_front1"}
		{add_view	"wash_ship_stop"		"on_stead"	"FX_bulb_norm_front2"}
		{add_view	"wash_ship_stop"		"on_stead"	"FX_bulb_norm_engine1"}
		{add_view	"wash_ship_motion"		"on_move"	"FX_bulb_small_center1"}
		{add_view	"wash_ship_motion"		"on_move"	"FX_bulb_small_center2"}
		{add_view	"wash_ship_motion"		"on_move"	"FX_bulb_small_center3"}
		{add_view	"wash_ship_motion"		"on_move"	"FX_bulb_small_center4"}
		{add_view	"wash_ship_motion"		"on_move"	"FX_bulb_small_center5"}
		{add_view	"wash_ship_motion"		"on_move"	"FX_bulb_small_center6"}
		{add_view	"wash_ship_motion"		"on_move"	"FX_bulb_small_center7"}
		{add_view	"wash_ship_motion"		"on_move"	"FX_bulb_small_center8"}
		{add_view	"wash_ship_motion"		"on_move"	"FX_bulb_small_center9"}
		{add_view	"wash_ship_motion"		"on_move"	"FX_bulb_small_center10"}
		{add_view	"wash_ship_motion"		"on_move"	"FX_bulb_small_back1"}
		{add_view	"wash_ship_motion"		"on_move"	"FX_bulb_small_back2"}
		{add_view	"wash_front_small"		"on_move"	"FX_bulb_small_front1"}
		{add_view	"wash_front_small"		"on_move"	"FX_bulb_small_front2"}
		{add_view	"wash_front_norm"		"on_move"	"FX_bulb_norm_front1"}
		{add_view	"wash_front_norm"		"on_move"	"FX_bulb_norm_front2"}
		{add_view	"wash_ship_motion_norm"	"on_move"	"FX_bulb_norm_front1"}
		{add_view	"wash_ship_motion_norm"	"on_move"	"FX_bulb_norm_front2"}
		{add_view	"wash_engine_small"		"on_move"	"FX_bulb_small_engine1"}
		{add_view	"wash_engine_small"		"on_move"	"FX_bulb_small_engine2"}
		{add_view	"wash_engine_norm"		"on_move"	"FX_bulb_norm_engine1"}

		{add_view	"wash_engine_small"		"on_splash"	"FX_bulb_norm_front1"}
		{add_view	"wash_engine_small"		"on_splash"	"FX_bulb_norm_front2"}
		{add_view	"wash_engine_small"		"on_splash"	"FX_bulb_small_center1"}
		{add_view	"wash_engine_small"		"on_splash"	"FX_bulb_small_center2"}
		{add_view	"wash_engine_small"		"on_splash"	"FX_bulb_small_center3"}
		{add_view	"wash_engine_small"		"on_splash"	"FX_bulb_small_center4"}
		{add_view	"wash_engine_small"		"on_splash"	"FX_bulb_small_center5"}
		{add_view	"wash_engine_small"		"on_splash"	"FX_bulb_small_center6"}
		{view start "on_stead"}
		{ani_play "drift" loop}
		{link_sound "flame" "fire/loops/big"}
		{tags add "marine"}
		{call "init_gun"}
		{call "water_check"}

		{call "add_exhaustview"}
	}

	{on "add_exhaustview"
		{add_view	"exhaust_dark_small"			"exhaust"			"FXsmoke1"} ;// engine exhaust
		{add_view	"exhaust_dark_small"			"exhaust"			"FXsmoke2"} ;// engine exhaust
		{add_view	"exhaust_dark_small"			"exhaust2"			"FXsmoke1"} ;// idle exhaust
		{add_view	"exhaust_dark_small"			"exhaust2"			"FXsmoke2"} ;// idle exhaust
	}

	{on "init_gun"
		{add_view "flash_gun_big_vehicle"	"flashbarrel4"	"Foresight4"}
		{add_view "flash_gun_big_vehicle"	"flashbarrel5"	"Foresight5"}
		{add_view "flash_gun_big_vehicle"	"flashbarrel6"	"Foresight6"}
		{add_view "tank_canon_fire_verysmall" "flashbarrel12"	"Foresight1"}
		{add_view "tank_canon_fire_verysmall" "flashbarrel11"	"Foresight2"}
	}

	{on move on
		{view start "on_move"}
		{view pause "on_stead"}
		{ani_play "drift" 1.5 loop resume}
		{ani_play "move" loop}
		{play_sound "move"}
		{delay 5 "accelerate"
			{ani_play "drift" 2 loop resume}
		}
	}

	{on move off
		{view start "on_stead"}
		{view pause "on_move"}
		{stop_sound "move"}
		{kill_delay "accelerate"}
		{ani_play "drift" loop resume}
		{ani_stop "move"}
		{view pause "on_splash"}
	}

	{on animation_event "splash"			;// event created by animation
		{if velocity 6
			{tags add "splash"}
			{view start "on_splash"}
			{delay 0.9
				{tags remove "splash"}
				;{view pause "on_splash"}
			}
		else
			{view pause "on_splash"}
		}
	}

	{on grounded on					;// entity completely stopped moving on the ground and physics is disabled
		{if "sinking"
			{impulse up 0.1}
		else
			{ani_stop "drift"}
			{ani_stop "move"}
		}
	}

	{on grounded off
		{if not "sinking"
			{ani_play "drift" loop}
		}
	}

	{on "cut_parts"
		(define "cut_part"
			{tear "piece_large_steel" bone %0
				{impulse up 8 1 dir 5 2 cx 5 2 cy 5 2 rnd_dir 10 no_position}
;				{add_view "smoke_dead_wheel" "smoke" "basis"}
;				{view start "smoke"}
				{delay_effect 20 5 "stop"}
				{tags add "marine_part"}
				{delay 10 {if under_water {delete}}}
			}
		)
		("cut_part" args "part1")
		("cut_part" args "part2")
		("cut_part" args "part3")
		("cut_part" args "part4")
		("cut_part" args "part5")
		("cut_part" args "part6")
		("cut_part" args "part7")
		("cut_part" args "part8")
	}

	{on "sunk"
		{if not tagged "sunk"
			{tags add "sunk"}
			{call "break_float"}
			{able select 0}
			{able repaired 0}
			{reset_manual_control}
			{tags add "no_scavenge"}
			{delay 0.5 {crew_emit}}
			{delay 3 {crew_emit}}
			{delay 5 {crew_emit}}
			{delay 7 {crew_emit}}
			{delay 9 {crew_emit}}
			{delay 15 {kill_crew}}
		}
	}

	{on "break_float"
		{call "sinking"}
		{call "flooding"}
		;{impulse up 0.2}
		{ani_stop "drift"}
		{chassis_work 0}
		{volumes disable obstacle}
		{area disable}
	}

	{on "sinking"
		{delay 3
			{able "sinking" 1}
			{for_each_link
				{able "sinking" 1}
			}
		}
	}

	{on "flooding"
		{volumes "float" disable all}
	}

	{on contact
		{if not impregnable
			{if effector_velocity 20
				{if effector "big"
					{call "contact_big_marine"}
				else effector "big2"
					{call "contact_big_marine"}
				}
			else 
				;{call "flip_check"}
			}
		}
	}

	{##on "flip_check"
		{call "check_water_level"}
		{delay 0.5 "flip_check"
			{if not tagged "destroyed"
				{if not tagged "sunk"
					{call "flip_check"}
				}
			}
		}
	}

	{on pierce sync
		{vehicle_health_damage_pierce}
	}

	{on "check_water_level" overload}	;// disables standard water level check height from vehicle.inc so custom ones can be set per boat
	{on "check_speed" overload}			;// disables standard speed check from vehicle.inc

	(define "sink_volume"
		{delay %1
			{volumes %0 disable float}
			{if tagged "sunk" {impulse up -0.001}}
			{tags add %0}
		}
	)

	(define "float_volume"
		{volumes %0 enable float}
	)

	(define "component_break"
		{if component %0
			("sink_volume" args %1 0)
		}
	)

	(define "component_restore"
		{if component %0
			("float_volume" args %1)
		}
	)
}

{"boat"
	{on "add_movement_sound" overload
		;{link_sound "move"				"vehicle/tracks/d3"}
		;{link_sound "move_end"			"vehicle/tracks/d3_end"}
		{link_sound "engine_full"		"vehicle/marine/d3"}
		{link_sound "engine_stop"		"vehicle/marine/d3_end"}
		{link_sound "exhaust"			"vehicle/marine/d3_up"}
	}
	(define "tear_marine_part"
		{components "%0" destroy}
		{tear "piece_large_steel" bone "%0"
;			{impulse up 5 2.3 dir 3 1.5 cx 5 2 cy 5 2 rnd_dir 10 no_position}
		}
	)

	(define "sink_volume"
		{delay %1 1
			{volumes %0 disable float bullet blast}
			{impulse up 0.2}
		}
	)
	(define "sink_sequence"
		{call "sinking"}
		{impulse up 0.2}
		("sink_volume" args %0 %1)
		("sink_volume" args %2 %3)
		("sink_volume" args %4 %5)
		("sink_volume" args %6 %7)
		{delay 3
			{call "light_flash"}
			{delay 0.7 0.1
				{kill_delay "light_flash"}
				{call "light_off"}
			}
		}
	)
	{on "light_flash"
		{delay 0 "light_flash"
			{if rand 0.3
				{if "light_on"
					{call "light_off"}
					{set "light_on" 0}
				else
					{call "light_on"}
					{set "light_on" 1}
				}
			}
			{call "light_flash"}
		}
	}

	{on break
		{if component "body_front"
			{call "break_body"}
		else component "body"
			{call "break_body"}
		else component "body_rear"
			{call "break_body"}
		}
	}
	{on "break_body"
		{if component "body_front"
			("sink_sequence" args "ballast1" 2 "ballast3" 4 "ballast2" 7 "ballast4" 8)
		}
		{if component "body"
			("sink_sequence" args "ballast3" 2 "ballast1" 4 "ballast4" 7 "ballast2" 8)
		}
		{if component "body_rear"
			;("torpedo_detonate" args torpedo1)
			;("torpedo_detonate" args torpedo2)
			("sink_sequence" args "ballast2" 2 "ballast4" 4 "ballast3" 7 "ballast1" 8)
		}
	}
	{on "explosion_sequence"
		{if not "explode"
			("sink_sequence" args "ballast2" 2 "ballast4" 4 "ballast3" 7 "ballast1" 8)
			{set "explode" 1}
			{spawn "marine_die" "fx_exp1"}
			{delay 0.3 0.1
				{spawn "marine_die" "fx_exp2"}
				{blastwave c4 8 r0 5 r1 6 bone "fx_exp2"}
				{components "body_rear" destroy}
				{delay 0.3 0.1
					{volumes "float" disable float bullet blast}
					{components "body" destroy}
					{call "cut_parts"}
					{spawn "marine_die" "fx_exp3"}
					{blastwave c4 8 r0 5 r1 6 bone "fx_exp3"}
					{call "explosion"}
					{delay 0.3 0.1
						{spawn "marine_die" "fx_exp4"}
						{blastwave c4 8 r0 5 r1 6 bone "fx_exp4"}
						{components "body_front" destroy}
					}
				}
			}
			{for_each_link
				{delay_effect 1 0.5 "explosion"}
			}
		}
	}
}

{"boat big"
	(define "body_break_fx"
		{set "body_%0_broken" 1}
		{spawn "marine_die" "fire_%02"}
		{add_view "smoke_dead_norm"		"fire_%0"		"fire_%01"}
		{add_view "smoke_dead_norm"		"fire_%0"		"fire_%02"}
		{add_view "smoke_dead_norm"		"fire_%0"		"fire_%03"}
		{add_view "smoke_dead_norm"		"fire_%0"		"fire_%04"}
		{add_view "smoke_dead_norm"		"fire_%0"		"fire_%05"}
		{add_view "smoke_dead_norm"		"fire_%0"		"fire_%06"}
		{add_view "smoke_dead_small"	"smoke_%0"		"smoke_%01"}
		{add_view "smoke_dead_small"	"smoke_%0"		"smoke_%02"}
		{add_view "smoke_dead_small"	"smoke_%0"		"smoke_%03"}
		{add_view "smoke_dead_small"	"smoke_%0"		"smoke_%04"}
		{add_view "smoke_dead_small"	"smoke_%0"		"smoke_%05"}
		{add_view "smoke_dead_small"	"smoke_%0"		"smoke_%06"}
		{add_view "smoke_dead_small"	"smoke_%0"		"smoke_%07"}
		{add_view "smoke_dead_small"	"smoke_%0"		"smoke_%08"}
		{add_view "smoke_black_big4"	"fire_%0"		"fx_fire_%0_big01"}
		{add_view "smoke_black_big4"	"fire_%0"		"fx_fire_%0_big02"}
		{add_view "smoke_black_big4"	"fire_%0"		"fx_fire_%0_big03"}
		{add_view "smoke_dead_norm_nl"	"fire_%0"		"fx_fire_%001"}
		{add_view "smoke_dead_norm_nl"	"fire_%0"		"fx_fire_%002"}
		{add_view "smoke_dead_norm_nl"	"fire_%0"		"fx_fire_%003"}
		{add_view "smoke_dead_norm_nl"	"fire_%0"		"fx_fire_%004"}
		{add_view "smoke_dead_norm_nl"	"fire_%0"		"fx_fire_%005"}
		{add_view "smoke_dead_norm_nl"	"fire_%0"		"fx_fire_%006"}
		{add_view "smoke_dead_small"	"smoke_%0"		"fx_smoke_%001"}
		{add_view "smoke_dead_small"	"smoke_%0"		"fx_smoke_%002"}
		{add_view "smoke_dead_small"	"smoke_%0"		"fx_smoke_%003"}
		{add_view "smoke_dead_small"	"smoke_%0"		"fx_smoke_%004"}
		{add_view "smoke_dead_small"	"smoke_%0"		"fx_smoke_%005"}
		{add_view "smoke_dead_small"	"smoke_%0"		"fx_smoke_%006"}
		{add_view "smoke_dead_small"	"smoke_%0"		"fx_smoke_%007"}
		{add_view "smoke_dead_small"	"smoke_%0"		"fx_smoke_%008"}
		{view start "fire_%0"}
		{view start "smoke_%0"}
		{play_sound "flame" 1}
	)
	{on "cut_parts"
		{delay 0.1
			("sink_sequence" args "ballast2" 0.2 "ballast4" 0.8 "ballast3" 1.5 "ballast1" 1.5)
			{volumes disable contact blast}
		}
	}
	{on "update_moveable" overload}
	{on "break_body" overload
		{if component "body_front"
			("body_break_fx" args front)
		else component "body"
			("body_break_fx" args center)
		else component "body_rear"
			("body_break_fx" args rear)
		}
		{if "body_front_broken"
			{if "body_center_broken"
				{if "body_rear_broken"
					{delay 5 1
						{call "explosion_sequence"}
						{tags add "explosion_sequence"}
					}
				}
			}
		}
	}
}

{"air-bag"
	{on "add_exhaustview" overload
		{add_view	"exhaust_dark_big_diesel"			"on_move"	"fxsmoke1"}
	}
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/lct"}
		{link_sound "engine_full"		"vehicle/marine/airbag"}
		{link_sound "engine_stop"		"vehicle/marine/airbag_end"}
		{link_sound "exhaust"			"vehicle/marine/airbag_up"}
	}
	{on break
		{crew_emit}
		{delay 1.5
			{call "break_float"}
			{crew_emit}
		}
	}
	{on "check_water_level"
		{if water_level 0.25
			{call "sunk"}
		}
		{if water_level 3
			{delete}
		}
	}
	{on "contact_big_marine"
		{component break}
	}
}

{"ya5_k"
	{on fire "dshk_mgunF" {view start "flashbarrel5"}}
	{on fire "dshk_mgunB" {view start "flashbarrel6"}}

	{on "check_water_level"
		{if water_level 0.5
			{call "sunk"}
		}
		{if water_level 4
			{delete}
		}
	}
}

{"lca"
	{on spawn
		{link_sound "mid"		"weapon/shot/reactive/d2/GER/Panzerfaust/"}
		{link_sound "far"		"weapon/shot/reactive/d3/GER/Panzerfaust/"}
	}
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/lca/start"}
		{link_sound "engine_stop"		"vehicle/engine/lca/stop"}
		{link_sound "engine_idle"		"vehicle/engine/lca/idle"}
		{link_sound "engine_full"		"vehicle/engine/lca/full"}
		{link_sound "exhaust"			"vehicle/engine/lca/exhaust"}
		{link_sound "move"			"vehicle/marine/overlay/move/"}
	}
	{on fire "gun"
		{play_sound "mid"}
		{play_sound "far"}
	}
	{on break_armor overload}
	;{on "update_moveable" overload}
	;{on "check_work_mover" overload}

	{on "check_water_level" overload
		{if water_level 0.3
			{able "sinking" 1}
			{call "sunk"}
			{tags add "no_scavenge"}
		else
			{able "sinking" 0}
		}
	}

	(define "sink_sequence"
		{if broken %0
			{if broken %1
				("sink_volume" args %2 %3)
				("sink_volume" args %4 %5)
				("sink_volume" args %6 %7)
				("sink_volume" args %8 %9)
				("sink_volume" args %10 %11)
				("sink_volume" args %12 %13)
				{tags add "true"}
			}
		}
	)

	{on "check_flooding"
		("sink_sequence" args "body1" "body2" "ballast3" 1 "ballast4" 3.5 "ballast5" 3.5 "ballast6" 5.5 "ballast7" 6 "ballast8" 7.5) ;Front 2
		("sink_sequence" args "body7" "body8" "ballast5" 1 "ballast6" 3.5 "ballast3" 3.5 "ballast4" 5.5 "ballast1" 6 "ballast2" 7.5) ;Rear 2

		("sink_sequence" args "body1" "body3" "ballast5" 1 "ballast8" 1.0 "ballast2" 4.5 "ballast7" 4.5 "ballast4" 5.5 "ballast6" 7.5) ;Front Left 2
		("sink_sequence" args "body2" "body4" "ballast6" 1 "ballast7" 1.0 "ballast1" 4.5 "ballast8" 4.5 "ballast3" 5.5 "ballast5" 7.5) ;Front Right 2
		
		("sink_sequence" args "body3" "body5" "ballast1" 1 "ballast8" 1.0 "ballast2" 4.5 "ballast7" 4.5 "ballast4" 5.5 "ballast6" 7.5) ;Mid Left 2
		("sink_sequence" args "body4" "body6" "ballast2" 1 "ballast7" 1.0 "ballast1" 4.5 "ballast8" 4.5 "ballast3" 5.5 "ballast5" 7.5) ;Mid Right 2

		("sink_sequence" args "body5" "body7" "ballast3" 1 "ballast2" 1.0 "ballast1" 4.5 "ballast8" 4.5 "ballast6" 5.5 "ballast4" 7.5) ;Rear Left 2
		("sink_sequence" args "body6" "body8" "ballast4" 1 "ballast1" 1.0 "ballast2" 4.5 "ballast7" 4.5 "ballast5" 5.5 "ballast3" 7.5) ;Front Right 2
	}

	{on "flooding" overload
;		("sink_volume" args "ballast1" 1)
;		("sink_volume" args "ballast2" 2)
;		("sink_volume" args "ballast3" 3)
;		("sink_volume" args "ballast4" 4)
;		("sink_volume" args "ballast5" 5)
;		("sink_volume" args "ballast6" 6)
;		("sink_volume" args "ballast7" 7)
;		("sink_volume" args "ballast8" 8)
	}

	{on break overload
		{impulse up 0.01}
		("component_break" args "body1" "ballast1")
		("component_break" args "body2" "ballast2")
		("component_break" args "body3" "ballast3")
		("component_break" args "body4" "ballast4")
		("component_break" args "body5" "ballast5")
		("component_break" args "body6" "ballast6")
		("component_break" args "body7" "ballast7")
		("component_break" args "body8" "ballast8")
		{if not tagged "sunk"
			{call "check_flooding"}
		}
	}

	{on repair
		("component_restore" args "body1" "ballast1")
		("component_restore" args "body2" "ballast2")
		("component_restore" args "body3" "ballast3")
		("component_restore" args "body4" "ballast4")
		("component_restore" args "body5" "ballast5")
		("component_restore" args "body6" "ballast6")
		("component_restore" args "body7" "ballast7")
		("component_restore" args "body8" "ballast8")
	}
}

{"goatley_boat"
	{on spawn
		{link_sound "idle"		"vehicle/marine/overlay/idle/"}
		{link_sound "move"		"vehicle/marine/overlay/move/"}
		{if not tagged "hidden"
			{call "play_idle_sound"}
		}
	}

	{on "play_idle_sound"
		{play_sound "idle" 1}
	}
	{on operatable on
		{call "idle_animation"}
	}

	{on operatable off
		{call "kill_idle_delays"}
	}

	{on break
		{if component "body"
			{call "sunk"}
		}
	}

	{on "cut_parts"
		{gravity 0.1}
	}
	{on destroy}

	{on "sunk" overload
		{if not tagged "sunk"
			{tags add "sunk"}
			{call "sink_sequence"}
			{able "sinking" 1}
			{able select 0}
			{able repaired 0}
			{reset_manual_control}
			{delay 0.5 {crew_emit}}
			{delay 3 {crew_emit}}
		}
	}

	{on "sink_sequence"
		{impulse up 0.001}
		{delay 0.1				;// short delay else gravity won't work
			{volumes "ballast0" disable float}
			{gravity 0.02}
		}
		{delay 5
			{call "break_float"}
			{gravity 0.1}
		}
	}

	{on grounded on
		{if water_level 1
			{if tagged "sunk"
				{delay 1 {delete}}
			}
		}
	}

	{on "check_water_level" overload
		{##if water_level 0.3
			{able "sinking" 1}
			{call "sunk"}
		else
			{able "sinking" 0}
		}
	}

	{on "explosion_blastwave" overload}

	{on move on
		{tags add "row"}
		{delay 1
			{stop_sound "idle"}
			{play_sound "move" 1}
		}
		{if move_forward
			{call "move_forward_animation"}
			{for_each_link {tags add "forward"}}
			{for_each_link {tags remove "backward"}}
		else
			{call "move_backward_animation"}
			{for_each_link {tags add "backward"}}
			{for_each_link {tags remove "forward"}}
		}
	}

	{on move off
		{tags remove "row"}
		{play_sound "idle" 1}
		{stop_sound "move"}
		{if move_forward
			{call "end_row_forward_animation"}
		else
			{call "end_row_backward_animation"}
		}
		;{call "end_row_animation"}
		{call "idle_animation"}
	}

	{on "stop_idle_animation"
		("crew_ani_stop" crew(driver) ani(goatley_crew_l_idle) extra())
		("crew_ani_stop" crew(seat2) ani(goatley_crew_l_idle) extra())
		("crew_ani_stop" crew(seat4) ani(goatley_crew_l_idle) extra())
		("crew_ani_stop" crew(seat6) ani(goatley_crew_l_idle) extra())
		("crew_ani_stop" crew(seat8) ani(goatley_crew_l_idle) extra())
		("crew_ani_stop" crew(seat1) ani(goatley_crew_r_idle) extra())
		("crew_ani_stop" crew(seat3) ani(goatley_crew_r_idle) extra())
		("crew_ani_stop" crew(seat5) ani(goatley_crew_r_idle) extra())
		("crew_ani_stop" crew(seat7) ani(goatley_crew_r_idle) extra())
		("crew_ani_stop" crew(seat9) ani(goatley_crew_r_idle) extra())
	}

	{on "move_forward_animation"
		;// stops delays for future idle calls
		{call "kill_idle_delays"}

		;// stops idles if in progress
		{call "stop_idle_animation"}

		;// calling this before loop starts makes transition smoother between idle to loop
		{call "end_row_forward_animation"}

		;// start rowing animation loop
		("crew_ani_loop" crew(driver) ani(goatley_crew_l_row_1) extra())
		("crew_ani_loop" crew(seat2) ani(goatley_crew_l_row_5) extra())
		("crew_ani_loop" crew(seat4) ani(goatley_crew_l_row_2) extra())
		("crew_ani_loop" crew(seat6) ani(goatley_crew_l_row_4) extra())
		("crew_ani_loop" crew(seat8) ani(goatley_crew_l_row_3) extra())
		("crew_ani_loop" crew(seat1) ani(goatley_crew_r_row_5) extra())
		("crew_ani_loop" crew(seat3) ani(goatley_crew_r_row_1) extra())
		("crew_ani_loop" crew(seat5) ani(goatley_crew_r_row_3) extra())
		("crew_ani_loop" crew(seat7) ani(goatley_crew_r_row_2) extra())
		("crew_ani_loop" crew(seat9) ani(goatley_crew_r_row_4) extra())
	}

	{on "end_row_forward_animation"
		;// stops rowing animation loop by playing 1x rowing animation
		("crew_ani_play" crew(driver) ani(goatley_crew_l_row_1) extra(resume))
		("crew_ani_play" crew(seat2) ani(goatley_crew_l_row_5) extra(resume))
		("crew_ani_play" crew(seat4) ani(goatley_crew_l_row_2) extra(resume))
		("crew_ani_play" crew(seat6) ani(goatley_crew_l_row_4) extra(resume))
		("crew_ani_play" crew(seat8) ani(goatley_crew_l_row_3) extra(resume))
		("crew_ani_play" crew(seat1) ani(goatley_crew_r_row_5) extra(resume))
		("crew_ani_play" crew(seat3) ani(goatley_crew_r_row_1) extra(resume))
		("crew_ani_play" crew(seat5) ani(goatley_crew_r_row_3) extra(resume))
		("crew_ani_play" crew(seat7) ani(goatley_crew_r_row_2) extra(resume))
		("crew_ani_play" crew(seat9) ani(goatley_crew_r_row_4) extra(resume))
	}

	{on "move_backward_animation"
		;// stops delays for future idle calls
		{call "kill_idle_delays"}

		;// stops idles if in progress
		{call "stop_idle_animation"}

		;// calling this before loop starts makes transition smoother between idle to loop
		{call "end_row_backward_animation"}

		;// start rowing animation loop
		("crew_ani_loop" crew(driver) ani(goatley_crew_l_row_1) extra(-1 ))
		("crew_ani_loop" crew(seat2) ani(goatley_crew_l_row_5) extra(-1 ))
		("crew_ani_loop" crew(seat4) ani(goatley_crew_l_row_2) extra(-1 ))
		("crew_ani_loop" crew(seat6) ani(goatley_crew_l_row_4) extra(-1 ))
		("crew_ani_loop" crew(seat8) ani(goatley_crew_l_row_3) extra(-1 ))
		("crew_ani_loop" crew(seat1) ani(goatley_crew_r_row_5) extra(-1 ))
		("crew_ani_loop" crew(seat3) ani(goatley_crew_r_row_1) extra(-1 ))
		("crew_ani_loop" crew(seat5) ani(goatley_crew_r_row_3) extra(-1 ))
		("crew_ani_loop" crew(seat7) ani(goatley_crew_r_row_2) extra(-1 ))
		("crew_ani_loop" crew(seat9) ani(goatley_crew_r_row_4) extra(-1 ))
	}

	{on "end_row_backward_animation"
		;// stops rowing animation loop by playing 1x rowing animation
		("crew_ani_play" crew(driver) ani(goatley_crew_l_row_1) extra(-1 resume))
		("crew_ani_play" crew(seat2) ani(goatley_crew_l_row_5) extra(-1 resume))
		("crew_ani_play" crew(seat4) ani(goatley_crew_l_row_2) extra(-1 resume))
		("crew_ani_play" crew(seat6) ani(goatley_crew_l_row_4) extra(-1 resume))
		("crew_ani_play" crew(seat8) ani(goatley_crew_l_row_3) extra(-1 resume))
		("crew_ani_play" crew(seat1) ani(goatley_crew_r_row_5) extra(-1 resume))
		("crew_ani_play" crew(seat3) ani(goatley_crew_r_row_1) extra(-1 resume))
		("crew_ani_play" crew(seat5) ani(goatley_crew_r_row_3) extra(-1 resume))
		("crew_ani_play" crew(seat7) ani(goatley_crew_r_row_2) extra(-1 resume))
		("crew_ani_play" crew(seat9) ani(goatley_crew_r_row_4) extra(-1 resume))
	}

	{on "idle_animation"
		{if not tagged "row"
			("crew_ani_play_delay" crew(driver) ani(goatley_crew_l_idle) time(3) delay(idle1) extra())
			("crew_ani_play_delay" crew(seat2) ani(goatley_crew_l_idle) time(8) delay(idle2) extra())
			("crew_ani_play_delay" crew(seat4) ani(goatley_crew_l_idle) time(6) delay(idle3) extra())
			("crew_ani_play_delay" crew(seat6) ani(goatley_crew_l_idle) time(10) delay(idle4) extra())
			("crew_ani_play_delay" crew(seat8) ani(goatley_crew_l_idle) time(1) delay(idle5) extra())

			("crew_ani_play_delay" crew(seat1) ani(goatley_crew_r_idle) time(1) delay(idle6) extra())
			("crew_ani_play_delay" crew(seat3) ani(goatley_crew_r_idle) time(3) delay(idle7) extra())
			("crew_ani_play_delay" crew(seat5) ani(goatley_crew_r_idle) time(7) delay(idle8) extra())
			("crew_ani_play_delay" crew(seat7) ani(goatley_crew_r_idle) time(9) delay(idle9) extra())
			("crew_ani_play_delay" crew(seat9) ani(goatley_crew_r_idle) time(5) delay(idle0) extra())

			{delay 16 2 "idle"
				{call_synced "idle_animation"}
			}
		}
	}

	{on "kill_idle_delays"
		{kill_delay "idle"}
		{kill_delay "idle0"}
		{kill_delay "idle1"}
		{kill_delay "idle2"}
		{kill_delay "idle3"}
		{kill_delay "idle4"}
		{kill_delay "idle5"}
		{kill_delay "idle6"}
		{kill_delay "idle7"}
		{kill_delay "idle8"}
		{kill_delay "idle9"}
	}
}