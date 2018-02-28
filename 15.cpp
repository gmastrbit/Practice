// Задача 15
// Робота з багатовимірними масивами

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    const int maxn = 100;
    const int maxm = 100;
    int arr[maxn][maxm];
    int n, m;

    cout << "Введіть n розмірність масиву: ";
    cin >> n;

    cout << "Введіть m розмірність масиву: ";
    cin >> m;

    // заповнення масиву випадковими значеннями і виведення їх
    cout << "Початковий масив: " << endl << endl;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            arr[i][j] = rand()%10;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // заміна елементів з непарними номерами на їх квадрати
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (arr[i][j] % 2 != 0){
                arr[i][j] = round(pow(arr[i][j], 2));
            }
        }
    }

    // виведення вихідного масиву
    cout << endl << "Вихідний масив: " << endl << endl;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}