// Задача 23
// Організація черги

#include <iostream>
#include <ctime>

using namespace std;

class Queue{ 			            // Черга
    int * Wait;
    int MaxQueueLength; 	        // Максимальний розмір черги
    int QueueLength;		        // Поточний розмір черги

public:
    //Queue(int m);		            // Конструктор (old)
    explicit Queue(int m);		    // Конструктор (CLion)
    ~Queue();			            // Деструктор
    void Add(int c); 		        // Добавлення елемента в чергу
    int Extract();        	        // Видалення елемента з черги
    void Clear();    		        // Очистка черги
    bool IsEmpty();    		        // Перевірка наявності елементів у черзі
    bool IsFull();     		        // Перевірка на переповнення черги
    int GetCount();   		        // Кількість елементів в черзі
    void Show();			        // Відображення черги
};

void Queue::Show(){ 		        // Відображення черги
    cout << "\n-------------------------------------\n";
    for (int i = 0; i < QueueLength; i++){
        cout << Wait[i] <<" ";
    }
    cout<< "\n-------------------------------------\n";
}

Queue::~Queue(){		            // Знищення черги
    delete[]Wait;
}

Queue::Queue(int m){
    MaxQueueLength = m;		        // отримуємо розмір
    Wait = new int[MaxQueueLength]; // створюємо чергу
    QueueLength = 0;			    // черга порожня
}

void Queue::Clear(){		        // Очистка черги
    QueueLength = 0;
}

bool Queue::IsEmpty(){
    return QueueLength == 0;
}

bool Queue::IsFull(){
    return QueueLength == MaxQueueLength;
}

int Queue::GetCount(){
    return QueueLength;
}

void Queue::Add(int c){
    if(!IsFull())				    // Якщо в черзі є, то збільшуємо кількість
        Wait[QueueLength++] = c; 	// Значень і вставляємо новий елемент
}

int Queue::Extract(){
    if (!IsEmpty()){		        // Якщо в черзі є елементи, то повертаємо той,
        int temp = Wait[0];		    // Який увійшов першим і зсуваємо чергу
        for (int i = 1; i < QueueLength; i++)
            Wait[i - 1] = Wait[i];  // запам’ятовуємо перший та здвигаємо всі елементи
        QueueLength--;		        // зменшуємо кількість
        return temp;			    // повернути перший (нульовий)
    }
    else 				            // Якщо в стекові елементів немає
        return -1;
}

int main(){
    int count;
    srand(time(0));
    Queue QU(25); 		            // створення черги
    for(int i=0;i<5;i++){	        // записування частини елементів
        QU.Add(rand()%50);
    }
    cout << "Елементів спочатку: ";
    QU.Show();			            // відображення черги
    QU.Extract();		            // вилучення елемента
    cout << "Елементів після вилучення: ";
    QU.Show();			            // відображення черги
    count = QU.GetCount();          // визначаємо кількість елементів у черзі
    cout << "Елементів у черзі: " << count;
    QU.Clear();                     // очищуємо чергу
}