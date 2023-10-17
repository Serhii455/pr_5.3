#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double g(const double x);

int main() {
    double zp, zk, zen;
    int n;

    cout << "zp = "; cin >> zp;
    cout << "zk = "; cin >> zk;
    cout << "n = "; cin >> n;

    cout << fixed;
    cout << "-------------------------------------------------" << endl;
    cout << "|" << setw(5) << "z" << " |"
        << setw(5) << "zah" << " |"
        << endl;
    cout << "-------------------------------------------------" << endl;

    double dg = (zk - zp) / n;
    double z = zp;

    while (z <= zk) {
        zen = g(2 * z) + pow(g(2 * z + z * z), 2) + g(1.5);
        cout << "|" << setw(5) << setprecision(2) << z << " "
            << "|" << setw(5) << setprecision(2) << zen << " |" << endl;
        z += dg;
    }
    return 0;
}

double g(const double x) {
    if (abs(x) >= 1)
        return sin(x) / (cos(x) + 2);
    else
    {
        double S = 0;
        double a = 1;
        S = a;
        for (int n = 0; n <= 6; n++) {
            double R = pow(x, 2 * n) / n;
            a *= R;
            S += R;
        }
        return S;
    }
}