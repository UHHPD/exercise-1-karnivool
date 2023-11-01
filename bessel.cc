#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Aufgabe 2
    // Teil b
    ifstream f_mittel("mittelwerte.txt");
    ifstream f_varianz("varianzen.txt");

    double a;
    double mean_mean = 0;
    int n = 0;

    while(true) {
        f_mittel >> a;
        if(f_mittel.eof())
            break;
        mean_mean += a;
        n++;
    }
    mean_mean /= n;

    double variance_mean = 0;
    n = 0;

    while(true) {
        f_varianz >> a;
        if(f_varianz.eof())
            break;
        variance_mean += a;
        n++;
    }
    variance_mean /= n;

    cout << "Mean mean: " << mean_mean << endl;
    cout << "Variance mean: " << variance_mean << endl;
    cout << "Variance bessel: " << variance_mean * n / (n-1) << endl;

    f_mittel.close();
    f_varianz.close();
}