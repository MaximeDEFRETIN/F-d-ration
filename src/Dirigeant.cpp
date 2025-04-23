#include <iostream>
#include <string>
#include <Dirigeant.h>

using namespace std;

Dirigeant::Dirigeant() : nom(""), descr(""), bonus{{{""}, {""}}, {{""}, {""}}} {}
Dirigeant::Dirigeant(string nom, string descr, string bonus[2][2]) : nom(nom), descr(descr), bonus{{{""}, {""}}, {{""}, {""}}} {}

void Dirigeant::setNom(string nom) {
    this->nom = nom;
    cout << "Nom : " << this->nom << "\n" << endl;
}
void Dirigeant::setDescr(string descr) {
    this->descr = descr;
    cout << "Description : " << this->descr << "\n" << endl;
}
void Dirigeant::setBonus(string bonus, string descrBonus, string bonusSpec, string descrBonusSpec) {
    this->bonus[0][0] = bonus;
    this->bonus[0][1] = descrBonus;
    this->bonus[1][0] = bonusSpec;
    this->bonus[1][1] = descrBonusSpec;
    cout << "Bonus : " << this->bonus[0][0] << " -> " << this->bonus[0][1] << ", " << this->bonus[1][0] << " -> " << this->bonus[1][1] << "\n" << endl;
}
