// Задача 1
// Обчислення арифметичних виразів

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int a, b, d;
    double res;
    cout << "Введiть значення а: ";
    cin >> a;
    cout << "Введiть значення b: ";
    cin >> b;
    cout << "Введiть значення d: ";
    cin >> d;
    res = (sqrt(53 / a) + d -  4 * a) / (1 + a * b);
    cout << "Результат: " << res;
    return 0;
}