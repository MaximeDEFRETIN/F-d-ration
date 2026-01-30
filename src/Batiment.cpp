#include <iostream>
#include <string>
#include <Batiment.h>

using namespace std;

Batiment::Batiment() : nom(""), description(""), requiert(""), effets{}, couts(0), mnt(0) {}
Batiment::Batiment(string nom, string description, string requiert, float effets[6][2], float couts, float mnt) : nom(nom), description(description), requiert(requiert), effets{}, couts(couts), mnt(mnt) {}

void Batiment::setNom(string nom) { this->nom = nom; }
void Batiment::setDescription(string description) { this->description = description; }
void Batiment::setRequiert(string requiert) { this->requiert = requiert; }
void Batiment::setEffets(float relAbs, float relRel, float sciAbs, float sciRel, float cltAbs, float cltRel, float prodAbs, float prodRel, float orAbs, float orRel, float bhnAbs, float bhnRel) {
    this->effets[0][0] = relAbs;
    this->effets[0][1] = relRel;
    this->effets[1][0] = sciAbs;
    this->effets[1][1] = sciRel;
    this->effets[2][0] = cltAbs;
    this->effets[2][1] = cltRel;
    this->effets[3][0] = prodAbs;
    this->effets[3][1] = prodRel;
    this->effets[4][0] = orAbs;
    this->effets[4][1] = orRel;
    this->effets[5][0] = bhnAbs;
    this->effets[5][1] = bhnRel;
}
void Batiment::setCouts(float couts) { this->couts = couts; }
void Batiment::setMnt(float mnt) { this->mnt = mnt; }
