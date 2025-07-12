;_________________________________________________
;|            Doctrine                            |
;|________________________________________________|

;===================================
;        EXTRA SOVIET DOCTRINE
;         
;===================================

; ======Tier1======
; // 10 DP T-18
{"doctrine_t18_early"
	("squad_vehicle2_doctrine" side(rus) t( vehicle ) period(early) vehicle(t18) crew1(tankman:1) crew2(tank_commander:1) cw(0) cp(15))
	("doctrine_t1" cool(90) d(early_rus_extra) cost(20))
}

; // 15DP Spetnaz
{"doctrine_squad_spetsnaz_early2(rus)"
	("squad_with3types_doctrine" side(rus) period(early) c1(spetsnaz_1:2) c2(spetsnaz_2:2) c3(spetsnaz_3:2) t( infsquad ))
	("doctrine_t1" cool(180) d(early_rus_extra) cost(30))
	{tags "limit3a"}
}

; // 15 DP BA-27M
{"doctrine_ba27m"
	("squad_vehicle2_doctrine" side(rus) t( vehicle ) period(early) vehicle(ba27m) crew1(tankman:3) crew2(tank_commander:1) cw(0) cp(15))
	("doctrine_t1" cool(180) d(early_rus_extra) cost(30))
}

; ======Tier2======

; // 10 DP T-26 1931a
{"doctrine_t26_31a"
	("squad_vehicle2_doctrine" side(rus) t( vehicle ) period(early) vehicle(t26_31a) crew1(tankman:2) crew2(tank_commander:1) cw(0) cp(15))
	("doctrine_t1" cool(240) d(early_rus_extra) cost(10))
}

; // 15DP SU-12
{"doctrine_su12"
	("squad_vehicle_doctrine" side(rus) t( vehicle ) period(early) vehicle(su12) crew(artilleryman:4) cw(0) cp(10))
	("doctrine_t2" cool(360) d(early_rus_extra) cost(20))
}

; // T28 Late
{"doctrine_t28_late"
	("squad_vehicle2_doctrine" side(rus) period(early) vehicle(t28_late) crew1(tankman:5) crew2(tank_commander:1) t(medium))
	("doctrine_t2" cool(360) d(early_rus_extra) cost(35))
}
; ======Tier3======

; // 35DP SU-5
{"doctrine_su5_early"
	("squad_vehicle2_doctrine" side(rus) t( light ) period(early) vehicle(su5) crew1(tankman:3) crew2(tank_commander:1) cw(0) cp(25))
	("doctrine_t3" cool(480) d(early_rus_extra) cost(35))
}

; // 65DP SU-14
{"doctrine_su14_early"
	("squad_vehicle2_doctrine" side(rus) t( heavyart heavy ) period(early) vehicle(su14) crew1(tankman:1) crew2(artilleryman:5) cw(0) cp(30))
	("doctrine_t3" cool(480) d(early_rus_extra) cost(65)) 
}


