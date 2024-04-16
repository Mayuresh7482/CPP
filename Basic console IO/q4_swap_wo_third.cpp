#include <iostream>

using namespace std;

int main()
{

    int num1, num2, swap;

    cout << "Enter num1 :" << endl;
    cin >> num1;
    cout << "Enter num2 :" << endl;
    cin >> num2;

    cout << "Before num1 is " << num1 << " num2 is " << num2 << endl;
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    cout << "After num1 is " << num1 << " num2 is " << num2 << endl;

    return 0;
}