;_________________________________________________
;|            Doctrine                            |
;|________________________________________________|


;===================================
;        EXTRA GERMAN DOCTRINE
;         
;===================================

; ======Tier1======

; // 10 DP Flakpanzer 1a
{"doctrine_flakpanzer1a_early"
	("squad_vehicle2_doctrine" side(ger) t( vehicle ) period(early) vehicle(flakpanzer1a) crew1(tankman:2) crew2(tank_commander:1) cw(0) cp(15))
	("doctrine_t1" cool(180) d(early_ger_extra) cost(20))
}

; // Brandenburgers
{"doctrine_squad_brandenburger_early_ext(ger)"
	("squad_with6types_doctrine" side(ger) period(early) c1(brand_1:1) c2(brand_5:1) c3(brand_6:1) c4(brand_3:3) c5(brand_2:2) c6(brand_4:2) t( infsquad ))
	("doctrine_t2" cool(180) d(early_ger_extra) cost(30))
	{tags "limit2"}
}

; // 15 DP sdkfz251/10
{"doctrine_sdkfz251c_10"
	("squad_vehicle_doctrine" side(ger) t( cannon ) period(early) vehicle(sdkfz251c_10) crew(artilleryman:4) cw(0) cp(10))
	("doctrine_t1" cool(240) d(early_ger_extra) cost(30))
}

; ======Tier2======

; // 20DP Sd.Kfz7/1
{"doctrine_sdkfz7_1"
	("squad_vehicle2_doctrine" side(ger) t( medium ) period(early) vehicle(sdkfz7_1_early) crew1(tankman:1) crew2(artilleryman:3) cw(0) cp(10))
	("doctrine_t2" cool(240) d(early_ger_extra) cost(40))
}

; // Panzer III Ausf. G
{"doctrine_panzer3g"
	("squad_vehicle2_doctrine" side(ger) period(early) vehicle(panzer3g) crew1(tankman:4) crew2(tank_commander:1) t(medium))
	("doctrine_t2" cool(360) d(early_ger_extra) cost(45))
}

; // 25DP stug3a
{"doctrine_stug3a"
	("squad_vehicle2_doctrine" side(ger) t( medium ) period(early) vehicle(stug3a) crew1(tankman_stug:3) crew2(tank_commander_stug:1) cw(0) cp(25))
	("doctrine_t2" cool(360) d(early_ger_extra) cost(50))
}

; ======Tier3======
; // 30DP 105mm_lefh18m
{"doctrine_105mm_lefh18m"
	("towed_gun_doctrine" side(ger) period(early) vehicle(sdkfz10) crew_v(rifleman_1:1) cannon(105mm_lefh18m) crew_c(artilleryman:4) t(heavyart artillery))
	("doctrine_t3" cool(480) d(early_ger_extra) cost(30))
}


; // 60DP 210mm Morser 16
{"doctrine_210mm_morser_16"
	("towed_gun_doctrine" side(ger) period(early) vehicle(sdkfz7) crew_v(artilleryman:3) cannon(210mm_morser_16) crew_c(artilleryman:2) t(heavyart artillery))
	("doctrine_t3" cool(480) d(early_ger_extra) cost(60))
}
