#include <iostream>

using namespace std;

int main()
{
    double total_salary, Basic_Salary, HRA, DA, PF, GS;
    cout << "Enter basic salary : " << endl;
    cin >> Basic_Salary;

    HRA = 0.15 * Basic_Salary;
    cout << "House Rent allowance :" << HRA << endl;
    DA = 0.30 * Basic_Salary;
    cout << "Dearness allowance :" << DA << endl;

    PF = 0.125 * Basic_Salary;

    cout << "Provident fund :" << PF << endl;
    GS = Basic_Salary + HRA + DA;
    cout << "Gross Salary :" << GS << endl;

    total_salary = GS - PF;
    cout << "total Salary :" << total_salary << endl;

    return 0;
}