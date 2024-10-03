#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
  cout << fixed << setprecision(3);
  double g = 9.8, y = 1, a = 0.074, d = 0.0, U = 0.0;
  while (d == 0.0) {
    d += 0.1;
    U = sqrt((g * d) / 2 + (2 * g * a) / (y * d)) * 10;
    cout << "d = " << d << "          U = " << U;
  }
  while (d < 0.5) {
    d += 0.1;
    U = sqrt((g * d) / 2 + (2 * g * a) / (y * d)) * 10;
    cout << '\n' << "    " << d << "              " << U;
  }
  while (d < 3.0) {
    d += 0.5;
    U = sqrt((g * d) / 2 + (2 * g * a) / (y * d)) * 10;
    cout << '\n' << "    " << d << "              " << U;
  }
  return 0;
}
