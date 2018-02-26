// Задача 14
// Робота з багатовимірними масивами

#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    const int maxn = 100;
    const int maxm = 100;
    int arr[maxn][maxm];
    int n, m, k, sum = 0;

    cout << "Введіть n розмірність масиву: ";
    cin >> n;

    cout << "Введіть m розмірність масиву: ";
    cin >> m;

    cout << "Введіть k: ";
    cin >> k;
    cout << endl;

    // заповнення масиву випадковими значеннями і виведення їх
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            arr[i][j] = rand()%10;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // знаходження суми елементів, індекси яких у сумі складають k
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (i + j == k){
                sum += arr[i][j];
            }
        }
    }

    cout << endl << sum << endl;

    return 0;
}