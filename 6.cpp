#include <iostream>
#include <math.h>

// Задача 3

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    double x;
    double res;
    cout << "Введiть значення x: ";
    cin >> x;
    if (x > 100){
        cout << "Неможливо обчислити";
    } else {
        res = 3 * sin (x * x) + 2.15 / (tan(x) - 2);
    }
    cout << "Результат: " << res;
    return 0;
}
