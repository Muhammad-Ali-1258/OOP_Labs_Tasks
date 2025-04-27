#include <bits/stdc++.h>
#include "myHeader.h"
using namespace std;
void Employee::DisplayInfo() const
{
    cout << "Employee Class DisplayInfo called";
}
void FullTimeEmployee::calculatePay()
{
}
void FullTimeEmployee::DisplayInfo() const
{
    cout << "Full time employee : " << name << endl;
    cout << "Monthly Salary of full time employee is :" << salary << endl;
}
void PartTimeEmployee::calculatePay()
{
    salary = h_worked * h_rate;
}
void PartTimeEmployee::DisplayInfo() const
{
    cout << "Part time employee : " << name << endl;
    cout << "Hour Worked:" << h_worked << endl;
    cout << "Hour Rate:" << h_rate << "$" << endl;
    cout << "Salary of full time employee is :" << salary << endl;
}
