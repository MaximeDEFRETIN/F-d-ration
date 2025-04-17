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
        void setBonus(string bonus1, string bonus2, string bonus3, string bonus4, string bonus5, string descrBonus1, string descrBonus2, string descrBonus3, string descrBonus4, string descrBonus5);
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
