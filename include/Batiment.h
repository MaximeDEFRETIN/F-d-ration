#ifndef BATIMENT_H
#define BATIMENT_H

#include <iostream>
#include <string>

using namespace std;

class Batiment {
    public:
        Batiment();
        Batiment(string nom, string description, string requiert, float effets[6][2], float couts, float mnt);

        string getNom() const { return this->nom; }
        string getDescription() const { return this->description; }
        string getRequiert() const { return this->requiert; }
        float getEffets(int x, int y) const { return this->effets[x][y]; }
        float getCouts() const { return this->couts; }
        float getMnt() const { return this->mnt; }

        void setNom(string nom);
        void setDescription(string description);
        void setRequiert(string requiert);
        void setEffets(float relAbs, float relRel, float sciAbs, float sciRel, float cltAbs, float cltRel, float prodAbs, float prodRel, float orAbs, float orRel, float bhnAbs, float bhnRel);
        void setCouts(float couts);
        void setMnt(float mnt);

    protected:
        string nom, description, requiert;
        float effets[6][2], couts, mnt;

    private:
};

#endif // BATIMENT_H
