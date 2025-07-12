
; // ----- EXTRA -----
;//t1
("squad_with3types_doc" side(ger) name(squad_ersatz_rifle_early_ext) d(early_ger_extra) period(early) year(early) scf(1) cd(0) ci(60) g(squad_1) c1(ersatz_sl:1) c2(ersatz_sl_asst:1) c3(ersatz_rifle:8) b(squad) cd2(0) ci2(60) t( infsquad ))

;//t2
("squad_with4types_doc" side(ger) name(squad_recon_early_ext) d(early_ger_extra) period(early) year(early) scf(1) cd(0) ci(30) g(squad_2_recon) c1(recon_sl:1) c2(recon_rifle:3) c3(recon_mg:1) c4(recon_mg_asst:1) b(squad) cd2(0) ci2(30) t( infsquad ))
("squad_with5types_doc" side(ger) name(squad_rifle_early_ext) d(early_ger_extra) period(early) year(early) scf(1) cd(0) ci(0) g(squad_2) c1(sl:1) c2(sl_asst:1) c3(rifleman_1:7) c4(mg_26t:1) c5(mg_asst_26t:2) b(squad) cd2(0) ci2(0) t( infsquad ))
("squad_with3types_doc" side(ger) name(squad_at_rifle_early_ext) d(early_ger_extra) period(early) year(early) scf(1) cd(0) ci(0) g(squad_2) c1(sl_smg:1) c2(antitank_1:3) c3(antitank_2:3) b(squad) cd2(0) ci2(0) t( infsquad ))

;//t2+
("squad_with6types_doc" side(ger) name(squad_rifle_vet_early_ext) d(early_ger_extra) period(early) year(early) scf(1) cd(0) ci(180) g(squad_2) c1(vet_sl:1) c2(vet_sl_asst:1) c3(vet_rifle:6) c4(vet_mg:1) c5(vet_mg_asst:2) c6(vet_mg_ammo:1) b(squad) cd2(0) ci2(180) t( infsquad ))

;//t3+
("squad_with6types_doc" side(ger) name(squad_rifle_elite_early_ext) d(early_ger_extra) period(early) year(early) scf(1) cd(120) ci(330) g(squad_3) c1(elite_sl_smg:1) c2(elite_sl_asst:1) c3(elite_rifle:6) c4(elite_mg:1) c5(elite_mg_asst:2) c6(elite_mg_ammo:1) b(squad) cd2(120) ci2(330) t( infsquad ))

;//t4
("squad_with5types_doc" side(ger) name(squad_gebirgs_recon_early_ext) d(early_ger_extra) period(early) year(early) scf(1) cd(240) ci(180) g(squad_4) c1(gebirgs_recon_sl:1) c2(gebirgs_recon_sl_asst:1) c3(gebirgs_recon_rifle:4) c4(gebirgs_recon_mg:1) c5(gebirgs_recon_mg_asst:1) b(squad) cd2(240) ci2(180) t( infsquad ))
("squad_with5types_doc" side(ger) name(squad_gebirgs_early_ext) d(early_ger_extra) period(early) year(early) scf(1) cd(240) ci(300) g(squad_4) c1(gebirgs_sl:1) c2(gebirgs_sl_asst:1) c3(gebirgs_rifle:6) c4(gebirgs_mg:1) c5(gebirgs_mg_asst:1) b(squad) cd2(240) ci2(300) t( infsquad ))


{"105mm_lefh18m"
	("vehicle"  period(early) year(early) cd(0) ci(0) t(artillery) side(ger) crew(artilleryman:4) g(empl14) b(art) cd2(900) ci2(30) cw(1) cp(26)
	cost(750))
}
{"210mm_morser_16"
	("vehicle"  period(early) year(early) cd(0) ci(0) t(heavyart artillery) side(ger) crew(rifleman_1:4) g(empl15) b(art) cd2(1200) ci2(30) cw(2) cp(5)
	cost(1000))
}
{"sdkfz251c_10"
	("vehicle2"  period(early) year(early) cd(0) ci(0) t(vehicle) side(ger) crew1(rifleman_1:1) crew2(artilleryman:3) g(wheel10) b(lt) cd2(90) ci2(30) cw(2) cp(13)
	cost(250))
}
{"sdkfz7_1_early"
	("vehicle2" period(early) year(early) cd(0) ci(0) t(vehicle) side(ger) crew1(rifleman_1:1) crew2(artilleryman:3) g(spg1) b(lt) cd2(90) ci2(30) cw(6) cp(20)
	cost(300))
}
{"flakpanzer1a"
	("vehicle2" period(early) year(early) cd(0) ci(0) t(light) side(ger) crew1(tankman:2) crew2(tank_commander:1) g(light7) b(lt) cd2(90) ci2(60) cw(4) cp(12)
	cost(230))
}
{"panzer3g"
	("vehicle2" period(early) year(early) cd(0) ci(0) t(medium) side(ger) crew1(tankman:4) crew2(tank_commander:1) g(medium2) b(mt) cd2(480) ci2(60) cw(6) cp(15)
	cost(340))
}
{"stug3a"
	("vehicle2" period(early) year(early) cd(0) ci(0) t(medium) side(ger) crew1(tankman_stug:3) crew2(tank_commander:1) g(spg3) b(td) cd2(600) ci2(60) cw(6) cp(20)
	cost(370))
}
