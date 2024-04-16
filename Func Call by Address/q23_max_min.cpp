/* 23.Write a program which accepts two integers in main(). Pass these as arguments to function max(). In max(), find the maximum of these two numbers and using a return statement, return the address of the maximum number and print it in main(). */

#include <iostream>

using namespace std;

// Function to find the maximum value and return its address
int *max(int *num1, int *num2)
{
    if (*num1 > *num2)
    {
        cout << "num1 is max" << endl;
        return num1; // Return the address of num1
    }
    else
    {
        cout << "num2 is max" << endl;
        return num2; // Return the address of num2
    }
}

// Corrected min function
int *min(int *num1, int *num2)
{
    if (*num1 < *num2) // Corrected condition
    {
        cout << "num1 is min" << endl;
        return num1; // Return the address of num1
    }
    else
    {
        cout << "num2 is min" << endl;
        return num2; // Return the address of num2
    }
}

int main()
{
    int n1, n2;
    cout << "Enter first number: ";
    cin >> n1;
    cout << "Enter second number: ";
    cin >> n2;

    // Pass the addresses of n1 and n2 to the max function
    int *maxptr = max(&n1, &n2);
    cout << "Max number is " << *maxptr << endl;

    // Pass the addresses of n1 and n2 to the min function
    int *minptr = min(&n1, &n2);
    cout << "Min number is " << *minptr << endl;

    return 0;
}
