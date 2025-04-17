#ifndef UNNITES_H
#define UNNITES_H

#include <iostream>
#include <string>

using namespace std;

class Unnites {
    public:
        Unnites();
        Unnites(string nom, string descr, string status, string bonus[5][2], int niv, float PV[2], float XP[2], float puiss[2]);

        string getNom() const { return nom; }
        string getDescr() const { return descr; }
        string getStatus() const { return status; }
        string getBonus() const { return bonus[5][2]; }
        int getNiv() const { return niv; }
        float getPV() const { return PV[2]; }
        float getXP() const { return XP[2]; }
        float getPuiss() const { return puiss[2]; }

        void setNom(string nom);
        void setDescr(string descr);
        void setStatus(string status);
        void setBonus(string bonus1 = NULL, string bonus2 = NULL, string bonus3 = NULL, string bonus4 = NULL, string bonus5 = NULL, string descrBonus1 = NULL, string descrBonus2 = NULL, string descrBonus3 = NULL, string descrBonus4 = NULL, string descrBonus5 = NULL);
        void setNiv(int niv);
        void setPV(float PV, float PVmax);
        void setXP(float XP, float XPmax);
        void setPuiss(float puiss);

    protected:
        string nom, descr, status, bonus[5][2];
        int niv;
        float PV[2], XP[2], puiss[2];

    private:
};

#endif // UNNITES_H
