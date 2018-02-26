// Задача 21
// Робота з стрічками

#include <iostream>
#include <cstring>

using  namespace std;

// функція для переводу арабських чисел у римські
string func(int num, string, string, string);
string func(int num, string hi, string re, string lo){
    switch(num){
        case 9:
            return lo + hi;
        case 8:
            return re + lo + lo + lo;
        case 7:
            return re + lo + lo;
        case 6:
            return re + lo;
        case 5:
            return re;
        case 4:
            return lo + re;
        case 3:
            return lo + lo + lo;
        case 2:
            return lo + lo;
        case 1:
            return lo;
        case 0:
            return "";
    }
}

int main() {
    setlocale(LC_ALL, "Rusian");

    cout << "Введіть число не більше 3999: ";

    int arabien_num;
    int count = 0;
    int opinion;
    const char *lat;

    if (!(cin >> arabien_num) || (arabien_num > 3999)) {
        cerr << "Не можливо ініціалізувати число!" << endl;
        exit(1);
    }

    // переведення за допомогою функції арабських чисел у римські
    string rome_num;

    rome_num += func(arabien_num / 1000, "", "", "M");
    arabien_num %= 1000;
    rome_num += func(arabien_num / 100, "M", "D", "C");
    arabien_num %= 100;
    rome_num += func(arabien_num / 10,  "C", "L", "X");
    arabien_num %= 10;
    rome_num += func(arabien_num ,   "X", "V", "I");

    cout << "Римське число: " << rome_num << endl;

    // отримуємо римське число в змінну
    lat = rome_num.c_str();

    // переведення римського числа в арабське
    for (int i = 0; i < strlen(lat);i++){
        switch(lat[i]){
            case 'M':
                count += 1000;
                break;
            case 'D':
                count += 500;
                break;
            case 'C':
                if ( i+1 < strlen(lat) && (lat[i + 1] == 'D' || lat[i + 1] == 'M' ) )
                    count -= 100;
                else
                    count += 100;
                break;
            case 'L':
                count += 50;
                break;
            case 'X':
                if (i+1 < strlen(lat) && (lat[i + 1] == 'L' || lat[i + 1] == 'C' || lat[i + 1] == 'M')  )
                    count -= 10;
                else
                    count += 10;
                break;
            case 'V':
                count += 5;
                break;
            case 'I':
                if (i+1 < strlen(lat) && (lat[i + 1] == 'V' || lat[i + 1] == 'X' || lat[i + 1] == 'C'))
                    count -= 1;
                else count +=1;
                break;
        }
    }

    cout << "Арабське число: " << count;

}

/*
#include <iostream>
#include <cstring>
using namespace std;
int main (){
    char lat[100];
    int count = 0 ;
    cin.getline(lat,100);
    for (int i = 0; i < strlen(lat);i++){
        switch(lat[i]){
            case 'M':
                count += 1000;
                break;
            case 'D':
                count += 500;
                break;
            case 'C':
                if ( i+1 < strlen(lat) && (lat[i + 1] == 'D' || lat[i + 1] == 'M' ) )
                    count -= 100;
                else
                    count += 100;
                break;
            case 'L':
                count += 50;
                break;
            case 'X':
                if (i+1 < strlen(lat) && (lat[i + 1] == 'L' || lat[i + 1] == 'C' || lat[i + 1] == 'M')  )
                    count -= 10;
                else
                    count += 10;
                break;
            case 'V':
                count += 5;
                break;
            case 'I':
                if (i+1 < strlen(lat) && (lat[i + 1] == 'V' || lat[i + 1] == 'X' || lat[i + 1] == 'C'))
                    count -= 1;
                else count +=1;
                break;
        }
    }
    cout << count << endl;
    return 0;
}
*/

// Арабські у римські

/*
#include <iostream>
#include <cstring>
using  namespace std;
string func(int num, string, string, string);
string func(int num, string hi, string re, string lo){
    switch(num){
        case 9:
            return lo + hi;
        case 8:
            return re + lo + lo + lo;
        case 7:
            return re + lo + lo;
        case 6:
            return re + lo;
        case 5:
            return re;
        case 4:
            return lo + re;
        case 3:
            return lo + lo + lo;
        case 2:
            return lo + lo;
        case 1:
            return lo;
        case 0:
            return "";
    }
}
int main() {
    system("chcp 1251>0");
    cout << "Введите число не большее 3999: ";
    int arabien_num;
    if (!(cin >> arabien_num) || (arabien_num > 3999)) {
        cerr << "Невозможно инициализировать число!" << endl;
        exit(1);
    }
    string rome_num;
    rome_num += func(arabien_num / 1000, "", "", "M");
    arabien_num %= 1000;
    rome_num += func(arabien_num / 100, "M", "D", "C");
    arabien_num %= 100;
    rome_num += func(arabien_num / 10,  "C", "L", "X");
    arabien_num %= 10;
    rome_num += func(arabien_num ,   "X", "V", "I");
    cout << rome_num << endl;
    return 0;
}
*/