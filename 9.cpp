// Задача 9
// Організація циклу з параметром

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    double m[3] = {-1.85, 2.39, 3.65};

    // організація циклу з параметром
    for(int i = 1; i <= 3; i++) {
        double result = 0;
        for(double q = 2.8; q < 5.4; q = q + 1.3) {
            result += (pow( 2.71828, m[i]) - q) / (1 - m[i]);
        }
        cout << result << endl;
    }

    return 0;
}