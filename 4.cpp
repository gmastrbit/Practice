// Задача 4
// Організація розгалуджень

#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    double a, b;
    double res;
    // введення даних
    cout << "Введiть значення а: ";
    cin >> a;
    cout << "Введiть значення b: ";
    cin >> b;
    // обчислення і виведення результату
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