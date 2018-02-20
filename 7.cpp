#include <iostream>
#include <math.h>

// Задача 1

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int n, i;
    float res;
    n = 0;
    i = 0;

    cout << "Введiть n: ";
    cin >> n;

    while(n == i){
        res = (n + i) * 2;
        i++;
    }

    cout << "Результат: " << res;
    return 0;
}
