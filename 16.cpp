// Задача 16
// Організація структури

#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");

    struct storage{
        int inv_num = 0;
        string name = "";
        int weight = 0;
        int price = 0;
        int amount = 0;
    };

    cout << "Введiть кiлькiсть записiв: ";
    int n;
    cin >> n;

    storage *s = new storage[n];

    // введення даних в структуру за допомогою циклу
    for (int i = 0; i < n ; ++i){
        cout << endl << "Інвентарний номер " << i+1 << "-го товару: ";
        cin >> s[i].inv_num;

        cout << "Назва " << i+1 << "-го товару: ";
        cin >> s[i].name;

        cout << "Вага " << i+1 << "-го товару: ";
        cin >> s[i].weight;

        cout << "Ціна " << i+1 << "-го товару: ";
        cin >> s[i].price;

        cout << "Кількість " << i+1 << "-го товару: ";
        cin >> s[i].amount;
    }

    // виведення даних з структури за допомогою циклу
    cout << endl << "Виведення даних в табличному форматі: " << endl;

    for (int i = 0; i < n ; ++i){
        cout << "===========================================" << endl;
        cout << "Товар №" << i+1 << endl << endl;
        cout << "Інвентарний номер: " << s[i].inv_num << endl;
        cout << "Назва: " << s[i].name << endl;
        cout << "Вага: " << s[i].weight << endl;
        cout << "Ціна: " << s[i].price << endl;
        cout << "Кількість: " << s[i].amount << endl;
    }

    return 0;
}