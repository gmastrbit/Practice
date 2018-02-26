// Задача 20
// Робота з стрічками

#include <iostream>

using namespace std;

// функція, яка визначає, чи є символ і потрібному рядку
bool findsym(string pointer, int size, char ch) {
    for (int i = 0; i < size; i++)
        if (pointer[i] == ch)
            return true;
    return false;
}

int main() {
    setlocale(LC_ALL, "Russian");

    string s1, s2;

    // введення рядків
    cout << "Введіть перший рядок символів: ";
    cin >> s1;
    cout << endl << "Введіть другий рядок символів: ";
    cin >> s2;

    // визначення, які символи зустрічаються лише в 1 рядку, а які в обох
    for (int i = 0; i < (s1.size() / sizeof(char) ); i++)
        if (findsym(s2, (s2.size() / sizeof(char)), s1[i])) {
            cout << "Зустрічається в   обох: " << s1[i] << endl;
        } else {
            cout << "Зустрічається в першій: " << s1[i] << endl;
        }

    return 0;
}