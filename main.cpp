#include <iostream>
#include <string>
#include <Fichiers.h>

using namespace std;

int main() {
    cout << "Main" << endl;

    Fichiers u;

    u.creaFich("fichiers/", "lol", ".json", "[\"nom:\"\n\"Defretin\",\n\"prénom:\"\n\"Maxime\"]");
    u.lecFich("fichiers/", "lol", ".json");

    return 0;
}
