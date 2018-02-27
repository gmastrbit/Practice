// Задача 18
// Сортування масиву структур

#include <iostream>

using namespace std;

// оголошення структури
struct storage{
    int inv_num = 0;
    string name = "";
    int weight = 0;
    int price = 0;
    int amount = 0;
};

storage *s;
int n;
int choice, rerun;

// функція для введення даних
void set(){
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
}

// функція для виведення даних
void show(){
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
}

// функція для сортування даних
void sort(){

    // мітка для того, аби повторити потрібне
    start:

    cout << "===========================================" << endl;
    cout << endl << "Виберіть параметр сортування даних:" << endl << endl;
    cout << "===========================================" << endl;
    cout << endl << "Сортування даних від більшого до меншого:" << endl;
    cout << "Щоб сортувати дані по інвентароному номеру, введіть 1" << endl;
    cout << "Щоб сортувати дані по назві, введіть 2" << endl;
    cout << "Щоб сортувати дані по вазі, введіть 3" << endl;
    cout << "Щоб сортувати дані по ціні, введіть 4" << endl;
    cout << "Щоб сортувати дані по кількості, введіть 5" << endl << endl;
    cout << "===========================================" << endl;
    cout << endl << "Сортування даних від меншого до більшого:" << endl;
    cout << "Щоб сортувати дані по інвентароному номеру, введіть 6" << endl;
    cout << "Щоб сортувати дані по назві, введіть 7" << endl;
    cout << "Щоб сортувати дані по вазі, введіть 8" << endl;
    cout << "Щоб сортувати дані по ціні, введіть 9" << endl;
    cout << "Щоб сортувати дані по кількості, введіть 10" << endl << endl;
    cout << "===========================================" << endl;
    cout << "Ваш вибір: ";
    cin >> choice;

    // сортування
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - 1; ++j) {
            switch(choice) {
                case 1: {
                    if (s[j].inv_num < s[j + 1].inv_num) {
                        storage t = s[j];
                        s[j] = s[j + 1];
                        s[j + 1] = t;
                    }
                }
                    break;
                case 2: {
                    if (s[j].name < s[j + 1].name) {
                        storage t = s[j];
                        s[j] = s[j + 1];
                        s[j + 1] = t;
                    }
                }
                    break;
                case 3: {
                    if (s[j].weight < s[j + 1].weight) {
                        storage t = s[j];
                        s[j] = s[j + 1];
                        s[j + 1] = t;
                    }
                }
                    break;
                case 4: {
                    if (s[j].price < s[j + 1].price) {
                        storage t = s[j];
                        s[j] = s[j + 1];
                        s[j + 1] = t;
                    }
                }
                    break;
                case 5: {
                    if (s[j].amount < s[j + 1].amount) {
                        storage t = s[j];
                        s[j] = s[j + 1];
                        s[j + 1] = t;
                    }
                }
                    break;
                case 6: {
                    if (s[j].inv_num > s[j + 1].inv_num) {
                        storage t = s[j];
                        s[j] = s[j + 1];
                        s[j + 1] = t;
                    }
                }
                    break;
                case 7: {
                    if (s[j].name > s[j + 1].name) {
                        storage t = s[j];
                        s[j] = s[j + 1];
                        s[j + 1] = t;
                    }
                }
                    break;
                case 8: {
                    if (s[j].weight > s[j + 1].weight) {
                        storage t = s[j];
                        s[j] = s[j + 1];
                        s[j + 1] = t;
                    }
                }
                    break;
                case 9: {
                    if (s[j].price > s[j + 1].price) {
                        storage t = s[j];
                        s[j] = s[j + 1];
                        s[j + 1] = t;
                    }
                }
                    break;
                case 10: {
                    if (s[j].amount > s[j + 1].amount) {
                        storage t = s[j];
                        s[j] = s[j + 1];
                        s[j + 1] = t;
                    }
                }
                    break;
                default:{
                    cout << "Зробіть ваш вибір" << endl;
                }
            }
        }
    }

    cout << endl << endl << "Виведення сортованих даних" << endl << endl;

    for (int i = 0; i < n; ++i) {
        cout << "===========================================" << endl;
        cout << "Інвентарний номер: " << s[i].inv_num << endl;
        cout << "Назва: " << s[i].name << endl;
        cout << "Вага: " << s[i].weight << endl;
        cout << "Ціна: " << s[i].price << endl;
        cout << "Кількість: " << s[i].amount << endl;
    }

    cout << endl << "Повторити виведення потрібної інформації? (1 - так, 0 - ні): ";
    cin >> rerun;

    if (rerun == 1){
        goto start;
    } else {
        return;
    }
}

int main(){
    setlocale(LC_ALL, "Russian");

    cout << "Введiть кiлькiсть записiв: ";
    cin >> n;

    s = new storage[n];
    set();
    show();
    sort();
}