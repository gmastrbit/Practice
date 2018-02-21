// Задача 25
// Організація класу

#include <iostream>
#include <conio.h>

using namespace std;

class storage{

    private:

        int inv_num = 0, weight = 0, price = 0, amount = 0;
        string name = "";

    public:

        void set_inv_num(int test){
            inv_num = test;
        }

        void show_inv_num(){
            cout << "Інвентарний номер: " << inv_num;
        }

        void set_name(string test){
            name = test;
        }

        void show_name(){
            cout << "Назва: " << name;
        }

        void set_weight(int test){
            weight = test;
        }

        void show_weight(){
            cout << "Вага: " << weight;
        }

        void set_price(int test){
            price = test;
        }

        void show_price(){
            cout << "Ціна: " << price;
        }

        void set_amount(int test){
            amount = test;
        }

        void show_amount(){
            cout << "Кількість: " << amount;
        }

};

int main() {
    setlocale(LC_ALL, "Russian");

    storage s;

    int inv_num, weight, price, amount, n;
    string name;

    cout << "Введiть інвентарний номер товару: ";
    cin >> inv_num;
    s.set_inv_num(inv_num);

    cout << "Введіть назву товару: ";
    cin >> name;
    s.set_name(name);

    cout << "Введiть вагу товару: ";
    cin >> weight;
    s.set_weight(weight);

    cout << "Введіть ціну товару: ";
    cin >> price;
    s.set_price(price);

    cout << "Введіть кількість товару: ";
    cin >> amount;
    s.set_amount(amount);

    cout << endl << "Вивести всi данi? (1 - так, 0 - нi): ";
    cin >> n;
    cout << endl;

    if (n == 1){
        s.show_inv_num();
        cout << endl;
        s.show_name();
        cout << endl;
        s.show_weight();
        cout << endl;
        s.show_price();
        cout << endl;
        s.show_amount();
        cout << endl;
    } else {
        getch;
    }

    getch;

    return 0;
}