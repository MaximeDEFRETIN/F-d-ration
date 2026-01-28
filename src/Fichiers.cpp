#include <iostream>
#include <string>
#include <Fichiers.h>

using namespace std;

void Fichiers::creaFich (string chemin, string nom, string format, string contenu) {
    ofstream f (chemin+nom+format);
    (f.is_open())?f << contenu << endl:cout << "Impossible d'ouvrir le fichier en écriture !" << endl;
    f.close();
}
