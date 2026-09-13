#ifndef CASES_H
#define CASES_H

#include <iostream>
#include <string>

using namespace std;

class Cases {
    public:
        Cases();
        Cases(int type[3], int ressources, int amenagement[2], int position[2], float rendements[3]);

        int getType(int x) { return this->type[x]; }
        int getRessources() { return this->ressources; }
        int getAmenagement(int x) { return this->amenagement[x]; }
        int getPosition(int x) { return this->position[x]; }
        float getRendements(int x) { return this->rendements[x]; }

        /** Attribue ses spécificités à une case
              type indique si la case est marritime ou terrestre
                0 -> terrestre
                1 -> marritime
              plaColl indique quel genre de terrain est la case
                0 -> plaine
                1 -> colline
                2 -> prairie
                3 -> toundra
                4 -> désert
                5 -> montagne
                6 -> océan
              forJungle indique si sur la case il y a une fort, une jungle ou non
                0 -> rien
                1 -> forêt
                2 -> jungle
        **/
        void setType(int type, int plaColl, int forJung);
        /** Attribue, ou non, une ressource à une case
               0 -> aucune ressource
               1 -> or
               2 -> argent
               3 -> fer
               4 -> aluminium
               5 -> charbon
               6 -> uranium
               7 -> pétrol
               8 -> blé
               9 -> raisin
               10 -> sucre
               11 -> encens
               12 -> épices
        **/
        void setRessources(int ress);
        /** Attribue un aménagement à une case
              ame -> indique le type d'aménagement affectant le rendement de la case
                0 -> rien
                1 -> ferme
                2 -> plantation
                3 -> élevage
                4 -> mine
                5 -> puit de pétrole
              route -> indique l'existence, ou non, d'une route
                0 -> rien
                1 -> présence d'une route
        **/
        void setAmenagement(int ame, int route);
        void setPosition(int x, int y);
        void setRendements(float nourriture, float production, float Or);

        void genCart(int nbLarg, int type);

    protected:
        int position[2], type[3], ressources, amenagement[2];
        float rendements[3];

    private:
};

#endif // CASES_H
