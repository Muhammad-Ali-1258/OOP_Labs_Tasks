#include <iostream>
#include <string.h>
using namespace std;
#ifndef MYHEADER_H
#define MYHEADER_H
class NumDays
{
    double hours;

public:
    NumDays(double h = 0) : hours(h) {}
    void SetHours(double h);
    double getHours() const;
    double getDays() const;
    void Display() const;
    NumDays operator+(NumDays obj);
    NumDays operator/(int a);
};
#endif