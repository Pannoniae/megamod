;_________________________________________________
;|            Doctrine                            |
;|________________________________________________|

;===================================
;        EXTRA SOVIET DOCTRINE
;         
;===================================

; ======Tier1======

; // 5DP Bazooka unit
{"doctrine_squad_bazookers2(rus)"
	("squad_with2types_doctrine" side(rus) t( infsquad ) period(late) c1(antitank_1:4) c2(antitank_2:2) c3(nco:1))
	("doctrine_t1" cool(90) d(late_rus_extra) cost(10))
}

; // 5DP M3 Halftrack
{"doctrine_m3_rus"
	("squad_vehicle_doctrine" side(rus) t( cannon ) period(late) vehicle(m3_rus) crew(artilleryman:2) cw(0) cp(10))
	("doctrine_t1" cool(180) d(late_rus_extra) cost(15))
}

; // 10 DP M17
{"doctrine_m17"
	("squad_vehicle2_doctrine" side(rus) t( vehicle ) period(late) vehicle(m17) crew1(tankman:2) crew2(tank_commander:1) cw(0) cp(15))
	("doctrine_t1" cool(180) d(late_rus_extra) cost(20))
	{icon 54}
}
{"doctrine_zis6_61k"
	("squad_vehicle_doctrine" side(rus) t( vehicle ) period(late) vehicle(zis6_61k) crew(artilleryman:4) cw(0) cp(15))
	("doctrine_t1" cool(180) d(late_rus_extra) cost(20))
	{icon 54}
}

; ======Tier2======

; // 10 DP t80
{"doctrine_t80"
	("squad_vehicle2_doctrine" side(rus) t( vehicle ) period(late) vehicle(t80) crew1(tankman:2) crew2(tank_commander:1) cw(0) cp(15))
	("doctrine_t2" cool(240) d(late_rus_extra) cost(25))
}

; // 20DP SU57
{"doctrine_su57"
	("squad_vehicle2_doctrine" side(rus) t( vehicle ) period(late) vehicle(su57) crew1(tankman:3) crew2(tank_commander:1) cw(0) cp(25))
	("doctrine_t2" cool(360) d(late_rus_extra) cost(40))
}

; // 35DP wolverine
{"doctrine_wolverine"
	("squad_vehicle2_doctrine" side(rus) t( medium ) period(late) vehicle(wolverine) crew1(tankman:3) crew2(tank_commander:1) cw(0) cp(25))
	("doctrine_t2" cool(360) d(late_rus_extra) cost(70))
}

; ======Tier3======
{"doctrine_152mm_d1"
	("towed_gun_doctrine" side(rus) period(late) vehicle(zis5) crew_v(rifleman_1:2) cannon(152mm_d1) crew_c(artilleryman:4) t(heavyart artillery))
	("doctrine_t3" cool(480) d(late_rus_extra) cost(80))
}

; // 40DP KV-122
{"doctrine_kv122"
	("squad_vehicle2_doctrine" side(rus) t( medium ) period(late) vehicle(kv122) crew1(tankman:3) crew2(tank_commander:1) cw(0) cp(30))
	("doctrine_t3" cool(480) d(late_rus_extra) cost(85)) 
}

; // 45DP bm8-48
{"doctrine_bm8-48"
	("squad_vehicle2_doctrine" side(rus) t( light heavyart) period(late) vehicle(bm8-48) crew1(tankman:1) crew2(tank_commander:1) cw(0) cp(20))
	("doctrine_t3" cool(480) d(late_rus_extra) cost(90))
}

