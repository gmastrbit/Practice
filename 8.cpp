#include <iostream>
#include <math.h>

// Задача 2

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int xn, yn;
    double tmp, res;
    int arrx[12];
    int arry[12];

    cout << "Введiть координати групового пункту " << endl;
    cout << "Введiть х1: ";
    cin >> xn;
    cout << "Введiть y1: ";
    cin >> yn;

    cout << endl;

    for (int i = 1; i < 13; i++){
        cout << "Введiть х" << i << ": ";
        cin >> arrx[i];
        cout << "Введiть y" << i << ": ";
        cin >> arry[i];
        cout << endl;
    }

    int i = 1;

    do{
        tmp = sqrt( pow((arrx[i-1] - xn),2) + pow((arry[i-1] - yn), 2) );
        cout << "Вiдстань вiд " << i << " точки до точки групового збору: " << tmp << endl;
        res = res + tmp;
        i++;
    } while(i < 13);

    cout << endl;
    cout << "Результат (сума вiддалей): " << res;
    return 0;
}

