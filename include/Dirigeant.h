#ifndef DIRIGEANT_H
#define DIRIGEANT_H

#include <iostream>
#include <string>

using namespace std;

class Dirigeant {
    public:
        /** Constructeur **/
        Dirigeant();
        /** Destructeur **/
        Dirigeant(string nom, string descr, string bonus[2][2]);

        /**
        Permet d'obtenir le nom du dirigeant

        @nom -> nom du dirigeant
        **/
        string getNom() const { return this->nom; }
        /**
        Permet d'obtenir la description du dirigeant

        @descr -> description du dirigeant
        **/
        string getDescr() const { return this->descr; }
        /**
        Permet d'obtenir les bonus du dirigeant

        @bonus[][] -> bonus du dirigeant
            x -> bonus du dirigeant
               0 -> bonus générale
               1 -> bonus spécifique au dirigeant
            y -> index donnant des infos sur le bonus
               0 -> nom du bonus
               1 -> description du bonus
        **/
        string getBonus(int x, int y) const { return this->bonus[x][y]; }

        /**
        Permet de modifier le nom du dirigeant
        **/
        void setNom(string nom);
        /**
        Permet de modifier la description du dirigeant
        **/
        void setDescr(string descr);
        /**
        Permet de modifier les bonus du dirigeant
        **/
        void setBonus(string bonus, string descrBonus, string bonusSpec, string descrBonusSpec);

    protected:
        string nom, descr, bonus[2][2];

    private:
};

#endif // DIRIGEANT_H
