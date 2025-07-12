; == TEST MODE ==
(define "test_44-45"
	{common
		{unitset
			{value "44|45^conquestonly|doctrineonly"}
		}
		{commandPoints "*=%cp"}
		{unitLimits ""}
		{balancingFactorBonus {cp 1.0}}
		{chargeFactors
			{value "*=0"}
		}
		(include "global_parameters/budget.inc" s(%start) f(%finish) d(%doctrine))
	}
	{bots
		(include "global_parameters/bots_generic.inc" period("44-45"))
	}
)

(define "test_46"
	{common
		{unitset
			{value "46^conquestonly|doctrineonly"}
		}
		{commandPoints "*=%cp"}
		{unitLimits ""}
		{balancingFactorBonus {cp 1.0}}
		{chargeFactors
			{value "*=0"}
		}
		(include "global_parameters/budget.inc" s(%start) f(%finish) d(%doctrine))
	}
	{bots
		(include "global_parameters/bots_generic.inc" period("46"))
	}
)

;------------------------------------------------------------------------------------------------------------
{presets
	{"s:test_44-45"
		{gameMode "test"}
		{unitMode "44-45"}
		{specMode "all_normal"}
		{apply "only_roster_44-45"}
		("test_44-45"			start(50000) finish(50000) doctrine(1) cp(1000))
	}
	
	{"s:test_46"
		{gameMode "test"}
		{unitMode "46"}
		{specMode "all_normal"}
		{apply "only_roster_46"}
		("test_46"			start(50000) finish(50000) doctrine(1) cp(1000))
	}
;------------------------------------------------------------------------------------------------------------
}