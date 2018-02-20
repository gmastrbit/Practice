#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
// Дано 5 дійсних чисел.
// Обчислити суму квадратних коренів модулів цих чисел;
int main() {
    setlocale(LC_ALL, "Russian");

    int arr[5];
    float res = 0;

    for (int i = 0; i < 5; i++){
        arr[i] = rand()%10-5;
    }

    cout << "Початковий масив: " << endl << endl;

    for (int i = 0; i < 5; i++){
        cout << arr[i] << endl;
    }

    for (int i = 0; i < 5; i++){
        res += sqrt(abs(arr[i]));
    }

    cout << endl << "Результат: " << res;

    return 0;
}