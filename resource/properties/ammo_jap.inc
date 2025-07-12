(define "items_light_jap"
	{item "6x50" "ammo" 30  {value 2}}
	{item "8x22" "ammo" 40  {value 1}}
	{item "7x58" "ammo" 30  {value 2}}
	{item "7x56" "ammo" 30  {value 2}}
	{item "7x21" "ammo" 30  {value 1}}
	{item "9x19" "ammo" 30  {value 1}}
	{item "bullet20x124" "ap" "ammo" 7  {value 5}}
	{item "bullet20x124" "he" "ammo" 7  {value 5}}
	{item "13x96" "ammo" 30  {value 5}}
	{item "13x99h" "ammo" 30  {value 5}}
	{item "type_4" "ammo" 1  {value 10}}
	{item "rifle_grenade" "ammo" 2  {value 5}}
	{item "type99_grenade" "ammo" 2  {value 5}}
	{item "rifle_grenade_at" "ammo" 2  {value 5}}
	{item "jap" "mortar81" "he" "ammo" 5  {value 5}}
	{item "type_89_jap" "ammo" 4  {value 10}}
	;// Grenade
	{item "grenade" "type97" 1  {value 5}}
	{item "grenade" "type99" 1  {value 5}}
	{item "grenade" "type91_wp" 1  {value 5}}
	{item "grenade" "type3at" 1  {value 10}}
	{item "grenade" "type3at_a" 1  {value 10}}
	{item "grenade" "type99at" 1  {value 10}}
)
(define "items_medic_jap"
	{item "bandage_jap"	1  {value 1}}
)
(define "items_heavy_jap"
	{item "mortar150" "ammo" 2  {value 5}}
	{item "bullet20_jap" "zenite" "ammo" 10  {value 5}}
	{item "bullet20_jap" "ap" "ammo" 5  {value 5}}
	{item "bullet20_jap" "he" "ammo" 3  {value 5}}
	{item "bullet37_jap" "aphe" "ammo" 3  {value 5}}
	{item "bullet37_jap" "he" "ammo" 3  {value 5}}
	{item "bullet40_jap" "zenite" "ap" "ammo" 5  {value 5}}
	{item "bullet40_jap" "zenite" "he" "ammo" 5  {value 5}}
	{item "bullet47_jap" "apcr" "ammo" 3 {value 10}}
	{item "bullet47_jap" "aphe" "ammo" 3  {value 5}}
	{item "bullet47_jap" "he" "ammo" 3  {value 5}}
	{item "bullet57_jap" "aphe" "ammo" 3  {value 5}}
	{item "bullet57_jap" "he" "ammo" 3  {value 5}}
	{item "bullet57_jap" "heat" "ammo" 3 {value 10}}
	{item "bullet70_jap" "aphe" "ammo" 2  {value 5}}
	{item "bullet70_jap" "he" "ammo" 2  {value 5}}
	{item "bullet70_jap" "heat" "ammo" 2 {value 10}}
	{item "bullet75_jap" "aphe" "ammo" 2  {value 5}}
	{item "bullet75_jap" "apcr" "ammo" 2 {value 10}}
	{item "bullet75_jap" "he" "ammo" 2  {value 5}}
	{item "bullet75_jap" "heat" "ammo" 2 {value 10}}
	{item "bullet75_jap" "ic" "ammo" 2 {value 10}}
	{item "bullet88_jap" "aphe" "ammo" 2  {value 5}}
	{item "bullet88_jap" "he" "ammo" 2  {value 5}}
	{item "bullet105_jap" "aphe" "ammo" 2  {value 10}}
	{item "bullet105_jap" "he" "ammo" 1  {value 10}}
	{item "bullet105_jap" "heat" "ammo" 1 {value 15}}
	{item "bullet120_jap" "apcbche" 1  {value 10}}
	{item "bullet120_jap" "he" "ammo" 1  {value 10}}
	{item "bullet120_jap" "heat" "ammo" 1 {value 15}}
	{item "bullet150_jap" "he" "ammo" 1  {value 20}}
	{item "bullet150_jap" "aphe" "ammo" 1  {value 20}}
	{item "bullet150_jap" "ic" "ammo" 1 {value 20}}
	{item "bullet150_jap" "sm" "ammo" 1 {value 10}}
	{item "bullet200" "he" "ammo" 1  {value 20}}
	{item "bullet240" "he" "ammo" 1  {value 20}}
	{item "15cm_rocket" "ammo" 2  {value 20}}
	{item "20cm_rocket" "ammo" 2  {value 20}}
	{item "30cm_rocket" "ammo" 2  {value 20}}
)
(define "jap_box_ammo_inf"
	{extender "supply_zone"
		{resupply
			("items_light_jap")
			("items_medic_jap")
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

(define "jap_box_ammo"
	{extender "supply_zone"
		{resupply
			("items_light_jap")
			("items_medic_jap")
			("items_heavy_jap")
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

(define "jap_truck_ammo"
	{extender "supply_zone"
		{resupply
			("items_light_jap")
			("items_medic_jap")
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
(define "jap_truck_ammo_art"
	{extender "supply_zone"
		{resupply
			("items_light_jap")
			("items_medic_jap")
			("items_heavy_jap")
		}
		{radius 			10}			;// resupply radius in meter
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

(define "jap_box_ammo_art"
	{extender "supply_zone"
		{resupply
			{item "jap" "mortar81" "he" "ammo" 5  {value 5}}
			{item "type_89_jap" "ammo" 4  {value 10}}
			;
			("items_heavy_jap")
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
(define "jap_para_ammo"
	{extender "supply_zone"
		{resupply
			("items_light_jap")
			("items_medic_jap")
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
