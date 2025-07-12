
; // ----- EXTRA -----
;//t2
("squad_with4types_doc" side(rus) name(squad_recon_early_ext) d(early_rus_extra) period(early) year(early) scf(1) cd(0) ci(0) g(squad_2_recon) c1(recon_nco:1) c2(recon_rifle:7) c3(recon_mg:1) c4(recon_mg_asst:1) b(squad) cd2(0) ci2(0) t( infsquad ))
("squad_with4types_doc" side(rus) name(squad_rifle_early_ext) d(early_rus_extra) period(early) year(early) scf(1) cd(0) ci(0) g(squad_2) c1(nco_rifle:1) c2(rifleman_1:8) c3(mgun_1:1) c4(mgun_2:1) b(squad) cd2(0) ci2(0) t( infsquad ))

;//t3
("squad_with4types_doc" side(rus) name(squad_cav_sap_recon_early_ext) d(early_rus_extra) period(early) year(early) scf(1) cd(120) ci(150) g(squad_3) c1(cav_sap_recon_nco_sa:1) c2(cav_sap_recon_rifle:7) c3(cav_sap_recon_mg:1) c4(cav_sap_recon_mg_asst:1) b(squad) cd2(120) ci2(150) t( infsquad ))
("squad_with5types_doc" side(rus) name(squad_cav_early_ext) d(early_rus_extra) period(early) year(early) scf(1) cd(120) ci(210) g(squad_3) c1(cav_nco_rifle:1) c2(cav_senior_sa:1) c3(cav_rifle:7) c4(cav_mg:1) c5(cav_mg_asst:1) b(squad) cd2(120) ci2(210) t( infsquad ))

;//t4
("squad_with6types_doc" side(rus) name(squad_para_early_ext) d(early_rus_extra) period(early) year(early) scf(1) cd(240) ci(330) g(squad_4) c1(para_nco:1) c2(para_nco_asst:1) c3(para_2:1) c4(para_5:7) c5(para_mg:1) c6(para_mg_asst:1) b(squad) cd2(240) ci2(330) t( infsquad ))


{"su12"
	("vehicle"  period(early) year(early) cd(0) ci(0) t(cannon mediumcan) side(rus) crew(artilleryman:4) g(wheel15) b(lt) cd2(90) ci2(30) cw(0) cp(14)
	cost(380))
}
{"ba27m"
	("vehicle2" period(early) year(early) cd(0) ci(0) t(vehicle) side(rus) crew1(tankman:3) crew2(tank_commander:1) g(wheel15) b(lt) cd2(90) ci2(30) cw(2) cp(10)
	cost(200))
}
{"t18"
	("vehicle2" period(early) year(early) cd(0) ci(0) t(light) side(rus) crew1(tankman:2) crew2(tank_commander:1) g(light12) b(lt) cd2(90) ci2(60) cw(4) cp(10)
	cost(200))
}
{"t26_31a"
	("vehicle2" period(early) year(early) cd(0) ci(0) t(light) side(rus) crew1(tankman:2) crew2(tank_commander:1) g(light13) b(lt) cd2(90) ci2(60) cw(4) cp(8)
	cost(210))
}
{"t28_late"
	("vehicle2" period(early) year(early) cd(0) ci(0) t(medium) side(rus) crew1(tankman:5) crew2(tank_commander:1) g(medium5) b(mt) cd2(480) ci2(60) cw(6) cp(15)
	cost(360))
}
{"su5"
	("vehicle2" period(early) year(early) cd(0) ci(0) t(light) side(rus) crew1(tankman:2) crew2(tank_commander:1) g(spg1) b(art) cd2(600) ci2(60) cw(4) cp(15)
	cost(400))
}
{"su14"
	("vehicle2"  period(early) year(early) cd(0) ci(0) t(cannon artillery heavyart) side(rus) crew1(tankman:1) crew2(artilleryman:5) g(spg2) b(art) cd2(900) ci2(60) cw(0) cp(35)
	cost(1500))
}
