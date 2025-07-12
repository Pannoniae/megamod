(define "items_light_pol"
	{item "7x57b" "ammo" 30	 {value 1}}
	{item "7,5x54" "ammo" 50  {value 2}}
	{item "9x19b" "ammo" 24	 {value 1}}
	{item "8x50" "ammo" 8  {value 2}}
	{item "7x107" "ammo" 4  {value 5}}
	{item "rifle_grenade" "ammo" 2  {value 5}}
	{item "pol" "mortar81" "he" "ammo" 5  {value 5}}
	{item "pol" "mortar81" "he" "ammo" 5  {value 5}}
	{item "mortar46_pol" "ammo" 4  {value 5}}
	;// Grenade
	{item "grenade" "poland_o33" 1  {value 5}}
	{item "grenade" "poland_z33" 1  {value 5}}
	{item "grenade" "smoke" 1  {value 5}}
	{item "grenade" "poland_et38" 1  {value 10}}
)
(define "items_medic_pol"
	{item "bandage_pol"	1  {value 1}}
)
(define "items_heavy_pol"
	{item "bullet20_pol" "zenite" "ammo" 10  {value 5}}
	{item "bullet37_pol" "ap" "ammo" 3  {value 5}}
	{item "bullet37_pol" "he" "ammo" 3  {value 5}}
	{item "bullet37_fra" "ap" "ammo" 3  {value 5}}
	{item "bullet37_fra" "he" "ammo" 3  {value 5}}
	{item "bullet40_pol" "zenite" "ap" "ammo" 10  {value 5}}
	{item "bullet40_pol" "zenite" "he" "ammo" 10  {value 5}}
	{item "bullet47_pol" "aphe" "ammo" 3  {value 5}}
	{item "bullet47_pol" "he" "ammo" 3  {value 5}}
	{item "bullet75_pol" "ap" "ammo" 2  {value 5}}
	{item "bullet75_pol" "he" "ammo" 2  {value 5}}
	{item "bullet105_pol" "he" "ammo" 1  {value 10}}
	{item "bullet105_pol" "sm" "ammo" 1 {value 20}}
	{item "bullet120_pol" "he" "ammo" 1  {value 10}}
	{item "bullet155_pol" "he" "ammo" 1  {value 20}}
)
(define "pol_box_ammo_inf"
	{extender "supply_zone"
		{resupply
			("items_light_pol")
			("items_medic_pol")
		}
		{mechanicResources {amount 10}{value 10}}
		{radius 			7.5}	;// resupply radius in meter
		{resupplyPeriod 	2}		;// resupply period in seconds
		{regenerationPeriod 10}		;// regeneration period in seconds, +1 supply every x seconds (0 = no regeneration)
		{limit 				200}	;// max number of resupplies (0 = unlimited)
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.3}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)

(define "pol_box_ammo"
	{extender "supply_zone"
		{resupply
			("items_light_pol")
			("items_medic_pol")
			("items_heavy_pol")
		}
		{radius 			10}		;// resupply radius in meter
		{resupplyPeriod 	2}		;// resupply period in seconds
		{regenerationPeriod 10}		;// regeneration period in seconds, +1 supply every x seconds (0 = no regeneration)
		{limit 				%supply}	;// max number of resupplies (0 = unlimited)
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.25}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)

(define "pol_truck_ammo"
	{extender "supply_zone"
		{resupply
			("items_light_pol")
			("items_medic_pol")
		}
		{mechanicResources {amount 10}{value 10}}
		{radius 			12}		;// resupply radius in meter
		{resupplyPeriod 	2}		;// resupply period in seconds
		{regenerationPeriod 10}		;// regeneration period in seconds, +1 supply every x seconds (0 = no regeneration)
		{limit 				500}	;// max number of resupplies (0 = unlimited)
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.3}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)
(define "pol_truck_ammo_art"
	{extender "supply_zone"
		{resupply
			("items_light_pol")
			("items_medic_pol")
			("items_heavy_pol")		
		}
		{radius 			12}			;// resupply radius in meter
		{resupplyPeriod 	2}			;// resupply period in seconds
		{regenerationPeriod 10}			;// regeneration period in seconds, +1 supply every x seconds (0 = no regeneration)
		{limit 				1000}		;// max number of resupplies (0 = unlimited)
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.3}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)
(define "pol_box_ammo_art"
	{extender "supply_zone"
		{resupply
			{item "pol" "mortar81" "he" "ammo" 5  {value 5}}
			{item "pol" "mortar81" "he" "ammo" 5  {value 5}}
			{item "mortar46_pol" "ammo" 4  {value 5}}
			;			
			("items_heavy_pol")
		}
		{radius 			7.5}	;// resupply radius in meter
		{resupplyPeriod 	2}		;// resupply period in seconds
		{regenerationPeriod 10}		;// regeneration period in seconds, +1 supply every x seconds (0 = no regeneration)
		{limit 				250}	;// max number of resupplies (0 = unlimited)
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.3}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)
(define "pol_para_ammo"
	{extender "supply_zone"
		{resupply
			("items_light_pol")
			("items_medic_pol")
		}
		{radius 			6}		;resupply radius in meter
		{resupplyPeriod 	5}		;resupply period in seconds
		{regenerationPeriod 0}		;regeneration period in seconds, +1 supply every x seconds (0 = no regeneration)
		{limit 				75}		;max number of resupplies (0 = unlimited)
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.3}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)