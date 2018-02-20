// Задача 19
// Робота з стрічками

#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    string s;
    int i, size, res = 0;
    cout << "Введіть рядок символів: ";
    cin >> s;

    size = s.size();
    for (i = 0; i <= size; i++){
        if (s[i] == 'w') {
            res++;
        }
    }

    if (res > 0) {
        cout << "Буква w є в рядку." << endl;
    } else {
        cout << "Буква w відсутня в рядку." << endl;
    }

    return 0;
}