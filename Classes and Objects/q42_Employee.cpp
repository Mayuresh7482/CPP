/*
.42.Write a class Employee for an application which will have data members for employee id, employee name and salary. Provide the following functionalities in Employee class.
    1. Initialing objects using default and parameterized constructors.
    2. Accepting and displaying the information of employee from console

    class Employee
    {
        int emp_id;
        char emp_name[20];
        double salary;
    public:
        Employee();
        Employee(int, char*, double);
        void Accept();
        void Display();
    };

In "main" function declare an array of Employee objects. Write a menu driven program to -
    a. Insert record into an array.
    b. Update information of specific employee on the basis of emp_id accepted from user
    c. Display all records
*/

#include <iostream>
#include <cstring> // For strcpy()

using namespace std;

class Employee {
public:
    int employeeId;
    char employeeName[20];
    double salary;

    // Default constructor
    Employee() {
        employeeId = 0;
        strcpy(employeeName, ""); // Initialize name to empty string
        salary = 0.0;
    }

    // Parameterized constructor
    Employee(int id, const char* name, double sal) {
        employeeId = id;
        strcpy(employeeName, name); // Safe copy using strcpy()
        salary = sal;
    }

    // Function to accept employee information from console
    void acceptEmployeeDetails() {
        cout << "Enter employee ID: ";
        cin >> employeeId;

        cout << "Enter employee name: ";
        cin.ignore(); // Clear input buffer to avoid issues with getline()
        cin.getline(employeeName, 20); // Use getline() for safer name input

        cout << "Enter employee salary: ";
        cin >> salary;
    }

    // Function to display employee information
    void displayEmployeeDetails() const {
        cout << "Employee ID: " << employeeId << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Salary: " << salary << endl;
    }
};

// Function to display the menu
void displayMenu() {
    cout << "\nEmployee Management System" << endl;
    cout << "1. Insert Record" << endl;
    cout << "2. Update Record" << endl;
    cout << "3. Display All Records" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice: ";
}

// Function to insert a new employee record
void insertEmployee(Employee employeeArray[], int& numEmployees, const int MAX_EMPLOYEES) {
    if (numEmployees == MAX_EMPLOYEES) {
        cout << "Employee array is full!" << endl;
    } else {
        employeeArray[numEmployees].acceptEmployeeDetails();
        numEmployees++;
        cout << "Record inserted successfully!" << endl;
    }
}

// Function to update an existing employee record
void updateEmployee(Employee employeeArray[], int numEmployees) {
    int updateId;
    bool found = false;

    cout << "Enter employee ID to update: ";
    cin >> updateId;

    for (int i = 0; i < numEmployees; i++) {
        if (employeeArray[i].employeeId == updateId) {
            cout << "Employee details to be updated:" << endl;
            employeeArray[i].displayEmployeeDetails();

            cout << "Enter new employee information:" << endl;
            employeeArray[i].acceptEmployeeDetails();
            found = true;
            cout << "Record updated successfully!" << endl;
            break; // Exit the loop after update
        }
    }

    if (!found) {
        cout << "Employee with ID " << updateId << " not found!" << endl;
    }
}

// Function to display all employee records
void displayAllEmployees(Employee employeeArray[], int numEmployees) {
    if (numEmployees == 0) {
        cout << "No employee records to display!" << endl;
    } else {
        cout << "\nEmployee Records:" << endl;
        for (int i = 0; i < numEmployees; i++) {
            employeeArray[i].displayEmployeeDetails();
            cout << endl;
        }
    }
}

int main() {
    const int MAX_EMPLOYEES = 10; // Maximum number of employees
    Employee employeeArray[MAX_EMPLOYEES];
    int numEmployees = 0; // Count of employees

    int choice;

    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                insertEmployee(employeeArray, numEmployees, MAX_EMPLOYEES);
                break;
            case 2:
                updateEmployee(employeeArray, numEmployees);
                break;
            case 3:
                displayAllEmployees(employeeArray, numEmployees);
                break;
            case 4:
                cout << "Exiting Employee Management System..." << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    } while (choice != 4);

    


    return 0;
}
