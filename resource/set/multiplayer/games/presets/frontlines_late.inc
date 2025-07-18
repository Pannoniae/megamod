; == LATE WAR STANDARD RESOURCES ==

(include "global_parameters/frontlines/timers_frontlines.inc")

(define "standard_all"
	{teams
		{a ;// ATTACKER TEAM
			{unitset
				{value "44|45^conquestonly|doctrineonly"}
			}
			{commandPoints "*=%cp_a"}
			(include "global_parameters/frontlines/unitlimits_attacker.inc")
			{chargeFactors
				("timers_attacker")
			}
			(include "global_parameters/frontlines/budget_attacker.inc" s(%start_a) f(%finish_a) d(%doctrine_a) r(%reinforcement_a))
		}
		{b ;// DEFENDER TEAM
			{unitset
				{value "44|45|frontlines^conquestonly|doctrineonly"}
			}
			{commandPoints "*=%cp_b"}
			(include "global_parameters/frontlines/unitlimits_defender.inc")
			{chargeFactors
				("timers_defender")
			}
			(include "global_parameters/frontlines/budget_defender.inc" s(%start_b) f(%finish_b) d(%doctrine_b))
		}
	}

	{bots
		(include "global_parameters/frontlines/bots_standard.inc" period("44|45") start_a(%start_a) finish_a(%finish_a) reinforcement_a(%reinforcement_a) start_b(%start_b) finish_b(%finish_b) doctrine_a(%doctrine_a) doctrine_b(%doctrine_b) cp_a(%cp_a) cp_b(%cp_b))
	}
)


; == LATE WAR CUSTOM RESOURCES ==
(define "custom_all"
	{common

	}
	{teams
		{a ;// ATTACKER TEAM
			{unitset
				{value "44|45^conquestonly|doctrineonly"}
			}
			{commandPoints "*=%cp_a"}
			(include "global_parameters/frontlines/unitlimits_attacker.inc")
			{chargeFactors
				("timers_attacker")
			}
			(include "global_parameters/frontlines/budget_attacker_custom.inc" s(%start_a) f(%finish_a) d(%doctrine_a) r(%reinforcement_a))
		}
		{b ;// DEFENDER TEAM
			{unitset
				{value "44|45|frontlines^conquestonly|doctrineonly"}
			}
			{commandPoints "*=%cp_b"}
			(include "global_parameters/frontlines/unitlimits_defender.inc")
			{chargeFactors
				("timers_defender")
			}
			(include "global_parameters/frontlines/budget_defender_custom.inc" s(%start_b) f(%finish_b) d(%doctrine_b))
		}
	}

	{bots
		(include "global_parameters/frontlines/bots_custom.inc" period("44|45") start_a(%start_a) finish_a(%finish_a) reinforcement_a(%reinforcement_a) start_b(%start_b) finish_b(%finish_b) doctrine_a(%doctrine_a) doctrine_b(%doctrine_b) cp_a(%cp_a) cp_b(%cp_b))
	}
)


; == LATE WAR TEST ==
(define "test_44-45"
	{teams
		{a ;// ATTACKER TEAM
			{unitset
				{value "44|45^conquestonly|doctrineonly"}
			}
			{commandPoints "*=%cp_a"}
			{unitLimits ""}
			{chargeFactors
				{value "*=0"}
			}
			(include "global_parameters/frontlines/budget_attacker.inc" s(%start_a) f(%finish_a) d(%doctrine_a) r(%reinforcement_a))
		}
		{b ;// DEFENDER TEAM
			{unitset
				{value "44|45|frontlines^conquestonly|doctrineonly"}
			}
			{commandPoints "*=%cp_b"}
			{unitLimits ""}
			{chargeFactors
				{value "*=0"}
			}
			(include "global_parameters/frontlines/budget_defender.inc" s(%start_b) f(%finish_b) d(%doctrine_b))
		}
	}

	{bots
		(include "global_parameters/frontlines/bots_standard.inc" period("44|45") start_a(%start_a) finish_a(%finish_a) reinforcement_a(%reinforcement_a) start_b(%start_b) finish_b(%finish_b) doctrine_a(%doctrine_a) doctrine_b(%doctrine_b) cp_a(%cp_a) cp_b(%cp_b))
	}
)

