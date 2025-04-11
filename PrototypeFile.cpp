#include <bits/stdc++.h>
#include "myHeader.h"
using namespace std;
double Rectangle::getArea()
{
    double area = length * width;
    return area;
}
double Circle::getArea()
{
    return 2 * 3.14 * radius;
}
double Shape::getArea()
{
    return 0.0;
}
