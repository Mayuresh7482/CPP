12#include <iostream>

using namespace std;

int main()
{

    double num1, num2, num3;
    cout << "Enter first number : " << endl;
    cin >> num1;
    cout << "Enter Second number : " << endl;
    cin >> num2;
    cout << "Enter Third number : " << endl;
    cin >> num3;

    if (num1 > num2)
    {
        if (num1 > num3)
        {
            cout << " Number is max " << num1 << endl;
        }
        else
        {
            cout << " Number is max " << num3 << endl;
        }
    }
    if (num2 > num1)
    {
        if (num2 > num3)
        {
            cout << " Number is max " << num2 << endl;
        }
        else
        {
            cout << " Number is max " << num3 << endl;
        }
    }

    return 0;
}