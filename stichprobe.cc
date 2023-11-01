#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main() {
    // Teil a
    ifstream f_daten("datensumme.txt");
    int a = 0;
    double mean = 0;
    int n = 0;
    while(true) {
        f_daten >> a;
        if(f_daten.eof())
            break;
        mean += a;
        n++;
    }
    mean /= n;
    cout << "Mean: " << mean << endl;
    f_daten.close();

    // Teil b
    f_daten.open("datensumme.txt");
    a = 0;
    n = 0;
    double variance = 0;
    while(true) {
        f_daten >> a;
        if(f_daten.eof())
            break;
        variance += pow(a - mean, 2);
        n++;
    }
    variance /= n;
    cout << "Variance: " << variance << endl;
    f_daten.close();

    // Teil c
    cout << "Standard deviation: " << sqrt(variance) << endl;
}
