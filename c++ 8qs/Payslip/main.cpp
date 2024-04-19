#include <iostream>
#include "Payslip.h"
using namespace std;

int main() {
    Payslip payslip;
    cout << "Enter details for the payslip:" << endl;
    payslip.acceptData();

    // Display the payslip
    cout << "Payslip Details:" << endl;
    payslip.display();

    // Calculate and display the salary
    cout << "Calculated Salary: " << payslip.calculateSalary() << endl;

    return 0;
}
