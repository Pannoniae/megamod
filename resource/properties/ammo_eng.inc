(define "items_light_eng"
	{item "11x21" "ammo" 10  {value 1}}
	{item "11x23" "ammo" 30  {value 1}}
	{item "9x19b" "ammo" 32  {value 1}}
	{item "7x56" "ammo" 16  {value 2}} 
	{item "7x57b" "ammo"  225  {value 2}}
	{item "7x63" "ammo" 30  {value 2}}
	{item "13x81" "ammo" 5 {value 5}}
	{item "13x99" "ammo" 5 {value 5}}
	{item "12x99" "ammo" 5  {value 5}}
	{item "15x104" "ammo" 25  {value 5}}
	{item "piatrocket" "ammo" 1  {value 10}}
	{item "rifle_grenade" "ammo" 2  {value 5}}
	{item "rifle_grenade_at" "ammo"  1  {value 10}}
	{item "pol" "mortar81" "he" "ammo" 5  {value 5}}
	{item "mortar50_eng" "ammo" 4  {value 5}}
	;// Grenade
	{item "grenade" "mk1" 1  {value 5}}
	{item "grenade" "no36m" 1  {value 5}}
	{item "grenade" "smoke" 1  {value 5}}
	{item "grenade" "n73at" 1  {value 10}}
)
(define "items_medic_eng"
	{item "bandage" 1  {value 1}}
	{item "bandage_pol" 1  {value 1}}
)
(define "items_heavy_eng"
	{item "flame_thrower" "ammo" 10 {value 10}}
	{item "eng" "mortar76" "he" "ammo" 5 {value 5}}
	{item "eng" "mortar107" "he" "ammo" 5 {value 5}}
	{item "bullet20_eng" "zenite" "ammo" 10 {value 5}}
	{item "bullet20_eng_auto" "ap" "ammo" 10 {value 5}}
	{item "bullet20_eng_auto" "he" "ammo" 10 {value 5}}
	{item "bullet37_usa" "ap" "ammo" 3  {value 5}}
	{item "bullet37_usa" "he" "ammo" 3  {value 5}}
	{item "bullet40_eng_zenite" "ap" "ammo" 10 {value 5}}
	{item "bullet40_eng_zenite" "he" "ammo" 10 {value 5}}
	{item "bullet40_eng" "aphe" "ammo" 3  {value 5}}
	{item "bullet40_eng" "apcbc" "ammo" 3  {value 5}}
	{item "bullet40_eng" "he" "ammo" 3  {value 5}}
	{item "bullet57_eng" "ap" "ammo" 3 {value 5}}
	{item "bullet57_eng" "apcbc" "ammo" 3  {value 5}}
	{item "bullet57_eng" "he" "ammo" 3  {value 5}}
	{item "bullet57_eng" "apcr" "ammo" 3 {value 5}}
	{item "bullet57_eng" "apds" "ammo" 3 {value 10}}
	{item "bullet75_usa" "ap" "ammo" 2 {value 5}}
	{item "bullet75_usa" "apcbc" "ammo" 2 {value 5}}
	{item "bullet75_usa" "he" "ammo" 2 {value 5}}
	{item "bullet75_fra" "ap" "ammo" 2  {value 5}}
	{item "bullet75_fra" "he" "ammo" 2  {value 5}}
	{item "bullet76_eng" "ap" "ammo" 2 {value 5}}
	{item "bullet76_eng" "apcbc" "ammo" 2 {value 5}}
	{item "bullet76_eng" "he" "ammo" 2 {value 5}}
	{item "bullet76_eng" "apds" "ammo" 2 {value 10}}
	{item "bullet76_engs" "he" "ammo" 2 {value 5}}
	{item "bullet76_engs" "sm" "ammo" 2 {value 5}}
	{item "bullet76_usa" "ap" "ammo" 2  {value 5}}
	{item "bullet76_usa" "apcbc" "ammo" 2  {value 5}}
	{item "bullet76_usa" "he" "ammo" 2  {value 5}}
	{item "bullet77_eng" "apcbc" "ammo" 2 {value 5}}
	{item "bullet77_eng" "he" "ammo" 2 {value 5}}
	{item "bullet77_eng" "apds" "ammo" 2 {value 10}}
	{item "bullet84_eng" "ap" "ammo" 2 {value 5}}
	{item "bullet84_eng" "he" "ammo" 2 {value 5}}
	{item "bullet88_eng" "ap" "ammo" 2 {value 5}}
	{item "bullet88_eng" "he" "ammo" 2 {value 5}}
	{item "bullet94_eng" "he" "ammo" 2 {value 5}}
	{item "bullet95_eng" "he" "ammo" 2 {value 5}}
	{item "bullet95_eng" "heat" "ammo" 2 {value 10}}
	{item "bullet105_usa" "he" "ammo" 1  {value 10}}
	{item "bullet105_usa" "heat" "ammo" 1 {value 15}}
	{item "bullet114_eng" "he" "ammo"  1 {value 10}}
	{item "bullet114_eng" "sm" "ammo" 1 {value 5}}
	{item "bullet152_eng" "he" "ammo"  1 {value 10}}
	{item "bullet183" "he" "ammo"  1 {value 20}}
	{item "lm_ammo" "ammo" 2  {value 20}}
	{item "tulip" "ammo" 2  {value 20}}
	{item "bullet290" "he" "ammo"  1 {value 30}}
)

(define "eng_box_ammo"
	{extender "supply_zone"
		{resupply
			("items_light_eng")
			("items_medic_eng")
			("items_heavy_eng")
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

(define "eng_box_ammo_inf"
	{extender "supply_zone"
		{resupply
			("items_light_eng")
			("items_medic_eng")
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

(define "eng_truck_ammo"
	{extender "supply_zone"
		{resupply
			("items_light_eng")
			("items_medic_eng")
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
(define "eng_truck_ammo_art"
	{extender "supply_zone"
		{resupply
			("items_light_eng")
			("items_medic_eng")
			("items_heavy_eng")		
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
(define "eng_box_ammo_art"
	{extender "supply_zone"
		{resupply
			{item "pol" "mortar81" "he" "ammo" 5  {value 5}}
			{item "mortar50_eng" "ammo" 4  {value 5}}
			;			
			("items_heavy_eng")
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
(define "eng_para_ammo"
	{extender "supply_zone"
		{resupply
			("items_light_eng")
			("items_medic_eng")
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
