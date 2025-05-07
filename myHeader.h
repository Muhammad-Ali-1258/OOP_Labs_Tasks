#include <iostream>
#include <string.h>
using namespace std;
#ifndef MYHEADER_H
#define MYHEADER_H
template <class T>
class myQueue
{
    T *front_indicator;
    T *rear_indicator;
    int crr, size;

public:
    myQueue(int s)
    {
        size = s;
        T *queue = new T[size];
        crr = 0;
        front_indicator = queue;
        rear_indicator = queue;
    }
    void enqueue(T val)
    {
        if (isFull())
        {
            cout << "Queue is Full" << endl;
            return;
        }
        *rear_indicator = val;
        crr++;
        rear_indicator++;
    }
    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is already empty" << endl;
            return;
        }
        crr--;
        front_indicator++;
    }
    bool isEmpty()
    {
        if (rear_indicator == front_indicator)
            return true;
        return false;
    }
    bool isFull()
    {
        if (crr == size)
            return true;
        return false;
    }
    void Display()
    {
        for (T *i = front_indicator; i != rear_indicator; i++)
        {
            cout << *i << " ";
        }
        cout << endl;
    }
};

#endif