(define "items_light_usaf"
	{item "5x15" "ammo" 10  {value 1}}
	{item "7x33" "ammo" 30  {value 2}}
	{item "11x23" "ammo" 30  {value 1}}
	{item "7x63" "ammo" 30  {value 2}}
	{item "7x56" "ammo" 40  {value 2}}
	{item "7x57b" "ammo" 30  {value 2}}
	{item "9x19b" "ammo" 32  {value 1}}
	{item "12x99" "ammo" 50  {value 5}}
	{item "m7_grenade" "heat" "ammo" 1  {value 10}}
	{item "m7_grenade" "he" "ammo" 2  {value 5}}
	{item "mkii_rifle_grenade" "he" "ammo" 2  {value 5}}
	{item "shotgun" "ammo" 6  {value 5}}
	{item "bazooka" "ammo" 1  {value 10}}
	{item "m18rr" "ammo" 1  {value 10}}
	{item "us" "mortar60" "he" "ammo" 5  {value 5}}
	{item "us" "mortar81" "fg" "ammo" 5  {value 5}}
	{item "us" "mortar81" "wp" "ammo" 5  {value 5}}
	{item "us" "mortar81" "he" "ammo" 5  {value 5}}
	{item "us" "mortar107" "he" "ammo" 5  {value 5}}
	{item "us" "mortar107" "wp" "ammo" 5  {value 5}}
	{item "mortar50_eng" "ammo" 4  {value 5}}
	;// Grenade
	{item "grenade" "mk2" 1  {value 5}}
	{item "grenade" "smoke" 1  {value 5}}
	{item "grenade" "n73at" 1  {value 5}}
	{item "grenade" "m15_wp" 1  {value 5}}
	{item "grenade" "m14_incen" 1  {value 10}}
	{item "grenade" "satchel" 1  {value 10}}
)
(define "items_medic_usaf"
	{item "bandage" 1  {value 1}}
	{item "bandage_fra" 1  {value 1}}
)
(define "items_heavy_usaf"
	{item "flame_thrower" "ammo" 10 {value 10}}
	{item "bullet37_usa_zenite" "ap" "ammo" 10  {value 5}}
	{item "bullet37_usa_zenite" "he" "ammo" 10  {value 5}}
	{item "bullet37_usa" "ap" "ammo" 3  {value 5}}
	{item "bullet37_usa" "he" "ammo" 3  {value 5}}
	{item "bullet37_usa" "apcbc" "ammo" 3 {value 5}}
	{item "bullet40_usa" "zenite" "ap" "ammo" 10  {value 5}}
	{item "bullet40_usa" "zenite" "he" "ammo" 10  {value 5}}
	{item "bullet40_eng" "aphe" "ammo" 3  {value 5}}
	{item "bullet37_fra" "ap" "ammo" 3  {value 5}}
	{item "bullet37_fra" "he" "ammo" 3  {value 5}}
	{item "bullet47_fra" "ap" "ammo" 3  {value 5}}
	{item "bullet47_fra" "he" "ammo" 3  {value 5}}
	{item "bullet75_fra" "ap" "ammo" 2  {value 5}}
	{item "bullet75_fra" "he" "ammo" 2  {value 5}}
	{item "bullet57_usa" "ap" "ammo" 2  {value 5}}
	{item "bullet57_usa" "apcbche" "ammo" 2  {value 5}}
	{item "bullet57_usa" "he" "ammo" 2  {value 5}}
	{item "bullet75_usa" "ap" "ammo" 2  {value 5}}
	{item "bullet75_usa" "apcbc" "ammo" 2  {value 5}}
	{item "bullet75_usa" "apcr" "ammo" 2 {value 10}}
	{item "bullet75_usa" "he" "ammo" 2  {value 5}}
	{item "bullet75_usa" "heat" "ammo" 2 {value 10}}
	{item "bullet75_usa" "wp" "ammo" 2 {value 10}}
	{item "bullet76_usa" "ap" "ammo" 2  {value 5}}
	{item "bullet76_usa" "apcbc" "ammo" 2  {value 5}}
	{item "bullet76_usa" "apcr" "ammo" 2 {value 10}}
	{item "bullet76_usa" "he" "ammo" 2  {value 5}}
	{item "bullet76_engs" "he" "ammo" 2 {value 5}}
	{item "bullet90_usa" "ap" "ammo" 2  {value 5}}
	{item "bullet90_usa" "apcr" "ammo" 2 {value 10}}
	{item "bullet90_usa" "he" "ammo" 2  {value 5}}
	{item "bullet90_t15_usa" "ap" "ammo" 2  {value 5}}
	{item "bullet90_t15_usa" "apcr" "ammo" 2 {value 10}}
	{item "bullet90_t15_usa" "he" "ammo" 2  {value 5}}
	{item "bullet105_usa" "he" "ammo" 1  {value 10}}
	{item "bullet105_usa" "heat" "ammo" 1 {value 15}}
	{item "bullet105_fra" "he" "ammo" 1  {value 10}}
	{item "bullet105_t15_usa" "apcbc" "ammo" 1  {value 10}}
	{item "bullet105_t15_usa" "apcr" "ammo" 1 {value 15}}
	{item "bullet105_t15_usa" "he" "ammo" 1  {value 10}}
	{item "bullet155_fra" "he" "ammo" 1  {value 20}}
	{item "bullet155_usa" "he" "ammo" 1  {value 20}}
	{item "bulletrus_203" "ammo" 1  {value 30}}
	{item "calliope" "ammo" 5  {value 20}}
)
(define "usa_box_ammo_inf"
	{extender "supply_zone"
		{resupply
			("items_light_usaf")
			("items_medic_usaf")
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

(define "usa_box_ammo"
	{extender "supply_zone"
		{resupply
			("items_light_usaf")
			("items_medic_usaf")
			("items_heavy_usaf")
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

(define "usa_truck_ammo"
	{extender "supply_zone"
		{resupply
			("items_light_usaf")
			("items_medic_usaf")
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
(define "usa_truck_ammo_art"
	{extender "supply_zone"
		{resupply
			("items_light_usaf")
			("items_medic_usaf")
			("items_heavy_usaf")		
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
(define "usa_box_ammo_art"
	{extender "supply_zone"
		{resupply
			{item "us" "mortar81" "fg" "ammo" 5  {value 5}}
			{item "us" "mortar81" "he" "ammo" 5  {value 5}}
			{item "us" "mortar107" "he" "ammo" 5  {value 5}}
			{item "mortar50_eng" "ammo" 4  {value 5}}
			;			
			("items_heavy_usaf")
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
(define "usa_para_ammo"
	{extender "supply_zone"
		{resupply
			("items_light_usaf")
			("items_medic_usaf")
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
