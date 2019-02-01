// http://cppstudio.com/post/8469/

#include <iostream>
#include <deque>        // подключаем заголовочный файл деков
#include <iterator>     // заголовок итераторов
using namespace std;

int main(){
    int dequeSize = 0;
    cout << "Введите размер дека: ";
    cin >> dequeSize;

    deque<char> myDeque(dequeSize);     // создаем дек и резервируем для него память

    cout << "Введите элементы дека: ";
    // заполняем дек с клавиатуры
    for(int i = 0; i < myDeque.size(); i++) {
        cin >> myDeque[i];
    }

    cout << "\nВведенный дек: ";
    if (!myDeque.empty()) { // если дек не пуст
        // вывод на экран элементов дека
        copy( myDeque.begin(), myDeque.end(), ostream_iterator<char>(cout," ") ); // вывод на экран элементов дека
    }
    return 0;
}

/*
 * #include <iostream>
#include <deque>        // подключаем заголовочный файл деков
#include <iterator>     // заголовок итераторов
#include <string>       // заголовочный файл для работы со строками типа string
using namespace std;

int main()
{
    deque<string> myDeque;     // создаем пустой дек типа string
    myDeque.push_back(string("Winter is")); // добавили в дек один элемент типа string
    cout << "Количество элементов в деке: " << myDeque.size() << endl;

    myDeque.push_front("Game of Thrones:"); // добавили в начало дека еще один элемент
    myDeque.push_back("coming!");           // добавили в конец дека элемент "coming!"
    cout << "Количество элементов в деке изменилось, теперь оно = " << myDeque.size() << endl;

    cout << "\nВведенный дек: ";
    if (!myDeque.empty()) { // если дек не пуст
        // вывод на экран элементов дека
        copy( myDeque.begin(), myDeque.end(), ostream_iterator<string>(cout," ") ); // вывод на экран элементов дека
    }

    myDeque.pop_front(); // удалили первый элемент
    myDeque.pop_back(); // удалили второй элемент
    myDeque.resize(6,"empty"); // увеличиваем размер дека до 6 элементов, новые элементы заполняются словом "empty"

    cout << "\nБыли удалены первый и последний элементы дека, вот что осталось: ";
    for(int i = 0; i < myDeque.size(); i++) {
        cout << myDeque[i] << " ";
    }
    return 0;
}
 */