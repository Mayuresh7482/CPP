/* 37.Overload function “Add” to add two integers, floats and doubles. */

#include <iostream>
using namespace std;
int add(int n1, int n2)
{
    return n1 + n2;
}
int add(double n1, double n2)
{
    return n1 + n2;
}
int add(float n1, float n2)
{
    return n1 + n2;
}

int main()
{
    cout << "integer :" << add(1, 2) << endl;
    cout << "double : " << add(2.3, 5.6) << endl;
    cout << "float : " << add(5.2f, 8.3f) << endl;

    return 0;
}