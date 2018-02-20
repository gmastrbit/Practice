#include <iostream>
#include <math.h>

// Задача 1

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    double a, b;
    double res;
    cout << "Введiть значення а: ";
    cin >> a;
    cout << "Введiть значення b: ";
    cin >> b;
    if (a > b){
        res = ((b / 2) + 2);
    } else if (a == b) {
        res = -11;
    } else if (a < b) {
        res = ((a - 8) / b);
    }
    cout << "Результат: " << res;
    return 0;
}
