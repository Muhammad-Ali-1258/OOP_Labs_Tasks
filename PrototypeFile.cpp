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
    return 3.14 * radius * radius;
}
double Shape::getArea()
{
    return 0.0;
}
