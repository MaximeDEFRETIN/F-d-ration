#include <iostream>
#include <string>
#include <Cases.h>

using namespace std;

Cases::Cases() : index(""), type{{""}, {""}, {""}}, ressources{{""}, {""}},  amenagement{{""}, {""}}, position{{0}, {0}}, rendements{{0}, {0}, {0}} {}
Cases::Cases(string index, string type[3], string ressources[2], string amenagement[2], int position[2], float rendements[3]) : index(index), type{{0}, {0}, {0}}, ressources{{""}, {""}},  amenagement{{""}, {""}}, position{{0}, {0}}, rendements{{0}, {0}} {}

void Cases::setIndex(string index) { this->index = index; }
void Cases::setType(string type, string plaColl, string forJung) {
    this->type[0] = type;
    this->type[1] = plaColl;
    this->type[2] = forJung;
}
void Cases::setRessources(string type, string nom) {
    this->ressources[0] = type;
    this->ressources[1] = nom;
}
void Cases::setAmenagement(string a1, string a2) {
    this->amenagement[0] = a1;
    this->amenagement[1] = a2;
}
void Cases::setPosition(int x, int y) {
    this->position[0] = x;
    this->position[1] = y;
}
void Cases::setRendements(float nourriture, float production, float Or) {
    this->rendements[0] = nourriture;
    this->rendements[1] = production;
    this->rendements[2] = Or;
}
