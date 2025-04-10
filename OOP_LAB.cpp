#include <iostream>
#include "PrototypeFile.cpp"
using namespace std;
int main()
{
    NumDays obj1;
    NumDays obj2;
    NumDays obj3;
    obj1.SetHours(8);
    cout << "For 8 hours: ";
    obj1.Display();
    obj2.SetHours(12);
    cout << "For 12 hours: ";
    obj2.Display();
    obj3.SetHours(18);
    cout << "For 18 hours: ";
    obj3.Display();
    NumDays obj4;
    cout << "After adding day1 and day2(8+12 hours): " << endl;
    obj4 = obj1 + obj2;
    obj4.Display();
    NumDays obj5;
    cout << "After dividing day 3 (18 hours) by 2" << endl;
    obj5 = obj3 / 2;
}
