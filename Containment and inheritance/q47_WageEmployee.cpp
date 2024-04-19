#include <iostream>

class Employee {
public:
    Employee(int emp_id, std::string name, std::string dob) :
        emp_id(emp_id), name(name), dob(dob) {}

    virtual void display() {
        std::cout << "Employee ID: " << emp_id << std::endl;
        std::cout << "Employee Name: " << name << std::endl;
        std::cout << "Employee DOB: " << dob << std::endl;
    }

private:
    int emp_id;
    std::string name;
    std::string dob;
};

class WageEmployee : public Employee {
public:
    WageEmployee(int emp_id, std::string name, std::string dob, int hours_worked, double rate_per_hour) :
        Employee(emp_id, name, dob), hours_worked(hours_worked), rate_per_hour(rate_per_hour) {}

    double calculate_salary() {
        return hours_worked * rate_per_hour;
    }

    void display() override {
        Employee::display();
        std::cout << "Hours Worked: " << hours_worked << std::endl;
        std::cout << "Rate per Hour: $" << rate_per_hour << std::endl;
        std::cout << "Salary: $" << calculate_salary() << std::endl;
    }

private:
    int hours_worked;
    double rate_per_hour;
};

class SalesPerson : public Employee {
public:
    SalesPerson(int emp_id, std::string name, std::string dob, int items_sold, double commission_per_item) :
        Employee(emp_id, name, dob), items_sold(items_sold), commission_per_item(commission_per_item) {}

    double calculate_salary() {
        return items_sold * commission_per_item;
    }

    void display() override {
        Employee::display();
        std::cout << "Items Sold: " << items_sold << std::endl;
        std::cout << "Commission per Item: $" << commission_per_item << std::endl;
        std::cout << "Salary: $" << calculate_salary() << std::endl;
    }

private:
    int items_sold;
    double commission_per_item;
};

int main() {
    WageEmployee emp1(1, "John Doe", "1990-01-01", 40, 15);
    SalesPerson emp2(2, "Jane Smith", "1995-05-10", 20, 10);

    emp1.display();
    std::cout << "\n";
    emp2.display();

    return 0;
}
