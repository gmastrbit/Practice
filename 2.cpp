// Задача 2
// Обчислення арифметичних виразів

#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int a, b, c;
    float res;
    // введення даних
    cout << "Введiть значення а: ";
    cin >> a;
    cout << "Введiть значення b: ";
    cin >> b;
    cout << "Введiть значення c: ";
    cin >> c;
    // обчислення і виведення результату
    res = (((-1)*a) + (b/c)) / (a - (c/4) + 1);
    cout << "Результат: " << res;
    return 0;
}