#include <iostream>
#include <string>
#include <Religion.h>

using namespace std;

Religion::Religion() : nom(""), description(""), unite{}, batiment{}, eBatiment{} {}
Religion::Religion(string nom, string description, string unite[2], string batiment[2], float eBatiment[4][2]) : nom(nom), description(description), unite{}, batiment{}, eBatiment{} {}

void Religion::setNom(string nom) { this->nom = nom; }
void Religion::setDescription(string description) { this->description = description; }
void Religion::setUnite(string nUnite, string descrUnite) {
    this->unite[0] = nUnite;
    this->unite[1] = descrUnite;
}
void Religion::setBatiment(string nBat, string descrBat) {
    this->batiment[0] = nBat;
    this->batiment[1] = descrBat;
}
void Religion::setEBatiment(float relAbs, float relRel, float sciAbs, float sciRel, float cltAbs, float cltRel, float bhnAbs, float bhnRel) {
    this->eBatiment[0][0] = relAbs;
    this->eBatiment[0][1] = relRel;
    this->eBatiment[1][0] = sciAbs;
    this->eBatiment[1][1] = sciRel;
    this->eBatiment[2][0] = cltAbs;
    this->eBatiment[2][1] = cltRel;
    this->eBatiment[3][0] = bhnAbs;
    this->eBatiment[3][1] = bhnRel;
}
