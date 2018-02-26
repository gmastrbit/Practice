// Довгань - 5
// 5 Ввести слово. Визначити чи є дане слово дзеркальним.
// 19

#include <iostream>

using namespace std;

bool check_polindrom(string word){
    int len = word.length();
    for(int i = 0; i < len/2; ++i){
        if(word[i] != word[len-i-1]){
            return false;
        }
    }
    return true;
}

int main(){
    setlocale(LC_ALL, "Russian");

    string str;

    cout << "Введіть слово: ";
    cin >> str;
    if(check_polindrom(str)) {
        cout << "Це слово — паліндром.";
    }
    else {
        cout << "Це слово — НЕ паліндром.";
    }
    return 0;
}