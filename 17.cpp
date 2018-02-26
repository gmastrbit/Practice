// Задача 17
// Робота із структурою

#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");

    int choice, rerun;

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

    // мітка для можливості повторити потрібне виведення даних
    start:

    cout << endl;

    // організація діалогу для вибору, які дані треба вивести
    cout << "Виберіть, які дані вивести: " << endl;
    cout << "Щоб вивести інвентарні номери товарів, введіть 1" << endl;
    cout << "Щоб вивести назви товарів, введіть 2" << endl;
    cout << "Щоб вивести вагу товарів, введіть 3" << endl;
    cout << "Щоб вивести ціну товарів, введіть 4" << endl;
    cout << "Щоб вивести кількість товарів, введіть 5" << endl;

    cin >> choice;

    // виведення даних з структури за допомогою циклу
    cout << "Виведення даних в табличному форматі: "<<endl;

    for (int i = 0; i < n ; ++i){
        cout << "===========================================" << endl;
        cout << "Товар №" << i+1 << endl << endl;

        if (choice == 1){
            cout << "Інвентарний номер: " << s[i].inv_num << endl;
        }

        if (choice == 2){
            cout << "Назва: " << s[i].name << endl;
        }

        if (choice == 3) {
            cout << "Вага: " << s[i].weight << endl;
        }

        if (choice == 4) {
            cout << "Ціна: " << s[i].price << endl;
        }

        if (choice == 5) {
            cout << "Кількість: " << s[i].amount << endl;
        }
    }

    // реалізація можливості повторити виведення потрібної інформації
    cout << endl << "Повторити виведення потрібної інформації? (1 - так, 0 - ні): ";
    cin >> rerun;

    if (rerun == 1){
        goto start;
    } else {
        return 0;
    }

}