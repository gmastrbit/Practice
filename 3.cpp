#include <iostream>

// Задача 3
// Обчислення арифметичних виразів

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int s;
    double res;
    cout << "Нараховано гривень: ";
    cin >> s;
    res = (0.2 * s) / 1;
    cout << "Результат: " << res;
    return 0;
}