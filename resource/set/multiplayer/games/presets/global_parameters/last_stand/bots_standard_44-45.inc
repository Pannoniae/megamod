(define "team_a"
	{unitset
		{value "44|45"}
	}
	{commandPoints "*=%cp_a"}
	(include "../../global_parameters/unitlimits.inc")
	{chargeFactors
		{value "*=1.00"}
	}
	(include "budget_defender.inc" s(%start_a) f(%finish_a) d(%doctrine))
)

(define "team_b"
	{unitset
		{value "44|45"}
	}
	{commandPoints "*=%cp_b"}
	(include "../../global_parameters/unitlimits.inc")
	{chargeFactors
		{value "*=1.00"}
	}
	(include "budget_attacker.inc" s(%start_b) f(%finish_b) d(%doctrine))
)

(include "bots_laststand.inc")
