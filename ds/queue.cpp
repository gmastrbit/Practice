// http://codelessons.ru/cplusplus/ochered-queue-v-c-realizaciya-i-chto-eto-voobshhe-takoe.html

#include <iostream>
#include <queue>  // подключили библиотеку queue

using namespace std;

int main() {
    setlocale(LC_ALL,"rus");
    queue <int> q;  // создали очередь q

    cout << "Пользователь, пожалуйста введите 7 чисел: " << endl;

    for (int h = 0; h < 7; h++) {
        int a;

        cin >> a;

        q.push(a);  // добавляем в очередь элементы
    }

    cout << endl;
    cout << "Самый первый элемент в очереди: " << q.front() << endl;  // выводим первый
    // элемент очереди
    q.pop();  // удаляем элемент из очереди

    cout << "Новый первый элемент (после удаления): " << q.front() << endl;

    if (!q.empty()) cout << "Очередь не пуста!";  // проверяем пуста ли очередь (нет)

    return 0;
}