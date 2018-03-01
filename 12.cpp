// Задача 12
// Робота з одновимірними масивами

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int arr[5];
    float res = 0;

    // заповнення масиву випадковими значенням і виведення масиву
    cout << "Початковий масив: " << endl << endl;
    for (int i = 0; i < 5; i++){
        arr[i] = rand()%10-5;
        cout << arr[i] << " ";
    }

    // обчислення суми квадратних коренів модулів цих чисел
    for (int i = 0; i < 5; i++){
        res += sqrt(abs(arr[i]));
    }

    cout << endl << endl << "Результат: " << res;

    return 0;
}