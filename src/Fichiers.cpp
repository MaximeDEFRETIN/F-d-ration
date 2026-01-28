#include <iostream>
#include <string>
#include <Fichiers.h>

using namespace std;

void Fichiers::creaFich(string chemin, string nom, string format, string contenu) {
    ofstream f (chemin+nom+format);
    (f.is_open())?f << contenu << endl:cout << "Impossible d'ouvrir le fichier en écriture !" << endl;
    f.close();
}

void Fichiers::lecFich(string chemin, string nom, string format) {
    ifstream f (chemin+nom+format);
    bool lecPoss;
    (f.is_open())?lecPoss = true:lecPoss = false;
    int i = 0; string t1[10];
    if(lecPoss == true) {
        while (i < 10) {
            f >> t1[i];
            cout << t1[i] << " " << t1[i].length() << endl;
            if(t1[i].length() > 0){
                i++;
            } else {
                break;
            }
        }
    } else if(lecPoss == false) {
        cout << "Lecture impossible !" << endl;
    }
    f.close();
}
