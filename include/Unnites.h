#ifndef UNNITES_H
#define UNNITES_H

#include <iostream>
#include <string>

using namespace std;

class Unnites {
    public:
        Unnites();
        Unnites(string nom, string descr, string status, string type[4], string bonus[5][2], string index, int niv, float PV[2], float XP[2], float puiss[2]);

        /**
        Permet d'obtenir le nom de l'unité

        @nom -> nom de l'unité
        **/
        string getNom() const { return this->nom; }
        /**
        Permet d'obtenir la description de l'unité

        @descr -> description de l'unité
        **/
        string getDescr() const { return this->descr; }
        /**
        Permet d'obtenir le status de l'unité

        @status -> status de l'unité, "Active" ou "Retranché"
        **/
        string getStatus() const { return this->status; }
        /**
        Permet d'obtenir les promotions de l'unité

        @bonus[x][y] -> promotions de l'unité
            x -> index de la promotion
            y -> index ciblant le nom ou la description de la promotion
        **/
        string getBonus(int x, int y) const { return this->bonus[x][y]; }
        /**
        Permet d'obtenir le type de l'unité

        @type -> type de l'unité
            x -> index du type de l'untié, "Civil/Militaire", "Terrestre/Maritime/Aérien", "Distance/Corps-À-Corps" ou "Antiquité/Moyen-Âge/Renaissance/Moderne"
        **/
        string getType(int x) const { return this->type[x]; }
        /**
        Permet d'obtenir l'index de l'unité, qui l'identifie spécifiquement

        @index -> index de l'unité
        **/
        string getIndex() { return this->index; }
        /**
        Permet d'obtenir le niveau de l'unité

        @niv -> niveau de l'unité
        **/
        int getNiv() const { return this->niv; }
        /**
        Permet d'obtenir les PV de l'unité

        @PV -> PV de l'unité
            x -> index des PV
        **/
        float getPV(int x) const { return this->PV[x]; }
        /**
        Permet d'obtenir l'expériences de l'unité

        @XP -> expériences de l'unité
            x -> index des XP
        **/
        float getXP(int x) const { return this->XP[x]; }
        /**
        Permet d'obtenir la puissance de l'unité

        @puiss -> puissance de l'unité
            x -> index de la puissance de l'unité
        **/
        float getPuiss(int x) const { return this->puiss[x]; }
        /**
        Permet d'obtenir le coût de recrutement de l'unité

        @coutR -> coût de recrutement de l'unité
        **/
        float getcoutR() const { return this->coutR; }

        /**
        Permet de modifier le nom de l'unité
        **/
        void setNom(string nom);
        /**
        Permet de modifier la description de l'unité
        **/
        void setDescr(string descr);
        /**
        Permet de modifier le status de l'unité
        **/
        void setStatus(string status);
        /**
        Permet de modifier les promotions de l'unité
        **/
        void setBonus(string bonus1, string descrBonus1, string bonus2, string descrBonus2, string bonus3, string descrBonus3, string bonus4, string descrBonus4, string bonus5, string descrBonus5);
        /**
        Permet de modifier le type de l'unité
        **/
        void setType(string type, string typeSpat, string typeAtt, string typeEre);
        /**
        Permet de modifier l'index de l'unité, qui l'identifie spécifiquement
        **/
        void setIndex(string index);
        /**
        Permet de modifier le niveau de l'unité
        **/
        void setNiv(int niv);
        /**
        Permet de modifier les PV de l'unité
        **/
        void setPV(float PV, float PVmax);
        /**
        Permet de modifier l'expériences de l'unité
        **/
        void setXP(float XP, float XPmax);
        /**
        Permet de modifier la puissance de l'unité
        **/
        void setPuiss(float puiss);
        /**
        Permet de modifier le coût de recrutement de l'unité
        **/
        void setcoutR(float coutR);

        /**
        Permet à une unité d'en attauquer une autre

        @U -> unité attquer
        **/
        void attaquer(Unnites &U);

    protected:
        string nom, descr, status, bonus[5][2], type[4], index;
        int niv;
        float PV[2], XP[2], puiss[2], coutR;

    private:
};

#endif // UNNITES_H
