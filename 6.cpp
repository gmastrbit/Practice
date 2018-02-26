// Задача 6
// Організація розгалуджень

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    double x, res;
    // введення даних
    cout << "Введiть значення x: ";
    cin >> x;
    // обчислення і виведення результату
    if (x > 100){
        cout << "Неможливо обчислити";
    } else {
        res = 3 * sin (x * x) + 2.15 / (tan(x) - 2);
    }
    cout << "Результат: " << res;
    return 0;
}