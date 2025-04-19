#include <iostream>
#include <string>
#include <Unnites.h>

using namespace std;

Unnites::Unnites() : nom(""), descr(""), status(""), type{{0}, {0}, {0}, {0}}, bonus{}, index(""), niv(0), PV{{0}, {0}}, XP{{0}, {0}}, puiss{{0}, {0}} {}
Unnites::Unnites(string nom, string descr, string status, string type[4], string bonus[5][2], string index, int niv, float PV[2], float XP[2], float puiss[2]) : nom(nom), descr(descr), status(status), type{{0}, {0}}, bonus{}, index(index), niv(niv), PV{{0}, {0}}, XP{{0}, {0}}, puiss{{0}, {0}} {}

void Unnites::setNom(string nom) {
    this->nom = nom;
    cout << "Nom :\n" << nom << "\n" << endl;
}
void Unnites::setDescr(string descr) {
    this->descr = descr;
    cout << "Description :\n" << descr << "\n" << endl;
}
void Unnites::setStatus(string status) {
    this->status = status;
    cout << "État :\n" << status << "\n" << endl;
}
void Unnites::setBonus(string bonus1, string descrBonus1, string bonus2, string descrBonus2, string bonus3, string descrBonus3, string bonus4, string descrBonus4, string bonus5, string descrBonus5) {
    this->bonus[0][0] = bonus1;
    this->bonus[0][1] = descrBonus1;
    this->bonus[1][0] = bonus2;
    this->bonus[1][1] = descrBonus2;
    this->bonus[2][0] = bonus3;
    this->bonus[2][1] = descrBonus3;
    this->bonus[3][0] = bonus4;
    this->bonus[3][1] = descrBonus4;
    this->bonus[4][0] = bonus5;
    this->bonus[4][1] = descrBonus5;
    cout << "Bonus :\n" << this->bonus[0][0] << " -> " << this->bonus[0][1] << "\n" << this->bonus[1][0] << " -> " << this->bonus[1][1] << "\n" << this->bonus[2][0] << " -> " << this->bonus[2][1] << "\n" << this->bonus[3][0] << " -> " << this->bonus[3][1] << "\n" << this->bonus[4][0] << " -> " << this->bonus[4][1] << "\n" << endl;
}
void Unnites::setNiv(int niv) {
    this->niv = niv;
    cout << "Niveau :\n" << this->niv << "\n" << endl;
}
void Unnites::setPV(float PV, float PVmax) {
    this->PV[0] = PV;
    this->PV[1] = PVmax;
    cout << "Points de vie :\n" << this->PV[0] << "/" << this->PV[1] << "\n" << endl;
    (this->PV[1]-this->PV[0] >= 1)?this->PV[0]+=1:this->PV[0]+=(this->PV[1]-this->PV[0]);
    cout << "Points de vie :\n" << this->PV[0] << "/" << this->PV[1] << "\n" << endl;
}
void Unnites::setXP(float XP, float XPmax) {
    this->XP[0] = XP;
    this->XP[1] = XPmax;
    cout << "Expériences :\n" << this->XP[0] << "/" << this->XP[1] << "\n" << endl;
}
void Unnites::setPuiss(float puiss) {
    this->puiss[0] = puiss;
    this->puiss[1] = (puiss + ((this->status == "Retranché")?puiss*0.1:0)) * (this->PV[0] / this->PV[1]);
    cout << "Puissance :\n" << this->puiss[0] << " -> " << this->puiss[1] << "\n" << endl;
}
void Unnites::setType(string type, string typeSpat, string typeAtt, string typeEre) {
    this->type[0] = type;
    this->type[1] = typeSpat;
    this->type[2] = typeAtt;
    this->type[3] = typeEre;
    cout << "Type :\n" << this->type[0] << ", " << this->type[1] << ", " << this->type[2] << ", " << this->type[3]  << "\n" << endl;
}
void Unnites::setIndex(string index) {
    this->index = index;
    cout << "Index :\n" << this->index << "\n" << endl;
}
