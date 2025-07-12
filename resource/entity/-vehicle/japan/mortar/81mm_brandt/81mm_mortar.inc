	(include "/properties/cannon_mgun.ext")
	(include "/properties/shadow/tank.inc"  scale(0.6))
	{Extension "81mm_brandt.mdl"}
	{props "-mg_stan" "with_gun" "mortar" "vision_lev01_can" "detect_artillery_small" "cannon_sandbag_standard" }
	(mod not "mp" {able "emit_on_attack"})
	{targetclass "howitzer"}
	{targetSelector "cannon_howitzer"}

	{sensor
		{visor "main"
			{vision "cannon_mortar"}
			{bone "visor"}
		}
	}
	{placer
		{place "gunner" {visor "main"}}
	}
	{boarder
		{anm "gunner"
			{forward {end "pose_mortar_gunner" 10}}
		}
		{anm "commander"
			{forward {end "pose_mortar_commander" 10}}
		}
		{anm "driver1"	;// gunner
			{forward {end "mortar_driver_r" 10}}
		}
		{anm "driver2"	;// charger
			{forward {end "mortar_driver_l" 10}}
		}
	}

	{extender "cannon"
		{animation
			{switch "close"}
			;// "gunner" "commander"
			{move "mortar_driver_r" "mortar_driver_l"}
			{aim "mortar_gunner_aim" "mortar_commander_aim"}
			{fire "mortar_gunner_fire" "mortar_commander_fire"}
			{reload "" "mortar_commander_reload"}
		}
		{move {obstacle "close"}}
		{attack {obstacle "open"}}
	}

	{mass 59}
	{Chassis
		("mobility_cannon"
			speed(12) ;----------------------------------Max speed.
			weight(59) ;---------------------------------Weight in Kilograms.
		)
	}

	{bone "basis"
		{speed2 15}
	}
	{bone "turret"
		{limits -10 10}
		{speed2 20}
	}
	{bone "foresight"
		{limits -25 20}
		{speed2 10}
	}
