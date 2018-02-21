// Задача 22
// Організація стеку

#include <iostream>
#include <ctime>

using namespace std;

struct Stack{
    int info;
    Stack * next;
};

Stack* InStack(Stack *_begin, int in){
    Stack *t = new Stack;
    t -> info = in;
    t -> next = _begin;
    return t;
}

// змінюємо місцями 1 і 3 елементи
Stack* exchange1(Stack *_begin, int n){
    Stack *new_begin, *Elem1;

    new_begin = _begin -> next -> next;
    Elem1 = new_begin -> next;

    new_begin -> next = _begin -> next;
    new_begin -> next -> next = _begin;
    _begin -> next = Elem1;

    return new_begin;
}

// змінюємо місцями 1 і 2 елементи
Stack* exchange2(Stack *_begin, int n){
    Stack *new_begin, *Elem1;

    new_begin = _begin -> next;
    Elem1 = new_begin -> next;

    new_begin -> next = _begin -> next;
    new_begin -> next -> next = _begin;
    _begin -> next = Elem1;

    return new_begin;
}

// виведення вмісту стеку
void View (Stack *p) {
    Stack *t = p;
    if (p == NULL){
        cout << "Стек пустий!" << endl;
        return;
    }
    cout << "Стек: "<<endl;
    while (t != NULL){
        cout << t -> info << endl;
        t = t -> next;
    }
    cout << endl;
}

int main(){
    setlocale(LC_ALL, "Russian");

    srand(time(NULL));
    Stack *_begin = NULL, *start = NULL, *t;

    int in, n;
    cout << "Введіть розмір стеку: ";
    cin >> n;

    for (int i = 1; i <= n; i++){
        in = rand()%100;
        _begin = InStack(_begin,in);
    }

    cout << endl << "Початковий стек" << endl;
    View (_begin);

    _begin = exchange1(_begin, n);

    cout << "Заміна місцями 1 і 3 елемента:" << endl;
    View (_begin);

    _begin = exchange2(_begin, n);

    cout << "Заміна місцями 1 і 2 елемента:" << endl;
    View (_begin);

    return 0;
}