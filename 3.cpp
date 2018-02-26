// Задача 3
// Обчислення арифметичних виразів

#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int s;
    double res;
    // введення даних
    cout << "Нараховано гривень: ";
    cin >> s;
    // обчислення і виведення результату
    res = (0.2 * s) / 1;
    cout << "Результат: " << res;
    return 0;
}