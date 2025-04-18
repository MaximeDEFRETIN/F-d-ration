#include <iostream>
#include <string>
#include <Unnites.h>

using namespace std;

int main() {
    cout << "Main" << endl;

    Unnites A;

    A.setNom("NOooo");
    A.setDescr("Lolilol");
    A.setStatus("Retranché");
    A.setType("Militaire", "Terrestre", "Distance", "Antiquité");
    A.setBonus("Poufi", "fezq", "", "", "", "", "", "", "", "");
    A.setNiv(1);
    A.setPV(10.56, 15);
    A.setXP(1.2, 14);
    A.setPuiss(12.14);

    return 0;
}
