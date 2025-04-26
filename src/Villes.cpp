#include <iostream>
#include <string>
#include <Villes.h>

using namespace std;

Villes::Villes() : nom(""), listBatiments{}, listReligions{}, rendement{}, nbHabitant(0) {}
Villes::Villes(string nom, string listBatiments[5], string listReligions[5], float rendement[5], int nbHabitant) : nom(nom), listBatiments{}, listReligions{}, rendement{}, nbHabitant(nbHabitant) {}

void Villes::setNom(string nom) { this->nom = nom; }
void Villes::setListBatiments(string bat1, string bat2, string bat3, string bat4, string bat5) {
    this->listBatiments[0] = bat1;
    this->listBatiments[1] = bat2;
    this->listBatiments[2] = bat3;
    this->listBatiments[3] = bat4;
    this->listBatiments[4] = bat5;
}
void Villes::setListReligions(string rel1, string rel2, string rel3, string rel4, string rel5) {
    this->listReligions[0] = rel1;
    this->listReligions[1] = rel2;
    this->listReligions[2] = rel3;
    this->listReligions[3] = rel4;
    this->listReligions[4] = rel5;
}
void Villes::setRendement(float bouffe, float prod, float Or, float science, float culture) {
    this->rendement[0] = bouffe;
    this->rendement[1] = prod;
    this->rendement[2] = Or;
    this->rendement[3] = science;
    this->rendement[4] = culture;
}
void Villes::setNbHabitant(int nbHab) { this->nbHabitant = nbHab; }

void Villes::construction() {

}
