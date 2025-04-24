#ifndef CASES_H
#define CASES_H

#include <iostream>
#include <string>

using namespace std;

class Cases {
    public:
        Cases();
        Cases(string index, string type[3], string ressources[2], string amenagement[2], int position[2], float rendements[3]);

        string getIndex() { return this->index; }
        string getType(int x) { return this->type[x]; }
        string getRessources(int x) { return this->ressources[x]; }
        string getAmenagement(int x) { return this->amenagement[x]; }
        int getPosition(int x) { return this->position[x]; }
        float getRendements(int x) { return this->rendements[x]; }

        void setIndex(string index);
        void setType(string type, string plaColl, string forJung);
        void setRessources(string type, string nom);
        void setAmenagement(string a1, string a2);
        void setPosition(int x, int y);
        void setRendements(float nourriture, float production, float Or);

    protected:
        string index, type[3], ressources[2], amenagement[2];
        int position[2];
        float rendements[3];

    private:
};

#endif // CASES_H
