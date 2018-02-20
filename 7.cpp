#include <iostream>

// Задача 7
// Організація циклу з передумовою

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