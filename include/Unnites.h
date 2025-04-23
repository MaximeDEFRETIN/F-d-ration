#ifndef UNNITES_H
#define UNNITES_H

#include <iostream>
#include <string>

using namespace std;

class Unnites {
    public:
        Unnites();
        Unnites(string nom, string descr, string status, string type[4], string bonus[5][2], string index, int niv, float PV[2], float XP[2], float puiss[2]);

        string getNom() const { return this->nom; }
        string getDescr() const { return this->descr; }
        string getStatus() const { return this->status; }
        string getBonus(int x, int y) const { return this->bonus[x][y]; }
        string getType(int x) const { return this->type[x]; }
        string getIndex() {return this->index;}
        int getNiv() const { return this->niv; }
        float getPV(int x) const { return this->PV[x]; }
        float getXP(int x) const { return this->XP[x]; }
        float getPuiss(int x) const { return this->puiss[x]; }
        float getcoutR() const { return this->coutR; }

        void setNom(string nom);
        void setDescr(string descr);
        void setStatus(string status);
        void setBonus(string bonus1, string descrBonus1, string bonus2, string descrBonus2, string bonus3, string descrBonus3, string bonus4, string descrBonus4, string bonus5, string descrBonus5);
        void setType(string type, string typeSpat, string typeAtt, string typeEre);
        void setIndex(string index);
        void setNiv(int niv);
        void setPV(float PV, float PVmax);
        void setXP(float XP, float XPmax);
        void setPuiss(float puiss);
        void setcoutR(float coutR);

        void attaquer(Unnites &U);

    protected:
        string nom, descr, status, bonus[5][2], type[4], index;
        int niv;
        float PV[2], XP[2], puiss[2], coutR;

    private:
};

#endif // UNNITES_H
