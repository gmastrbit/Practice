// Задача 18
// Сортування масиву структур

// Написати програму на мові С++ для розв'язання завдання згідно з варіантом.
// Завдання реалізувати за допомогою структур, описати структуру, описати функції
// введення та виведення даних в табличному форматі.
// Варіант завдання відповідає номеру по списку студента в журналі.

// Storage: Інвентарний номер, Назва товару, Вага товару, Ціна, Кількість.

// Написати програму на мові С++ для розв'язання завдання згідно
// з варіантом. Варіант завдання взяти із завдання на практику №16.
// При виконання завдання необхідно створити масив структури відповідно до варіанту,
// ввести не менше ніж 5 записів, організувати діалог вибору інформації для виведення.
// Для введення та виведення інформації необхідно написати відповідні функції.

// Написати програму на мові С++ для розв'язання завдання згідно з варіантом.
// Варіант завдання взяти із завдання на практику №16.
// При виконання завдання необхідно створити масив структури відповідно до варіанту,
// ввести не менше ніж 5 записів, організувати діалог вибору параметру
// (за зростанням або за спаданням) для сортування масиву структури.
// Для введення та виведення інформації, а також для організації
// сортування необхідно написати відповідні функції.

#include <iostream>

using namespace std;

struct storage{
    int inv_num = 0;
    string name = "";
    int weight = 0;
    int price = 0;
    int amount = 0;
};
int n;
int choice, rerun;
storage *s = new storage[n];

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

}

void sort(){
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
}

void show(){
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

//    if (rerun == 1){
//        goto start;
//    } else {
//
//    }
}

int main(){
    setlocale(LC_ALL, "Russian");

    cout << "Введiть кiлькiсть записiв: ";
    cin >> n;

    set();
    sort();
    show();

//    start:
}







// Початковий код:








/*
#include <iostream>

using namespace std;

void set(){

}

void show(){

}

void sort(){

}

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
        return 0;
    }
}
 */