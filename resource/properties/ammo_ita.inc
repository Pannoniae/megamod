(define "items_light_ita"
	{item "9x17" "ammo" 7  {value 1}}
	{item "9x19c" "ammo" 25  {value 1}}
	{item "9x19b" "ammo" 40  {value 1}}
	{item "6x52" "ammo" 20 {value 2}}
	{item "7x51" "ammo" 6 {value 2}}
	{item "8x59" "ammo" 20 {value 5}}
	{item "7x107" "ammo" 4 {max 40}}
	{item "12x81" "ammo" 100 {value 5}}
	{item "13x96" "ammo" 100 {value 5}}
	{item "ammo mgun_ger belt" 100 {value 5}}
	{item "bullet20x105b" "ap" "ammo" 5 {value 5}}
	{item "bullet20x105b" "he" "ammo" 5 {value 5}}
	{item "rifle_grenade" "ammo" 2 {value 5}}
	{item "rifle_grenade_at" "ammo" 2 {value 10}}
	{item "brixia45" "he" "ammo" 5  {value 5}}
	{item "ita" "mortar81" "fg" "ammo" 5  {value 5}}
	{item "ita" "mortar81" "he" "ammo" 5  {value 5}}
	{item "panzershreck" "ammo" 1 {value 10}}
	;// Grenade
	{item "grenade" "oto_mod35" 1  {value 5}}
	{item "grenade" "ccm34smoke" 1  {value 5}}
	{item "grenade" "breda42at" 1  {value 10}}
	{item "grenade" "tipo_l" 1  {value 10}}
)
(define "items_medic_ita"
	{item "bandage_ita"	1  {value 1}}
)
(define "items_heavy_ita"
	{item "bullet20_ita" "ap" "ammo" 10  {value 5}}
	{item "bullet20_ita" "he" "ammo" 10  {value 5}}
	{item "bullet37_ita" "aphe" "ammo" 3   {value 5}}
	{item "bullet47_ita" "apbc" "ammo" 3   {value 5}}
	{item "bullet47_ita" "aphe" "ammo" 3   {value 5}}
	{item "bullet47_ita" "he" "ammo" 3   {value 5}}
	{item "bullet47_ita" "heat" "ammo" 3 {value 10}}
	{item "bulletger_75_l43"	"apcbche"	"ammo" 1 {value 5}}
	{item "bulletger_75_l43"	"apcr"		"ammo" 1 {value 10}}
	{item "bulletger_75_l43"	"he"		"ammo" 1 {value 5}}
	{item "bulletger_75_l43"	"heat"		"ammo" 1 {value 10}}
	{item "bulletger_75_l43"	"heatb"		"ammo" 1 {value 10}}
	{item "bulletger_75_l43"	"heatc"		"ammo" 1 {value 10}}
	{item "bulletger_75_l24"	"apcbche"	"ammo" 1 {value 5}}
	{item "bulletger_75_l24"	"he"		"ammo" 1 {value 5}}
	{item "bulletger_75_l24"	"heat"		"ammo" 1 {value 10}}
	{item "bulletger_75_l24"	"heata"		"ammo" 1 {value 10}}
	{item "bulletger_75_l24"	"heatb"		"ammo" 1 {value 10}}
	{item "bulletger_88_l56"	"apcbche"	"ammo" 1 {value 5}}
	{item "bulletger_88_l56"	"apcr"		"ammo" 1 {value 10}}
	{item "bulletger_88_l56"	"he"		"ammo" 1 {value 5}}
	{item "bulletger_88_l56"	"heat"		"ammo" 1 {value 10}}
	{item "bullet75_ita_l25" "apcbche"	"ammo" 1 {value 5}}
	{item "bullet75_ita_l25" "he"		"ammo" 1 {value 5}}
	{item "bullet75_ita_l25" "heat"		"ammo" 1 {value 10}}
	{item "bulletger_75_l70"	"apcbche"	"ammo" 1 {value 5}}
	{item "bulletger_75_l70"	"apcr"		"ammo" 1 {value 10}}
	{item "bulletger_75_l70"	"he"		"ammo" 1 {value 5}}
	{item "bullet75_ita" "apbc" "ammo" 2   {value 5}}
	{item "bullet75_ita" "apcbc" "ammo" 2   {value 5}}
	{item "bullet75_ita" "he" "ammo" 2   {value 5}}
	{item "bullet75_ita" "heat" "ammo" 2 {value 10}}
	{item "bullet90_ita" "apcbc" "ammo" 2   {value 10}}
	{item "bullet90_ita" "he" "ammo" 1   {value 10}}
	{item "bullet105_ita" "apc" "ammo" 2   {value 10}}
	{item "bullet105_ita" "he" "ammo" 1   {value 10}}
	{item "bulletger_150_l11" "he" "ammo" 1 {value 10}}
	{item "bullet210_ita" "ammo" 1   {value 30}}
)
(define "ita_box_ammo_inf"
	{extender "supply_zone"
		{resupply
			("items_light_ita")
			("items_medic_ita")
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

(define "ita_box_ammo"
	{extender "supply_zone"
		{resupply
			("items_light_ita")
			("items_medic_ita")
			("items_heavy_ita")
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

(define "ita_truck_ammo"
	{extender "supply_zone"
		{resupply
			("items_light_ita")
			("items_medic_ita")
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
(define "ita_truck_ammo_art"
	{extender "supply_zone"
		{resupply
			("items_light_ita")
			("items_medic_ita")
			("items_heavy_ita")			
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
(define "ita_box_ammo_art"
	{extender "supply_zone"
		{resupply
			{item "ita" "mortar81" "fg" "ammo" 5  {value 5}}
			{item "ita" "mortar81" "he" "ammo" 5  {value 5}}
			{item "mortar50_eng" "ammo" 4  {value 5}}
			;			
			("items_heavy_ita")
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
(define "ita_para_ammo"
	{extender "supply_zone"
		{resupply
			{item "breda42at" "grenade" 1 {value 5}}
			{item "oto_mod35" "grenade" 1 {value 2}}
			("items_light_ita")
			("items_medic_ita")
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