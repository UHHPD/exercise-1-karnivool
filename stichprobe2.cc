#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main() {
    // Aufgabe 2
    // Teil a
    ofstream f_mittel("mittelwert.txt");
    ofstream f_varianz("varianzen.txt");
    ifstream f_daten("datensumme.txt");

    int daten[9];

    while(true) {
        for(int i = 0; i < 9; i++) {
            f_daten >> daten[i];
        }
        if(f_daten.eof())
            break;
        
        double mean = 0;
        double variance = 0;

        for(int i = 0; i < 9; i++) {
            mean += daten[i] / 9.0;
        }
        for(int i = 0; i < 9; i++) {
            variance += pow(daten[i]-mean, 2) / 9.0;
        }
        f_mittel << mean << endl;
        f_varianz << variance << endl;
    }
}
