// Задача 13
// Робота з багатовимірними масивами

#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int arr[3][4];
    int three = 0, five = 0;

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            arr[i][j] = rand()%10;
        }
    }

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            if (arr[i][j] % 2 == 0 && arr[i][j] != 0){
                three++;
                five++;
                if (three == 3){
                    cout << endl << i+1 << " " << j+1  << endl;
                }
                if (three == 5){
                    cout << endl << i+1 << " " << j+1;
                }
            }
        }
    }

    return 0;
}