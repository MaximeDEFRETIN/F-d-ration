#include <iostream>
#include <string>
#include <Cases.h>

using namespace std;

Cases::Cases() : type{{0}, {0}, {0}}, ressources{{0}, {0}},  amenagement{{0}, {0}}, position{{0}, {0}}, rendements{{0}, {0}, {0}} {}
Cases::Cases(int type[3], int ressources[2], int amenagement[2], int position[2], float rendements[3]) : type{{0}, {0}, {0}}, ressources{{0}, {0}},  amenagement{{0}, {0}}, position{{0}, {0}}, rendements{{0}, {0}} {}

void Cases::setType(int type, int plaColl, int forJung) {
    this->type[0] = type;
    this->type[1] = plaColl;
    this->type[2] = forJung;
}
void Cases::setRessources(int type, int nom) {
    this->ressources[0] = type;
    this->ressources[1] = nom;
}
void Cases::setAmenagement(int ame, int route) {
    this->amenagement[0] = ame;
    this->amenagement[1] = route;
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