(define "standard_all_46"
	{teams
		{a ;// ATTACKER TEAM
			{unitset
				{value "46^conquestonly|doctrineonly"}
			}
			{commandPoints "*=%cp_a"}
			(include "global_parameters/frontlines/unitlimits_attacker.inc")
			{chargeFactors
				("timers_attacker")
			}
			(include "global_parameters/frontlines/budget_attacker.inc" s(%start_a) f(%finish_a) d(%doctrine_a) r(%reinforcement_a))
		}
		{b ;// DEFENDER TEAM
			{unitset
				{value "46|frontlines^conquestonly|doctrineonly"}
			}
			{commandPoints "*=%cp_b"}
			(include "global_parameters/frontlines/unitlimits_defender.inc")
			{chargeFactors
				("timers_defender")
			}
			(include "global_parameters/frontlines/budget_defender.inc" s(%start_b) f(%finish_b) d(%doctrine_b))
		}
	}

	{bots
		(include "global_parameters/frontlines/bots_standard.inc" period("46") start_a(%start_a) finish_a(%finish_a) reinforcement_a(%reinforcement_a) start_b(%start_b) finish_b(%finish_b) doctrine_a(%doctrine_a) doctrine_b(%doctrine_b) cp_a(%cp_a) cp_b(%cp_b))
	}
)


; == LATE WAR CUSTOM RESOURCES ==
(define "custom_all_46"
	{common

	}
	{teams
		{a ;// ATTACKER TEAM
			{unitset
				{value "46^conquestonly|doctrineonly"}
			}
			{commandPoints "*=%cp_a"}
			(include "global_parameters/frontlines/unitlimits_attacker.inc")
			{chargeFactors
				("timers_attacker")
			}
			(include "global_parameters/frontlines/budget_attacker_custom.inc" s(%start_a) f(%finish_a) d(%doctrine_a) r(%reinforcement_a))
		}
		{b ;// DEFENDER TEAM
			{unitset
				{value "46|frontlines^conquestonly|doctrineonly"}
			}
			{commandPoints "*=%cp_b"}
			(include "global_parameters/frontlines/unitlimits_defender.inc")
			{chargeFactors
				("timers_defender")
			}
			(include "global_parameters/frontlines/budget_defender_custom.inc" s(%start_b) f(%finish_b) d(%doctrine_b))
		}
	}

	{bots
		(include "global_parameters/frontlines/bots_custom.inc" period("46") start_a(%start_a) finish_a(%finish_a) reinforcement_a(%reinforcement_a) start_b(%start_b) finish_b(%finish_b) doctrine_a(%doctrine_a) doctrine_b(%doctrine_b) cp_a(%cp_a) cp_b(%cp_b))
	}
)

(define "test_46"
	{teams
		{a ;// ATTACKER TEAM
			{unitset
				{value "46^conquestonly|doctrineonly"}
			}
			{commandPoints "*=%cp_a"}
			{unitLimits ""}
			{chargeFactors
				{value "*=0"}
			}
			(include "global_parameters/frontlines/budget_attacker.inc" s(%start_a) f(%finish_a) d(%doctrine_a) r(%reinforcement_a))
		}
		{b ;// DEFENDER TEAM
			{unitset
				{value "46|frontlines^conquestonly|doctrineonly"}
			}
			{commandPoints "*=%cp_b"}
			{unitLimits ""}
			{chargeFactors
				{value "*=0"}
			}
			(include "global_parameters/frontlines/budget_defender.inc" s(%start_b) f(%finish_b) d(%doctrine_b))
		}
	}

	{bots
		(include "global_parameters/frontlines/bots_standard.inc" period("46") start_a(%start_a) finish_a(%finish_a) reinforcement_a(%reinforcement_a) start_b(%start_b) finish_b(%finish_b) doctrine_a(%doctrine_a) doctrine_b(%doctrine_b) cp_a(%cp_a) cp_b(%cp_b))
	}
)

