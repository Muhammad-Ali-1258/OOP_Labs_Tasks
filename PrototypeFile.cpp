#include <bits/stdc++.h>
#include "myHeader.h"
using namespace std;
void NumDays::SetHours(double h)
{
    hours = h;
}
double NumDays::getHours() const
{
    return hours;
}
double NumDays::getDays() const
{
    return hours / 8;
}
void NumDays::Display() const
{
    cout << "Hours : " << hours << " -> Days: " << getDays() << endl;
}
NumDays NumDays::operator+(NumDays obj)
{
    return NumDays(obj.hours + hours);
}
NumDays NumDays::operator/(int a)
{
    NumDays temp;
    temp.SetHours(hours / a);
    temp.Display();
    return temp;
}
