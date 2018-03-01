<<<<<<< HEAD
// All done!
=======
#include <iostream>
#include <ctime>
using namespace std;

struct Stack
{
    int info;
    Stack * next;
};

Stack* InStack(Stack *_begin, int in)
{
    Stack *t = new Stack;
    t->info = in;
    t->next = _begin;
    return t;
}

Stack* ch1(Stack *_begin, int n)
{
    Stack *p, *t, *c, *e;
    if (n <= 2)
    {
        cout << "Not enough elements!"<<endl;
        return _begin;
    }
    e = _begin;
    p = _begin->next;
    t = _begin->next->next;
    c = _begin->next->next->next;
    _begin = t;
    t->next = p;
    p->next = e;
    e->next = c;
    return _begin;
}

Stack* ch2(Stack *_begin, int n){
    Stack *p, *t, *c, *e;
    if (n <= 2)
    {
        cout << "Not enough elements!"<<endl;
        return _begin;
    }
    e = _begin;
    p = _begin->next;
    t = _begin;
    c = _begin->next->next;
    _begin = t;
    t->next = p;
    p->next = e;
    e->next = c;
    return _begin;
}

void View (Stack *p) {
    Stack *t = p;
    if (p == NULL)
    {
        cout << "Stack is empty!" << endl;
        return;
    }
    cout << "Stack: "<<endl;
    while (t != NULL)
    {
        cout << t->info << endl;
        t = t->next;
    }
    cout << endl;
}

int main()
{
    srand(time(NULL));
    Stack *_begin=NULL, *start=NULL, *t;
    int in,n;
    cout << "Input stack size: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        in = rand()%40-20;
        _begin = InStack(_begin,in);
    }
    View (_begin);
    _begin=ch1(_begin, n);
    _begin=ch2(_begin, n-1);
    View (_begin);
    system("pause");
    return 0;
}
>>>>>>> master
