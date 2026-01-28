#ifndef FICHIERS_H
#define FICHIERS_H

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Fichiers {
    public:
        //Fichiers();
        //Fichiers();

        void creaFich (string chemin, string nom, string format, string contenu);
        void lecFich (string chemin, string nom, string format);

    protected:

    private:
};

#endif // FICHIERS_H
