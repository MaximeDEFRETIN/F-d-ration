#include <iostream>
#include <string>
#include <Cases.h>

using namespace std;

Cases::Cases() : type{{0}, {0}, {0}}, ressources{0},  amenagement{{0}, {0}}, position{{0}, {0}}, rendements{{0}, {0}, {0}} {}
Cases::Cases(int type[3], int ressources, int amenagement[2], int position[2], float rendements[3]) : type{{0}, {0}, {0}}, ressources{0},  amenagement{{0}, {0}}, position{{0}, {0}}, rendements{{0}, {0}} {}

void Cases::setType(int type, int plaColl, int forJung) {
    this->type[0] = type;
    this->type[1] = plaColl;
    this->type[2] = forJung;
}
void Cases::setRessources(int ress) { this->ressources = ress; }
void Cases::setAmenagement(int ame, int route) {
    this->amenagement[0] = ame;
    this->amenagement[1] = route;
}
void Cases::setPosition(int x, int y) {
    this->position[0] = x;
    this->position[1] = y;
}
void Cases::setRendements(float nourriture, float production, float Or) {
    this->rendements[0] = nourriture;
    this->rendements[1] = production;
    this->rendements[2] = Or;
}

void Cases::genCart(int nbLarg, int type) {
    int nbLong = nbLarg*2.5, nbCas = nbLong*nbLarg;

    switch(type) {
        /** Carte essentiellement terretre **/
        case 1:
            //Largeur de la carte
            for(int x=1; x<=nbLarg; x++) {
            //Longueur de la carte
                for(int y=1; y<=nbLong; y++) {
                    setPosition(x, y);
                    //Lorsque la case est terrestre
                    if (rand()%10 <= 6) {
                        //Lorsque la case est une montagne
                        if (rand()%6==5) {
                            setType(0, 5, 0);
                            setRendements(0, 0, 0);
                            setRessources(0);
                            setAmenagement(0, 0);
                        //Lorsque la case n'est pas une montagne
                        } else {
                            setType(0, rand()%5, rand()%3);
                            float nourriture, production, Or;
                            switch(getType(1)) {
                                case 0:
                                    nourriture=1, production=1, Or=1;
                                  break;
                                case 1:
                                    nourriture=0, production=2, Or=0;
                                  break;
                                case 2:
                                    nourriture=2, production=0, Or=0;
                                  break;
                                case 3:
                                    nourriture=0, production=1, Or=0;
                                  break;
                                case 4:
                                    nourriture=0, production=1, Or=0;
                                  break;
                                case 5:
                                    nourriture=0, production=0, Or=0;
                                  break;
                            }
                            (rand()%3==0)?setRessources((getType(1)<=2)?rand()%13:rand()%8):setRessources(0);
                            switch(getRessources()) {
                                case 1:
                                case 2:
                                    Or++;
                                  break;
                                case 3:
                                case 4:
                                case 5:
                                case 6:
                                case 7:
                                    production++;
                                  break;
                                case 8:
                                case 9:
                                case 10:
                                case 11:
                                case 12:
                                    nourriture++;
                                  break;
                            }
                            setRendements(nourriture, production, Or);
                            //setAmenagement(0, 0);
                        }
                    //Lorsque la case est marritime
                    } else {
                        setType(1, 6, 0);
                        setRessources((rand()%10==0)?7:0);
                        setRendements(2,(getRessources()==7)?1:0,0);
                        //setAmenagement(0, 0);
                    }

                    cout << getPosition(0) << " " << getPosition(1) << "\n" << getType(1) << "\n" << getRendements(0) << " " << getRendements(1) << " " << getRendements(2) << "\n" << getRessources() << "\n" << endl;
                }
            }
          break;
    }
}
