#ifndef CASES_H
#define CASES_H

#include <iostream>
#include <string>

using namespace std;

class Cases {
    public:
        /** Constructeur **/
        Cases();
        /** Destructeur **/
        Cases(string index, string type[3], int position[2], float rendements[3], string ressources[2], string amenagement[2]);

        /**
        Permet d'obtenir l'index de la case

        @index -> index de la case
        **/
        string getIndex() { return this->index; }
        /**
        Permet d'obtenir des infos sur la case

        @type -> infos sur la case
            x -> index retournant des infos sur la case
        **/
        string getType(int x) const { return this->type[x]; }
        /**
        Permet d'obtenir la position de la case

        @position -> position de la case
            x -> index retournant la position x ou y de la case
        **/
        int getPosition(int x) { return this->position[x]; }
        /**
        Permet d'obtenir le rendement la case

        @rendements -> rendement la case
            x -> index retournant une des ressources produite par la case "Nourriture", "or", ou "Production"
        **/
        float getRendements(int x) { return this->rendements[x]; }
        /**
        Permet d'obtenir les ressources spécifique de la case, "Stratégique" ou "Luxe"

        @ressources ->
            x -> index retournant des infos sur la ressource spécifique
        **/
        string getRessources(int x) { return this->ressources[x]; }
        /**
        Permet d'obtenir l'aménagement la case

        @amenagement ->
            x -> index retournant l'aménagement
        **/
        string getAmenagement(int x) { return this->amenagement[x]; }

        /**
        Permet de modifier l'index de la case
        **/
        void setIndex(string index);
        /**
        Permet de modifier le type de la case
        **/
        void setType(string type, string attribut, string spécificite);
        /**
        Permet de modifier la position de la case
        **/
        void setPosition(int posX, int posY);
        /**
        Permet de modifier le rendement de la case
        **/
        void setRendements(float nourriture, float production, float Or);
        /**
        Permet de modifier la ressource de la case
        **/
        void setRessources(string typeRessource, string ressource);
        /**
        Permet de modifier l'aménagement de la case
        **/
        void setAmenagement(string amenagement);

    protected:
        string index, type[3], ressources[2], amenagement[2];
        int position[2];
        float rendements[3];

    private:
};

#endif // CASES_H
