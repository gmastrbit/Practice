// Задача 10
// Робота з одновимірними масивами

#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int x[12];
    int zn = 0;

    // заповнення масиву випадковими значенням
    cout << "Початковий масив:" << endl << endl;
    for (int i = 0; i < 12; i++){
        x[i] = rand()%10+3;
        cout << x[i] << " ";
    }

    // визначення мінімального значення
    int min = x[0];
    for (int i = 0; i < 12; ++i){
        if(x[i] < min){
            min = x[i];
            zn = i;
        }
    }

    // виведення мінімального значення і нового масиву
    cout << endl  << endl << "Мiнiмальне значення = " << min;

    for (int i = zn; i < 12; i++){
        x[i+1] = 1;
    }

    cout << endl << endl << "Новий масив:" << endl << endl;

    for (int i = 0; i < 12; i++){
        cout << x[i] << " ";
    }

    return 0;
}