#include <iostream>
#include <string.h>
using namespace std;
#ifndef MYHEADER_H
#define MYHEADER_H
class Shape
{
public:
    double getArea();
};
class Rectangle : public Shape
{
    double length, width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}
    double getArea();
};
class Circle : public Shape
{
    double radius;

public:
    Circle(double r) : radius(r) {}
    double getArea();
};
#endif