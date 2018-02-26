// Задача 7
// Організація циклу з передумовою

#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int n = 0, i = 0;
    float res;
    // введення даних
    cout << "Введiть n: ";
    cin >> n;
    // організація циклу з передумовою
    while(n == i){
        res = (n + i) * 2;
        i++;
    }
    cout << "Результат: " << res;
    return 0;
}