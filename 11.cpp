// Задача 11
// Робота з одновимірними масивами

#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    const int max = 100;
    int n, one, two, onei;
    int null_1, null_2, null_1i;
    int x[max];

    cout << "Введiть розмiрнiсть масиву: ";
    cin >> n;
    cout << endl;

    for (int i = 0; i < n; i++){
        x[i] = rand()%10-5;
    }

    cout << "Заданий масив: " << endl << endl;

    for (int i = 0; i < n; i++){
        cout << x[i] << endl;
    }

    for (int i = 0; i < n; i++){
        if (x[i] > 0){
            one = x[i];
            onei = i;
            break;
        }
    }

    for (int i = onei+1; i < n; i++){
        if (x[i] > 0){
            two = x[i];
            break;
        }
    }

    for (int i = 0; i < n; i++){
        if (x[i] == 0){
            null_1 = x[i];
            null_1i = i;
            x[i] = one;
            break;
        }
    }

    for (int i = null_1i+1; i < n; i++){
        if (x[i] == 0){
            null_2 = x[i];
            x[i] = two;
            break;
        }
    }

    cout << endl << "Кiнцевий масив: " << endl << endl;

    for (int i = 0; i < n; i++){
        cout << x[i] << endl;
    }

    return 0;
}