#include <iostream>
#include <string>
#include <Fichiers.h>

using namespace std;

int main() {
    cout << "Main" << endl;

    Fichiers u;

    u.creaFich("fichiers/", "lol", ".json", "{\"nom\":\"Defretin\",\n\"prénom\":\"Maxime\"}");

    return 0;
}
