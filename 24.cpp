// Задача 24
// Організація кільця

#include <iostream>

using namespace std;

struct  Node{
    int x;
    Node *Next;
};

class List{
    Node *Head,*Tail; 		                    // Перший елемент та останній
    int size; 				                    // Кількість елементів в списку

public:
    List():Head(NULL),Tail(NULL),size(0){}; 	// Ініціалізація елементів в нуль за
                                                // допомогою конструктора
    void Add(int x);
    void Show(int size);
};

void List::Add(int x){
    size++;                                     // При додаванні елемента, збільшуємо кількість на 1

    Node *temp = new Node; 	                    // Виділення пам'яті для нового елемента
    temp -> Next = Head; 	                    // Останній елемент – це початок списку
    temp -> x = x; 			                    // Записуємо значення х
    if (Head != NULL){ 		                    // Коли список не порожній
        Tail -> Next = temp; 		            // Запис даних у наступне за останнім елементом поле
        Tail = temp; 			                // Останній активний елемент - тільки що створений
    }
    else Head = Tail = temp;	                // Якщо список пустий то створюється перший елемент
}

void List::Show(int size){
    Node *tempHead = new Node;
    tempHead = Head; 	                        // Саму голову чіпати не треба

    int temp = size; 		                    // Тимчасова змінна дорівнює числу елементів у списку
    while (temp != 0){ 		                    // Поки не виконана ознака проходу по всьому списку
        cout << tempHead -> x << " " << endl; 	// Черговий елемент списку на екран
        tempHead = tempHead -> Next; 	        // Вказуємо, що потрібен наступний еле-мент
        temp--; 					            // Залишилося на один менше
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    // system("CLS");   		                // Очистка екрану
    List lst; 			                        // lst - Змінна тип якої список
    lst.Add(100); 		                        // Записати 100 в список
    lst.Add(200); 		                        // Записати 200 в список
    lst.Add(300); 		                        // Записати 300 в список
    lst.Show(5);
    // system("PAUSE"); 		                // Пауза
    return 0;
}