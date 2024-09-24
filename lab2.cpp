#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    cout << fixed << setprecision(3);
    double g = 9.8, y = 1, a = 0.074, d = 0.0;
    int k = 1;

    for (int i = 10; i > 0; i -= 1) {
        if (d < 0.5) {
            d += 0.1;
        }
        else {
            d += 0.5;
        }
        double U = sqrt((g * d) / 2 + (2 * g * a) / (y * d)) * 10;

        for (k; k > 0; k -= 1) {
            cout << "d = " << d << "          U = " << U;
        }
        cout << '\n' << "    " << d << "              " << U;
    }

    return 0;
}