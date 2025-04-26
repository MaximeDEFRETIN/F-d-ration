#ifndef VILLES_H
#define VILLES_H

#include <iostream>
#include <string>

using namespace std;

class Villes {
    public:
        Villes();
        Villes(string nom, string listBatiments[5], string listReligions[5], float rendement[5], int nbHabitant);

        string getNom() const { return nom; }
        string getListBatiments(int x) const { return this->listBatiments[x]; }
        string getListReligions(int x) const { return this->listReligions[x]; }
        float getRendement(int x) const { return this->rendement[x]; }
        int getNbHabitant() const { return this->nbHabitant; }

        // Permet de modifier
        void setNom(string nom);
        // Permet de modifier
        void setListBatiments(string bat1, string bat2, string bat3, string bat4, string bat5);
        // Permet de modifier
        void setListReligions(string rel1, string rel2, string rel3, string rel4, string rel5);
        // Permet de modifier le rendement
        void setRendement(float bouffe, float prod, float Or, float science, float culture);
        // Permet de modifier le nombre d'habitant
        void setNbHabitant(int nbHab);

        // Permet de construire  des bâtiments dans une ville
        void construction();

    protected:
        string nom, listBatiments[5], listReligions[5];
        float rendement[5];
        int nbHabitant;

    private:
};

#endif // VILLES_H
