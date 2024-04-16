/* 34.Write a program to copy one structure into another –
a.On element by element basis.
b.Copying an entire structure to another. */
#include <iostream>
using namespace std;

typedef struct
{
    int ID;
    string name;
    float salary;
} product;

void copyelement(const product &src, product &dest)
{
    dest.ID = src.ID;
    dest.name, src.name; // use strcpy to copy the name member
    dest.salary = src.salary;
}

void copystruct(const product &src, product &dest)
{
    dest = src;
}
int main()
{
    product s1 = {1, "A", 10000};
    product dest1, dest2;
    copyelement(s1, dest1);
    cout << "ID: " << dest1.ID << ", name = " << dest1.name << " , salary = " << dest1.salary << endl;
    product s2 = {2, "B", 20000};
    copystruct(s2, dest2);
    cout << "ID: " << dest2.ID << ", name = " << dest2.name << " , salary = " << dest2.salary << endl;

    return 0;
}