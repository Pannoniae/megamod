;_________________________________________________
;|            Doctrine                            |
;|________________________________________________|

;===================================
;        EXTRA DOCTRINE
;        Mannerheim Cross  
;===================================

; ======Tier1======

; // 5DP 25mm Pst/k34
{"doctrine_25mm_pstk34_late"
	("squad_vehicle_doctrine" side(fin) period(late) vehicle(25mm_pstk34) crew(artilleryman:2) t(cannon)) 
	("doctrine_t1" cool(90) d(late_fin_extra) cost(10))
}

; // 10DP heavy assault squad
{"doctrine_squad_assault_late(fin)"
	("squad_with6types_doctrine" side(fin) period(late) c1(squadleader:1) c2(smg_drum:2) c3(smg_ppsh:2) c4(smg_pps:1) c5(rifleman_sa:2) c6(mg_dp:1) t( infsquad ))
	("doctrine_t1" cool(90) d(late_fin_extra) cost(20))
}

; // 15DP Vickers 6t B
{"doctrine_vickers_6t_late"
	("squad_vehicle2_doctrine" side(fin) period(late) vehicle(vickers_6t_b) crew1(tankman:2) crew2(tank_commander:1) t(light))
	("doctrine_t1" cool(240) d(late_fin_extra) cost(30))
}

; ======Tier2======

;// 5DP Recon 
{"doctrine_fokker_fin_late"
	("squad_vehicle_doctrine" side(fin) t( vehicle ) period(late) vehicle(fokker_fin) crew(pilot:1))
	("doctrine_t2" cool(360) d(late_fin_extra) cost(10))
	{action "airstrike:reconnaissance_50"} 
}

; // 25DP T-34/76 
{"doctrine_t3476_42_fin_late"
	("squad_vehicle2_doctrine" side(fin) period(late) vehicle(t3476_42_fin) crew1(tankman:3) crew2(tank_commander:1) t(medium))
	("doctrine_t2" cool(360) d(late_fin_extra) cost(50))
}

; // 30DP 105mm K/29
{"doctrine_105mm_k29_late"
	("towed_gun_doctrine" side(fin) period(late) vehicle(ford_v3000) crew_v(artilleryman:3) cannon(105mm_k29) crew_c(artilleryman:2) t(artillery))
	("doctrine_t2" cool(360) d(late_fin_extra) cost(60))
}

; ======Tier3======

; // 15DP Airstrike
{"doctrine_po2_fin_late"
	("squad_vehicle_doctrine" side(fin) period(late) vehicle(po2_fin) crew(pilot:2) cw(0) cp(25) t(heavyart artillery))
	("doctrine_t3" cool(360) d(late_fin_extra) cost(30))
	{action "airstrike:sc_250_mp"}
}

; // 30DP T-34/85 fin
{"doctrine_t3485_fin"
	("squad_vehicle3_doctrine" side(fin) period(late) vehicle(t3485_fin) crew1(tankman:4) crew2(tank_commander:1) crew3(smg_ppsh:4) t(medium))
	("doctrine_t3" cool(480) d(late_fin_extra) cost(60))
}

; // 45DP 210mm H/17
{"doctrine_210mm_h17_late"
	("towed_gun_doctrine" side(fin) period(late) vehicle(ford_v3000) crew_v(artilleryman:3) cannon(210mm_h17) crew_c(artilleryman:2) t(heavyart artillery))
	("doctrine_t2" cool(480) d(late_fin_extra) cost(90))
}

