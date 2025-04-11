#include <iostream>
#include "PrototypeFile.cpp"
using namespace std;
int main()
{
    int choice;
    cout << "Select a shape to calculate area :" << endl;
    cout << "1. Rectangle" << endl;
    cout << "2. Circle" << endl;
    cout << "Enter your choice" << endl;
    cin >> choice;
    if (choice == 1)
    {
        double w, l;
        cout << "Enter width of rectangle:" << endl;
        cin >> w;
        cout << "Enter lenght of rectangle:" << endl;
        cin >> l;
        Rectangle rec(w, l);
        cout << "Area of rectangle is : " << rec.getArea();
    }
    else if (choice == 2)
    {
        double r;
        cout << "Enter radius of circle:" << endl;
        cin >> r;
        Circle c(r);
        cout << "Area of circle is : " << c.getArea();
    }
    else
        cout << "Invalid Choice" << endl;
    return 0;
}
