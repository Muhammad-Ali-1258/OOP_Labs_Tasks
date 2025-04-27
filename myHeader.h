#include <iostream>
#include <string.h>
using namespace std;
#ifndef MYHEADER_H
#define MYHEADER_H
class Employee
{
public:
    virtual void calculatePay() = 0;
    virtual void DisplayInfo() const;
};
class FullTimeEmployee : public Employee
{
    int salary;
    string name;

public:
    FullTimeEmployee(int s, string n) : salary(s), name(n) {}
    void calculatePay();
    void DisplayInfo() const;
};
class PartTimeEmployee : public Employee
{
    int salary;
    int h_rate;
    int h_worked;
    string name;

public:
    void calculatePay();
    PartTimeEmployee(int r, int w, string s) : h_rate(r), h_worked(w), name(s)
    {
        calculatePay();
    }
    void DisplayInfo() const;
};
#endif