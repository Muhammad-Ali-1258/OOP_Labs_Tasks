#include <iostream>
#include "PrototypeFile.cpp"
using namespace std;
int main()
{
    FullTimeEmployee fe(5000, "John Doe");
    PartTimeEmployee pe(20, 80, "Jame Smith");
    Employee *e1[2];
    e1[0] = &fe;
    e1[1] = &pe;
    e1[0]->DisplayInfo();
    e1[1]->DisplayInfo();
    return 0;
}
