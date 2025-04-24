#include <iostream>
#include <string>
#include <Cases.h>

using namespace std;

Cases::Cases() : index(""), type{{""}, {""}, {""}}, position{{0}, {0}}, rendements{{0}, {0}, {0}}, ressources{{""}, {""}}, amenagement{{""}, {""}} {}
Cases::Cases(string index, string type[3], int position[2], float rendements[3], string ressources[2], string amenagement[2]) : index(index), type{{""}, {""}, {""}}, position{{0}, {0}}, rendements{{0}, {0}, {0}}, ressources{{""}, {""}}, amenagement{{""}, {""}} {}

void Cases::setIndex(string index);
void Cases::setType(string type, string attribut, string spécificite);
void Cases::setPosition(int posX, int posY);
void Cases::setRendements(float nourriture, float production, float Or);
void Cases::setRessources(string typeRessource, string ressource);
void Cases::setAmenagement(string amenagement);
