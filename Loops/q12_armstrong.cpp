#include <iostream>
using namespace std;

int main()
{
    int num, originalNum, remainder, result = 0;

    cout << "Enter a three-digit integer: ";
    cin >> num;

    originalNum = num;

    while (originalNum != 0) {
        // remainder contains the last digit
        remainder = originalNum % 10;

        // calculate the cube of the digit
        result += remainder * remainder * remainder;

        // removing last digit from the orignal number
        originalNum /= 10;
    }

    if (result == num)
        cout << num << " is Armstrong number.";
    else
        cout << num << " is not an Armstrong number.";

    return 0;
}

/* 
153 / 10 = 15 remainder 3
3 * 3 * 3 = 27
150 / 10 = 15 remainder 0
15 / 10 = 1 remainder 5
1 / 10 = 0 remainder 1
5 * 5 * 5 = 125
1 * 1 * 1 = 1
27 + 125 + 1 = 153
 */