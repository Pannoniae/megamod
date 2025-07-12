;_________________________________________________
;|            Doctrine                            |
;|________________________________________________|


;===================================
;        EXTRA GERMAN DOCTRINE
;         
;===================================

; ======Tier1======

; // 5 DP Osttruppen
{"doctrine_squad_osttruppen2(ger)"
	("squad_with3types_doctrine" side(ger) t( infsquad ) period(mid) c1(nco:1) c2(osttrupp_1:4) c3(osttrupp_2:4))
	("doctrine_t1" cool(90) d(mid_ger_extra) cost(10))
}

; // 10 DP Flakpanzer 1a
{"doctrine_flakpanzer1a"
	("squad_vehicle2_doctrine" side(ger) t( vehicle ) period(mid) vehicle(flakpanzer1a) crew1(tankman:2) crew2(tank_commander:1) cw(0) cp(15))
	("doctrine_t1" cool(180) d(mid_ger_extra) cost(20))
}

; // 15 DP panzer2j
{"doctrine_panzer2j"
	("squad_vehicle2_doctrine" side(ger) t( vehicle ) period(mid) vehicle(panzer2j) crew1(tankman:2) crew2(tank_commander:1) cw(0) cp(15))
	("doctrine_t1" cool(240) d(mid_ger_extra) cost(30))
}

; ======Tier2======

; // 15DP sdkfz251/9
{"doctrine_sdkfz251c_9"
	("squad_vehicle_doctrine" side(ger) t( cannon ) period(mid) vehicle(sdkfz251c_9) crew(artilleryman:4) cw(0) cp(10))
	("doctrine_t2" cool(240) d(mid_ger_extra) cost(30))
}
; // 20DP PaK36(r)
{"doctrine_76mm_pak36r"
	("towed_gun_doctrine" side(ger) period(mid) vehicle(blitz3_6) crew_v(artilleryman:4) cannon(76mm_pak36r) crew_c(artilleryman:2) t(cannon))
	("doctrine_t2" cool(360) d(mid_ger_extra) cost(35))
}

; // 25DP Marder 139
{"doctrine_marder139"
	("squad_vehicle2_doctrine" side(ger) t( medium ) period(mid) vehicle(marder139) crew1(tankman_stug:3) crew2(tank_commander_stug:1) cw(0) cp(25))
	("doctrine_t2" cool(360) d(mid_ger_extra) cost(50))
}

; ======Tier3======
; // 30DP Dicker_Max
{"doctrine_dicker_max"
	("squad_vehicle2_doctrine" side(ger) t( medium ) period(mid) vehicle(dicker_max) crew1(tankman_stug:3) crew2(tank_commander_stug:1) cw(0) cp(25))
	("doctrine_t3" cool(480) d(mid_ger_extra) cost(60))
}

; // 40DP Geschuetzwagen_ivb
{"doctrine_geschuetzwagen_ivb"
	("squad_vehicle2_doctrine" side(ger) t( medium heavyart ) period(mid) vehicle(geschuetzwagen_ivb) crew1(tankman_stug:3) crew2(tank_commander_stug:1) cw(0) cp(25))
	("doctrine_t3" cool(480) d(mid_ger_extra) cost(80))
}

; // 45DP b1sf
{"doctrine_b1sf"
	("squad_vehicle2_doctrine" side(ger) t( heavy ) period(mid) vehicle(b1sf) crew1(tankman:3) crew2(tank_commander:1) cw(0) cp(35))
	("doctrine_t3" cool(480) d(mid_ger_extra) cost(90)) 
}

;//t1
("squad_with3types_doc" side(ger) name(squad_ersatz_rifle_mid_ext) d(mid_ger_extra) period(mid) scf(1) cd(0) ci(60) g(squad_1) c1(ersatz_sl:1) c2(ersatz_sl_asst:1) c3(ersatz_rifle:8) b(inf1) t( infsquad ))