;------------------------------------------------------------------------------------------------------------
{presets
	{"s:standard_80_44-45"
		{gameMode "standard"}
		{unitMode "44-45"}
		{specMode "all_normal"}
		{apply "only_roster_44-45"}
		("standard_all"			start_a(8000) finish_a(8000) reinforcement_a(800) start_b(6000) finish_b(6000) doctrine_a(1) doctrine_b(1) cp_a(0:175,900:200,1500:225) cp_b(0:110,900:140,1500:170))
		{ranked}
	}
;------------------------------------------------------------------------------------------------------------

; // custom games here

;	{"c:custom_60_44-45"
;		{gameMode "custom"}
;		{unitMode "44-45"}
;		{specMode "cp_60"}
;		{apply "only_roster_late"}
;		("custom_all"			start_a(4500) finish_a(4500) reinforcement_a(470) start_b(2800) finish_b(2800) doctrine_a(300) doctrine_b(200) cp_a(0:175,900:200,1500:225) cp_b(0:110,900:140,1500:170))
;	}
	{"s:custom_80_44-45"
		{gameMode "custom"}
		{unitMode "44-45"}
		{specMode "cp_80"}
		{apply "only_roster_44-45"}
		("custom_all"			start_a(8000) finish_a(8000) reinforcement_a(800) start_b(6000) finish_b(6000) doctrine_a(1) doctrine_b(1) cp_a(0:175,900:200,1500:225) cp_b(0:110,900:140,1500:170))
		{ranked}
	}


;------------------------------------------------------------------------------------------------------------

	{"s:test_44-45"
		{gameMode "test"}
		{unitMode "44-45"}
		{specMode "all_normal"}
		{apply "only_roster_44-45"}
		("test_44-45"			start_a(50000) finish_a(50000) reinforcement_a(0) start_b(50000) finish_b(50000) doctrine_a(2000) doctrine_b(2000) cp_a(1000) cp_b(1000))
	}
	
	
	; --- 46 ---
	
	{"s:standard_80_46"
		{gameMode "standard"}
		{unitMode "46"}
		{specMode "all_normal"}
		{apply "only_roster_46"}
		("standard_all_46"			start_a(8000) finish_a(8000) reinforcement_a(800) start_b(6000) finish_b(6000) doctrine_a(1) doctrine_b(1) cp_a(0:175,900:200,1500:225) cp_b(0:110,900:140,1500:170))
		{ranked}
	}
;------------------------------------------------------------------------------------------------------------

; // custom games here

;	{"c:custom_60_44-45"
;		{gameMode "custom"}
;		{unitMode "46"}
;		{specMode "cp_60"}
;		{apply "only_roster_late"}
;		("custom_all_46"			start_a(4500) finish_a(4500) reinforcement_a(470) start_b(2800) finish_b(2800) doctrine_a(300) doctrine_b(200) cp_a(0:175,900:200,1500:225) cp_b(0:110,900:140,1500:170))
;	}
	{"s:custom_80_46"
		{gameMode "custom"}
		{unitMode "46"}
		{specMode "cp_80"}
		{apply "only_roster_46"}
		("custom_all_46"			start_a(8000) finish_a(8000) reinforcement_a(800) start_b(6000) finish_b(6000) doctrine_a(1) doctrine_b(1) cp_a(0:175,900:200,1500:225) cp_b(0:110,900:140,1500:170))
		{ranked}
	}


;------------------------------------------------------------------------------------------------------------

	{"s:test_46"
		{gameMode "test"}
		{unitMode "46"}
		{specMode "all_normal"}
		{apply "only_roster_46"}
		("test_46"			start_a(50000) finish_a(50000) reinforcement_a(0) start_b(50000) finish_b(50000) doctrine_a(2000) doctrine_b(2000) cp_a(1000) cp_b(1000))
	}
}