#ifndef RELIGION_H
#define RELIGION_H

#include <iostream>
#include <string>

using namespace std;

class Religion {
    public:
        Religion();
        Religion(string nom, string description, string unite[2], string batiment[2], float eBatiment[4][2]);

        string getNom() const { return this->nom; }
        string getDescription() const { return this->description; }
        string getUnite(int x) const { return this->unite[x]; }
        string getBatiment(int x) const { return this->batiment[x]; }
        float getEBatiment(int x, int y) const { return this->eBatiment[x][y]; }

        void setNom(string nom);
        void setDescription(string description);
        void setUnite(string nUnite, string descrUnite);
        void setBatiment(string nBat, string descrBat);
        void setEBatiment(float relAbs, float relRel, float sciAbs, float sciRel, float cltAbs, float cltRel, float bhnAbs, float bhnRel);

    protected:
        string nom, description, unite[2], batiment[2];
        float eBatiment[4][2];

    private:
};

#endif // RELIGION_H
