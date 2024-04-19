// Payslip.cpp
#include <iostream>
#include "Payslip.h"
using namespace std;

// Default constructor
Payslip::Payslip() : EmpNo(0), EmpName(""), DA(0.0), HRA(0.0), BasicSalary(0.0) {}

// Parameterized constructor
Payslip::Payslip(int empNo, const string& empName, double da, double hra, double basicSalary)
    : EmpNo(empNo), EmpName(empName), DA(da), HRA(hra), BasicSalary(basicSalary) {}

// Function to accept data input
void Payslip::acceptData() {
    cout << "Enter Employee Number: ";
    cin >> EmpNo;
    cout << "Enter Employee Name: ";
    cin >> EmpName;
    cout << "Enter DA: ";
    cin >> DA;
    cout << "Enter HRA: ";
    cin >> HRA;
    cout << "Enter Basic Salary: ";
    cin >> BasicSalary;
}

// Function to display data
void Payslip::display() const {
    cout << "Employee Number: " << EmpNo << ", Name: " << EmpName << ", DA: " << DA << ", HRA: " << HRA << ", Basic Salary: " << BasicSalary << endl;
}

// Function to calculate salary
double Payslip::calculateSalary() const {
    return DA + HRA + BasicSalary;
}
