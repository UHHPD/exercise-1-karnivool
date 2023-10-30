#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream f_zahlen("daten.txt");
    ofstream f_summe("datensumme.txt");
    int zahl1, zahl2;
    f_zahlen >> zahl1;
    f_zahlen >> zahl2;
    
    while(!f_zahlen.eof()) {
        // cout << zahl1 << " + " << zahl2 << " = " << zahl1+zahl2 << endl;
        f_summe << zahl1+zahl2 << endl;
        f_zahlen >> zahl1;
        f_zahlen >> zahl2;
    }

    f_zahlen.close();
    f_summe.close();
}
