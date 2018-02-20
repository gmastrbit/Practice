#include <iostream>

using namespace std;

// Задача 14
// Робота з багатовимірними масивами

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

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            arr[i][j] = rand()%10;
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

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