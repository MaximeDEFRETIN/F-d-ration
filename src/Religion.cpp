#include <iostream>
#include <string>
#include <Religion.h>

using namespace std;

Religion::Religion() : nom(""), description(""), unite{}, batiment{} {}
Religion::Religion(string nom, string description, string unite[2], string batiment[2]) : nom(nom), description(description), unite{}, batiment{} {}

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