;//t2
("squad_with5types_doc" side(ger) name(squad_recon_mid_ext) d(mid_ger_extra) period(mid) scf(1) cd(0) ci(30) g(squad_2_recon) c1(recon_sl:1) c2(recon_sl_asst:1) c3(recon_rifle:2) c4(recon_mg:1) c5(recon_mg_asst:1) b(inf1) t( infsquad ))

("squad_with6types_doc" side(ger) name(squad_rifle_mid_ext) d(mid_ger_extra) period(mid) scf(1) cd(0) ci(0) g(squad_2) c1(sl:1) c2(sl_asst:1) c3(rifleman_1:5) c4(mgun_1:1) c5(mgun_2:1) c6(mgun_3:1) b(inf1) t( infsquad ))


("squad_vehicle_with6types_doc_i" side(ger) name(squad_rifle_motor_mid_ext_1) d(mid_ger_extra) period(mid) scf(1) cd(90) ci(300) g(squad_2_motor) vehicle(blitz3_6) c1(rifleman_1:1) c2(sl:1) c3(sl_asst:1) c4(rifleman_1:6) c5(mgun_1:2) c6(mgun_2_rifle:2) b(inf1) i(100) t() t(vehicle))
("squad_vehicle_with6types_doc_i" side(ger) name(squad_rifle_motor_mid_ext_2) d(mid_ger_extra) period(mid) scf(1) cd(0) ci(180) g(squad_2_motor) vehicle(blitz3_6) c1(rifleman_1:1) c2(sl:1) c3(sl_asst_sa:1) c4(rifleman_1:6) c5(mgun_1:2) c6(mgun_2_rifle:2) b(inf1) i(100) t())
("squad_vehicle_with7types_doc_i" side(ger) name(squad_rifle_motor_mid_ext_3) d(mid_ger_extra) period(mid) scf(1) cd(0) ci(0) g(squad_2_motor) vehicle(blitz3_6) c1(rifleman_1:1) c2(sl:1) c3(sl_asst_sa:1) c4(rifleman_1:5) c5(antitank_1:1) c6(mgun_1:2) c7(mgun_2_rifle:2) b(inf1) i(100) t())

;//t2+
("squad_with6types_doc" side(ger) name(squad_rifle_vet_mid_ext) d(mid_ger_extra) period(mid) scf(1) cd(0) ci(150) g(squad_2) c1(vet_nco:1) c2(vet_nco_asst:1) c3(vet_rifle:5) c4(vet_mg:1) c5(vet_mg_asst:1) c6(vet_mg_ammo:1) b(inf1) t( infsquad ))

;//t3+
("squad_with6types_doc" side(ger) name(squad_rifle_elite_mid_ext) d(mid_ger_extra) period(mid) scf(1) cd(120) ci(330) g(squad_3) c1(elite_sl_smg:1) c2(elite_sl_asst:1) c3(elite_rifle:6) c4(elite_mg:1) c5(elite_mg_asst:2) c6(elite_mg_ammo:1) b(inf1) t( infsquad ))

;//t4
("squad_with5types_doc" side(ger) name(squad_gebirgs_recon_mid_ext) d(mid_ger_extra) period(mid) scf(1) cd(240) ci(180) g(squad_4) c1(gebirgs_recon_sl:1) c2(gebirgs_recon_sl_asst:1) c3(gebirgs_recon_rifle:4) c4(gebirgs_recon_mg:1) c5(gebirgs_recon_mg_asst:1) b(inf1) t( infsquad ))

("squad_with5types_doc" side(ger) name(squad_gebirgs_mid_ext) d(mid_ger_extra) period(mid) scf(1) cd(240) ci(300) g(squad_4) c1(gebirgs_sl:1) c2(gebirgs_sl_asst:1) c3(gebirgs_rifle:6) c4(gebirgs_mg:1) c5(gebirgs_mg_asst:1) b(inf1) t( infsquad ))

