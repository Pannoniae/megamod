;_________________________________________________
;|            Doctrine                            |
;|________________________________________________|

;===================================
;        EXTRA SOVIET DOCTRINE
;         
;===================================

; ======Tier1======
; // 10DP Spetnaz
{"doctrine_squad_spetsnaz_mid2(rus)"
	("squad_with3types_doctrine" side(rus) t( infsquad ) period(mid) c1(spetsnaz_1:2) c2(spetsnaz_2:2) c3(spetsnaz_3:2))
	("doctrine_t1" cool(180) d(mid_rus_extra) cost(20))
}

; // 10 DP T-26 shielded
{"doctrine_t26_40"
	("squad_vehicle2_doctrine" side(rus) t( vehicle ) period(mid) vehicle(t26_40) crew1(tankman:2) crew2(tank_commander:1)  cw(0) cp(15))
	("doctrine_t1" cool(180) d(mid_rus_extra) cost(25))
}

; // 15 DP BA-11
{"doctrine_ba11"
	("squad_vehicle2_doctrine" side(rus) t( vehicle ) period(mid) vehicle(ba11) crew1(tankman:3) crew2(tank_commander:1) cw(0) cp(15))
	("doctrine_t1" cool(240) d(mid_rus_extra) cost(30))
}

; ======Tier2======

; // 15DP 76mm_f22_usv
{"doctrine_76mm_f22_usv"
	("towed_gun_doctrine" side(rus) period(mid) vehicle(zis5) crew_v(artilleryman:4) cannon(76mm_f22_usv) crew_c(artilleryman:2) t(cannon))
	("doctrine_t2" cool(360) d(mid_rus_extra) cost(35))
}

; // 20DP Matilda Mk.2
{"doctrine_matilda2"
	("squad_vehicle2_doctrine" side(rus) t( medium ) period(mid) vehicle(matilda2) crew1(tankman:3) crew2(tank_commander:1) cw(0) cp(20))
	("doctrine_t2" cool(360) d(mid_rus_extra) cost(40))
}

; // 25DP T-34/76
{"doctrine_t3476_uztm"
	("squad_vehicle2_doctrine" side(rus) t( medium ) period(mid) vehicle(t3476_uztm) crew1(tankman:3) crew2(tank_commander:1) cw(0) cp(20))
	("doctrine_t2" cool(360) d(mid_rus_extra) cost(50))
}

; ======Tier3======

; // 30DP SU76i
{"doctrine_su76i_mid"
	("squad_vehicle2_doctrine" side(rus) t( medium ) period(mid) vehicle(su76i) crew1(tankman:3) crew2(tank_commander:1) cw(0) cp(25))
	("doctrine_t3" cool(480) d(mid_rus_extra) cost(60))
}

; // 35DP KV-1 122mm U-11
{"doctrine_kv1_122"
	("squad_vehicle2_doctrine" side(rus) t( heavy ) period(mid) vehicle(kv1_122) crew1(tankman:4) crew2(tank_commander:1) cw(0) cp(25))
	("doctrine_t3" cool(480) d(mid_rus_extra) cost(75))
}

; // KV2
{"doctrine_kv2_39_mid"
	("squad_vehicle2_doctrine" side(rus) period(mid) vehicle(kv2_39) crew1(tankman:5) crew2(tank_commander:1) t(heavy arty))
	("doctrine_t3" cool(480) d(mid_rus_extra) cost(85))
}




