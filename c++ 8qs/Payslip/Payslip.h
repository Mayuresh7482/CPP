// Payslip.h
#ifndef PAYSLIP_H
#define PAYSLIP_H

#include <string>

class Payslip {
public:
    // Default constructor
    Payslip();

    // Parameterized constructor
    Payslip(int empNo, const std::string& empName, double da, double hra, double basicSalary);

    // Function to accept data input
    void acceptData();

    // Function to display data
    void display() const;

    // Function to calculate salary
    double calculateSalary() const;

    // Data members
    int EmpNo;
    std::string EmpName;
    double DA;
    double HRA;
    double BasicSalary;
};

#endif // PAYSLIP_H
