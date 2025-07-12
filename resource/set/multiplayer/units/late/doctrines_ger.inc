;_________________________________________________
;|            Doctrine                            |
;|________________________________________________|


;===================================
;        EXTRA GERMAN DOCTRINE
;         
;===================================

; ======Tier1======
; // 5DP raketenwerfer
;{"doctrine_88mm_raketenwerfer"
;	("squad_vehicle_doctrine" side(ger) t( cannon ) period(late) vehicle(88mm_raketenwerfer) crew(artilleryman:2) cw(0) cp(10))
;	("doctrine_t1" cool(180) d(late_ger_extra) cost(10))
;}

; // 10DP Volksgrenadier sturm squad
{"doctrine_squad_volksgrenadiersturm2(ger)"
	("squad_with6types_doctrine" side(ger) t( infsquad ) period(late) c1(volksg_sl:1) c2(volksg_sl_asst:1) c3(volksg_stg:1) c4(volksg_smg:3) c5(volksg_sa_scope:1) c6(volksg_sa_pzf:2))
	("doctrine_t1" cool(180) d(late_ger_extra) cost(20))
}

; // 10 DP panzer2j
{"doctrine_panzer2j_late"
	("squad_vehicle2_doctrine" side(ger) t( vehicle ) period(late) vehicle(panzer2j) crew1(tankman:2) crew2(tank_commander:1) cw(0) cp(15))
	("doctrine_t1" cool(240) d(late_ger_extra) cost(25))
}

; // 15 DP sdkfz251/2
{"doctrine_sdkfz251d_2"
	("squad_vehicle2_doctrine" side(ger) t( vehicle ) period(late) vehicle(sdkfz251d_2) crew1(tankman:2) crew2(tank_commander:1) cw(0) cp(15))
	("doctrine_t1" cool(240) d(late_ger_extra) cost(30))
}

; ======Tier2======

; // 25DP StuG IV G
{"doctrine_stug4g"
	("squad_vehicle2_doctrine" side(ger) t( medium ) period(late) vehicle(stug4g) crew1(tankman_stug:3) crew2(tank_commander_stug:1) cw(0) cp(25))
	("doctrine_t2" cool(360) d(late_ger_extra) cost(50))
}

; // 35DP 88mm Flak37 Sfl.
{"doctrine_88mmflak37sfl"
	("squad_vehicle2_doctrine" side(ger) t( vehicle heavycan ) period(late) vehicle(88mmflak37sfl) crew1(tankman_stug:3) crew2(tank_commander_stug:1) cw(0) cp(25))
	("doctrine_t2" cool(360) d(late_ger_extra) cost(70))
}

; // 40DP Pz5g M10
{"doctrine_pz5g_m10"
	("squad_vehicle2_doctrine" side(ger) t( heavy ) period(late) vehicle(pz5g_m10) crew1(tankman:4) crew2(tank_commander:1) cw(0) cp(30))
	("doctrine_t2" cool(360) d(late_ger_extra) cost(80)) 
}

; ======Tier3======

; // 40DP zgkw303f
{"doctrine_zgkw303f"
	("squad_vehicle2_doctrine" side(ger) t( light heavyart) period(late) vehicle(zgkw303f) crew1(tankman:1) crew2(tank_commander:1) cw(0) cp(20))
	("doctrine_t3" cool(480) d(late_ger_extra) cost(80))
}

; // 40DP 128mm_pak44
{"doctrine_128mm_pak44"
	("towed_gun_doctrine" side(ger) period(late) t( cannon heavyart) vehicle(sdkfz7) crew_v(rifleman_1:3) cannon(128mm_pak44) crew_c(artilleryman:4))
	("doctrine_t3" cool(480) d(late_ger_extra) cost(85))
}

; // 45DP Tiger P
{"doctrine_tiger_p"
	("squad_vehicle2_doctrine" side(ger) t( heavy ) period(late) vehicle(tiger_p) crew1(tankman:4) crew2(tank_commander:1) cw(0) cp(35))
	("doctrine_t3" cool(480) d(late_ger_extra) cost(90)) 
}


