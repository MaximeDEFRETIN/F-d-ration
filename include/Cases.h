#ifndef CASES_H
#define CASES_H

#include <iostream>
#include <string>

using namespace std;

class Cases {
    public:
        Cases();
        Cases(int type[3], int ressources[2], int amenagement[2], int position[2], float rendements[3]);

        int getType(int x) { return this->type[x]; }
        int getRessources(int x) { return this->ressources[x]; }
        int getAmenagement(int x) { return this->amenagement[x]; }
        int getPosition(int x) { return this->position[x]; }
        float getRendements(int x) { return this->rendements[x]; }

        void setType(int type, int plaColl, int forJung);
        void setRessources(int type, int nom);
        void setAmenagement(int a1, int a2);
        void setPosition(int x, int y);
        void setRendements(float nourriture, float production, float Or);

    protected:
        int position[2], type[3], ressources[2], amenagement[2];
        float rendements[3];

    private:
};

#endif // CASES_H
