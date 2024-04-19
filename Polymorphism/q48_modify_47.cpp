#include <iostream>
using namespace std;

class Employee
{ // Abstract base class
public:
    Employee(int emp_id, string name, string dob) : emp_id(emp_id), name(name), dob(dob) {}

    virtual ~Employee() = default; // Make destructor virtual for proper cleanup

    virtual void accept() = 0;        // Pure virtual function
    virtual void display() const = 0; // Pure virtual function

    int getEmp_id() const
    {
        return emp_id;
    }

    void
    setEmp_id(int emp_id)
    {
        this->emp_id = emp_id;
    }

    string getname() const
    {
        return name;
    }

    void setname(string name)
    {
        this->name = name;
    }

    string getdob() const
    {
        return dob;
    }

    void setdob(string dob)
    {
        this->dob = dob;
    }

private:
    int emp_id;
    string name;
    string dob;
};

class WageEmployee : public Employee
{
private:
    int hours_worked;
    double rate_per_hour;

public:
    WageEmployee(int emp_id, string name, string dob, int hours_worked, double rate_per_hour) : Employee(emp_id, name, dob), hours_worked(hours_worked), rate_per_hour(rate_per_hour) {}

    void accept() override
    {
        cout << "Enter hours worked: ";
        cin >> hours_worked;
        cout << "Enter rate per hour: $";
        cin >> rate_per_hour;
    }

    double calculate_salary() const
    {
        return hours_worked * rate_per_hour;
    }

    void display()const override
    {
        cout << "Employee ID: " << this->getEmp_id() << endl;
        cout << "Employee Name: " << this->getname() << endl;
        cout << "Employee DOB: " << this->getdob() << endl;
        cout << "Hours Worked: " << hours_worked << endl;
        cout << "Rate per Hour: $" << rate_per_hour << endl;
        cout << "Salary: $" << calculate_salary() << endl;
    }
};

class SalesPerson : public Employee
{
public:
    SalesPerson(int emp_id, string name, string dob, int items_sold, double commission_per_item) : Employee(emp_id, name, dob), items_sold(items_sold), commission_per_item(commission_per_item) {}

    void accept() override
    {
        cout << "Enter number of items sold: ";
        cin >> items_sold;
        cout << "Enter commission per item: $";
        cin >> commission_per_item;
    }

    double calculate_salary() const
    {
        return items_sold * commission_per_item;
    }

    void display() const override
    {
        cout << "Employee ID: " << this->getEmp_id() << endl;
        cout << "Employee Name: " << this->getname() << endl;
        cout << "Employee DOB: " << this->getdob() << endl;
        cout << "Items Sold: " << items_sold << endl;
        cout << "Commission per Item: $" << commission_per_item << endl;
        cout << "Salary: $" << calculate_salary() << endl;
    }

private:
    int items_sold;
    double commission_per_item;
};

int main()
{
    // Allocate memory on the heap for derived class objects
    Employee *emp1 = new WageEmployee(1, "John Doe", "1990-01-01", 0, 0);
    Employee *emp2 = new SalesPerson(2, "Jane Smith", "1995-05-10", 0, 0);

    emp1->accept();
    emp2->accept();

    cout << "\nEmployee 1 Details:\n";
    emp1->display();

    cout << "\nEmployee 2 Details:\n";
    emp2->display();

    delete emp1;
    delete emp2;

    return 0;
}
