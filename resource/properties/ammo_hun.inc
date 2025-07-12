(define "items_light_hun"
	{item "8x33" "ammo" 30  {value 1}}
	{item "9x17" "ammo" 7  {value 1}}
	{item "9x19" "ammo" 32  {value 1}}
	{item "9x25" "ammo" 40  {value 1}}
	{item "7x57" "ammo" 50  {value 2}}
	{item "8x56" "ammo" 30  {value 2}}
	{item "8x50" "ammo" 15  {value 2}}
	{item "8x50b" "ammo" 15  {value 2}}
	{item "7x25" "ammo" 71  {value 2}}
	{item "42lp" "ammo" 5  {value 2}}
	{item "mgun_ger" "belt"			"ammo" 50 {value 5}}
	{item "mgun_ger" "mg13"			"ammo" 50 {value 5}}
	{item "mgun_ger" "drum"			"ammo" 50 {value 5}}
	{item "bullet20x105b" "ap" "ammo" 5 {value 5}}
	{item "bullet20x105b" "he" "ammo" 5 {value 5}}
	{item "panzershreck" "ammo" 1  {value 10}}
	{item "rifle_grenade" "ammo" 2  {value 5}}
	{item "rifle_grenade_at" "ammo" 2 {value 10}}
	{item "hun" "mortar81" "fg" "ammo" 5 {value 5}}
	{item "hun" "mortar81" "he" "ammo" 5 {value 5}}
	{item "mortar50_ger" "ammo" 4 {value 5}}
	{item "buzoganyveto215" "ammo" 2  {value 10}}
	;// Grenade
	{item "grenade" "hungarian_36m" 1  {value 5}}
	{item "grenade" "hungarian_42m" 1  {value 5}}
	{item "grenade" "kasapanos" 1  {value 10}}
	{item "grenade" "brandflasche" 1  {value 10}}
)
(define "items_medic_hun"
	{item "bandage_hun" 1  {value 1}}
)
(define "items_heavy_hun"
	{item "bullet20_hun" "zenite" "ammo" 10   {value 5}}
	{item "bullet40_hun" "ap" "ammo" 3   {value 5}}
	{item "bullet40_hun" "he" "ammo" 3   {value 5}}
	{item "bullet40_hun_zenite" "ap" "ammo" 10   {value 5}}
	{item "bullet40_hun_zenite" "he" "ammo" 10   {value 5}}
	{item "bullet37_fra" "ap" "ammo" 3  {value 5}}
	{item "bullet37_fra" "he" "ammo" 3  {value 5}}
	{item "bullet47_fra" "ap" "ammo" 3  {value 5}}
	{item "bullet47_fra" "he" "ammo" 3  {value 5}}
	{item "bullet75_hun" "apcbc" "ammo" 2   {value 5}}
	{item "bullet75_hun" "he" "ammo" 2   {value 5}}
	{item "bullet75_hun" "heat" "ammo" 2 {value 10}}
	{item "bullet75_hun_l25" "apche" "ammo" 2 {value 5}}
	{item "bullet75_hun_l25" "he" "ammo" 2 {value 5}}
	{item "bullet75_hun_l25" "heat" "ammo" 2 {value 10}}
	{item "bullet80_hun" "aphe" "ammo" 2 {value 5}}
	{item "bullet80_hun" "he" "ammo" 2 {value 5}}
	{item "bullet105_hun" "he" "ammo" 1 {value 10}}
	{item "bullet105_hun" "heat" "ammo" 1 {value 15}}
	{item "bulletger_37" "aphe" "ammo" 3   {value 5}}		
	{item "bulletger_37" "he" "ammo" 3   {value 5}}
	{item "bulletger_50_l60" "apche" "ammo" 3   {value 5}}
	{item "bulletger_50_l60" "he" "ammo" 3   {value 5}}
	{item "bulletger_50_l60" "apcr" "ammo" 3   {value 10}}
	{item "bulletger_75_l24" "apcbche" "ammo" 2 {value 5}}
	{item "bulletger_75_l24" "he" "ammo" 2 {value 5}}
	{item "bulletger_75_l24" "heatb" "ammo" 2 {value 10}}
	{item "bulletger_75_l43" "apcbche" "ammo" 2 {value 5}}
	{item "bulletger_75_l43" "he" "ammo" 2 {value 5}}
	{item "bulletger_75_l43" "heatc" "ammo" 2 {value 10}}
	{item "bulletger_88_l56" "apcbche" "ammo" 1 {value 10}}
	{item "bulletger_88_l56" "he" "ammo" 1 {value 10}}
	{item "bulletger_105" "he" "ammo" 1 {value 10}}
	{item "bulletger_105" "aphe" "ammo" 1 {value 10}}
	{item "bulletger_105" "heat" "ammo" 1 {value 15}}
	{item "bulletger_150_l11" "he" "ammo" 1 {value 10}}
	{item "bullet210_ita" "ammo" 1 {value 30}}
	{item "150mm_nebelwerfer"				"ammo" 1 {value 20}}
	{item "buzoganyveto215"				"ammo" 1 {value 30}}
)
(define "hun_box_ammo_inf"
	{extender "supply_zone"
		{resupply
			("items_light_hun")
			("items_medic_hun")	
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

(define "hun_box_ammo"
	{extender "supply_zone"
		{resupply
			("items_light_hun")
			("items_medic_hun")
			("items_heavy_hun")
		}
		{radius 			10}		;// resupply radius in meter
		{resupplyPeriod 	2}		;// resupply period in seconds
		{regenerationPeriod 5}		;// regeneration period in seconds, +1 supply every x seconds (0 = no regeneration)
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

(define "hun_truck_ammo"
	{extender "supply_zone"
		{resupply
			("items_light_hun")
			("items_medic_hun")
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
(define "hun_truck_ammo_art"
	{extender "supply_zone"
		{resupply
			("items_light_hun")
			("items_medic_hun")
			("items_heavy_hun")
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
(define "hun_box_ammo_art"
	{extender "supply_zone"
		{resupply
			{item "hun" "mortar81" "fg" "ammo" 5 {value 5}}
			{item "hun" "mortar81" "he" "ammo" 5 {value 5}}
			{item "mortar50_ger" "ammo" 4 {value 5}}
			{item "buzoganyveto215" "ammo" 2  {value 10}}
			;			
			("items_heavy_hun")
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
(define "hun_para_ammo"
	{extender "supply_zone"
		{resupply
			("items_light_hun")
			("items_medic_hun")
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