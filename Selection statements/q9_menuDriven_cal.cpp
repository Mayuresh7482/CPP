#include <iostream>

using namespace std;

int main()
{
    double num1, num2; 
    int choice;

    do
    {
        cout << "Enter two numbers for Calculation : " << endl;
        cin >> num1 >> num2;
        cout << "1.Addition 2.Substraction 3.Multipication 4.division 5.Exit"<<endl;

        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << " num1 is " << num1 << " num2 is " << num2 << " addition of num1 and num2 is " << num1 + num2 << endl;
                break;

            case 2:
                cout << " num1 is " << num1 << " num2 is " << num2 << " Substraction of num1 and num2 is " << num1 - num2 << endl;
                break;
            case 3:
                cout << " num1 is " << num1 << " num2 is " << num2 << " Multipication of num1 and num2 is " << num1 * num2 << endl;
                break;
            case 4:
                cout << " num1 is " << num1 << " num2 is " << num2 << " division of num1 and num2 is " << num1 / num2 << endl;
                break;
            case 5:
                cout << "Exiting the program..." << endl;
                break;
            default:
                cout << " invalid choice please make a valid choice " << endl;
                break;
        }

    } while(choice != 5);

    return 0;
}