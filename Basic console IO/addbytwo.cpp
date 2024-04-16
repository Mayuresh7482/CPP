#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    a = 10;
    b = 20;

    cout << "Before a is " << a << " b is " << b << endl;

    // Swapping a and b using a temporary variable c
    c = a;
    a = b;
    b = c;

    cout << "After swapping a is " << a << " b is " << b << endl;

    a = a + b; // a becomes 30
    b = a - b; // b becomes 10
    a = a - b; // a becomes 20

    cout << "After swap     a is " << a << " b is " << b << endl;

    return 0;
}
