#include <iostream>
#include "myHeader.h"
using namespace std;
int main()
{
    myQueue<float> q1(5);
    myQueue<char> q2(3);
    q1.dequeue();
    q1.Display();
    cout << q1.isEmpty() << endl;
    cout << q1.isFull() << endl;
    q1.enqueue(12.2);
    q1.enqueue(13.2);
    q1.enqueue(14.2);
    q1.Display();
    cout << q1.isEmpty() << endl;
    cout << q1.isFull() << endl;
    q1.enqueue(15.2);
    q1.enqueue(16.2);
    q1.Display();
    cout << q1.isEmpty() << endl;
    cout << q1.isFull() << endl;
    q1.dequeue();
    q1.dequeue();
    q1.Display();
    cout << q1.isEmpty() << endl;
    cout << q1.isFull() << endl;
    q2.enqueue('a');
    q2.enqueue('b');
    q2.enqueue('c');
    q2.Display();
    cout << q1.isEmpty() << endl;
    cout << q1.isFull() << endl;
    q2.dequeue();
    q2.Display();
    cout << q1.isEmpty() << endl;
    cout << q1.isFull() << endl;
    q2.enqueue('c');
    q2.enqueue('d');
    q2.Display();
    cout << q2.isEmpty() << endl;
    cout << q2.isFull() << endl;
}
