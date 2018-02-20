#include <iostream>
#include <math.h>

// Задача 3

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int s;
    float res;
    cout << "Нараховано гривень: ";
    cin >> s;
    res = (0.2 * s) / 1;
    cout << "Результат: " << res;
    return 0;
}