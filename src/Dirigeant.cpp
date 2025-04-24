#include <iostream>
#include <string>
#include <Dirigeant.h>

using namespace std;

Dirigeant::Dirigeant() : nom(""), descr(""), bonus{{{""}, {""}}, {{""}, {""}}} {}
Dirigeant::Dirigeant(string nom, string descr, string bonus[2][2]) : nom(nom), descr(descr), bonus{{{""}, {""}}, {{""}, {""}}} {}

void Dirigeant::setNom(string nom) { this->nom = nom; }
void Dirigeant::setDescr(string descr) { this->descr = descr; }
void Dirigeant::setBonus(string bonus, string descrBonus, string bonusSpec, string descrBonusSpec) {
    this->bonus[0][0] = bonus;
    this->bonus[0][1] = descrBonus;
    this->bonus[1][0] = bonusSpec;
    this->bonus[1][1] = descrBonusSpec;
}
