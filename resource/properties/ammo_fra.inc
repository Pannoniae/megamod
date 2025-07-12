(define "items_light_fra"
	{item "7x17" "ammo" 9  {value 1}}
	{item "7x20" "ammo" 32  {value 1}}
	{item "8x27" "ammo" 6  {value 1}}
	{item "9x19b" "ammo" 32  {value 1}}
	{item "11x23" "ammo" 30  {value 1}}
	{item "7x56" "ammo" 47  {value 2}}
	{item "7,5x54" "ammo" 20  {value 2}}
	{item "7x63" "ammo" 50  {value 2}}
	{item "8x50" "ammo" 8  {value 2}}
	{item "13x96" "ammo" 30  {value 5}}
	{item "13x99" "ammo" 5  {value 5}}
	{item "rifle_grenade" "ammo" 2  {value 5}}
	{item "fr" "mortar81" "fg" "ammo" 5  {value 5}}
	{item "fr" "mortar81" "he" "ammo" 5  {value 5}}
	{item "mortar50_eng" "ammo" 4  {value 5}}
	;// Grenade
	{item "grenade" "mk1" 1  {value 5}}
	{item "grenade" "smoke" 1  {value 5}}
	{item "grenade" "fr_of37" 1  {value 5}}
)
(define "items_medic_fra"
	{item "bandage_fra"	1  {value 1}}
)
(define "items_heavy_fra"
	{item "bullet20_eng" "zenite" "ammo" 10  {value 5}}
	{item "bullet25_fra" "ap" "ammo" 5  {value 5}}
	{item "bullet25_fra" "he" "ammo" 3  {value 5}}
	{item "bullet37_fra" "zenite" "ap" "ammo" 10 {value 5}}
	{item "bullet37_fra" "zenite" "he" "ammo" 10 {value 5}}
	{item "bullet37_fra" "ap" "ammo" 3  {value 5}}
	{item "bullet37_fra" "he" "ammo" 3  {value 5}}
	{item "bullet47_fra" "ap" "ammo" 3  {value 5}}
	{item "bullet47_fra" "apcr" "ammo" 3 {value 5}}
	{item "bullet47_fra" "he" "ammo" 3  {value 5}}
	{item "bullet75_fra" "ap" "ammo" 2  {value 5}}
	{item "bullet75_fra" "he" "ammo" 2  {value 5}}
	{item "bullet75_fra" "heat" "ammo" 2 {value 5}}
	{item "bullet75_fra_241r" "aphe" "ammo" 2  {value 5}}
	{item "bullet75_fra_241r" "he" "ammo" 2  {value 5}}
	{item "bullet105_fra" "he" "ammo" 1  {value 10}}
	{item "bullet155_fra" "he" "ammo" 1  {value 20}}
	{item "bullet220" "ammo" 1  {value 30}}
)
(define "fra_box_ammo_inf"
	{extender "supply_zone"
		{resupply
			("items_light_fra")
			("items_medic_fra")
		}
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

(define "fra_box_ammo"
	{extender "supply_zone"
		{resupply
			("items_light_fra")
			("items_medic_fra")
			("items_heavy_fra")
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

(define "fra_truck_ammo"
	{extender "supply_zone"
		{resupply
			("items_light_fra")
			("items_medic_fra")
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
(define "fra_truck_ammo_art"
	{extender "supply_zone"
		{resupply
			("items_light_fra")
			("items_medic_fra")
			("items_heavy_fra")			
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
(define "fra_box_ammo_art"
	{extender "supply_zone"
		{resupply
			{item "fr" "mortar81" "fg" "ammo" 5  {value 5}}
			{item "fr" "mortar81" "he" "ammo" 5  {value 5}}
			{item "mortar50_eng" "ammo" 4  {value 5}}
			;			
			("items_heavy_fra")
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
(define "fra_para_ammo"
	{extender "supply_zone"
		{resupply
			("items_light_fra")
			("items_medic_fra")
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
