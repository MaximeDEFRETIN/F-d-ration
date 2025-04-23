#ifndef DIRIGEANT_H
#define DIRIGEANT_H

#include <iostream>
#include <string>

using namespace std;

class Dirigeant {
    public:
        Dirigeant();
        Dirigeant(string nom, string descr, string bonus[2][2]);

        string getNom() const { return this->nom; }
        string getDescr() const { return this->descr; }
        string getBonus() const { return this->bonus[2][2]; }

        void setNom(string nom);
        void setDescr(string descr);
        void setBonus(string bonus, string descrBonus, string bonusSpec, string descrBonusSpec);

    protected:
        string nom, descr, bonus[2][2];

    private:
};

#endif // DIRIGEANT_H
