#include <iostream>
#include <string>
using namespace std;

class Employee
{ // Abstract base class
public:
    Employee()
    {
        cout << "contructor called" << endl;
    }
    
    Employee(int emp_id, string name, string dob) : emp_id(emp_id), name(name), dob(dob) {}

    virtual ~Employee() = default; // Make destructor virtual for proper cleanup

    virtual void accept() = 0;                   // Pure virtual function
    virtual void display() const = 0;            // Pure virtual function
    virtual double calculate_salary() const = 0; // Pure virtual function

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

protected:
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

    double calculate_salary() const override
    {
        return hours_worked * rate_per_hour;
    }

    void display() const override
    {
        cout << "Employee ID: " << this->getEmp_id() << endl;
        cout << "Employee Name: " << this->getname() << endl;
        cout << "Employee DOB: " << this->getdob() << endl;
        cout << "Hours Worked: " << hours_worked << endl;
        cout << "Rate per Hour: $" << rate_per_hour << endl;
        cout << "Salary: $" << calculate_salary() << endl;
    }
};

class SalesPerson : public virtual Employee
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

    double calculate_salary() const override
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

class Manager : public virtual Employee
{
public:
    Manager(int emp_id, string name, string dob, int basic_salary, int num_subordinates) : Employee(emp_id, name, dob), basic_salary(basic_salary), num_subordinates(num_subordinates) {}

    void accept() override
    {
        cout << "Enter basic salary: $";
        cin >> basic_salary;
        cout << "Enter number of subordinates: ";
        cin >> num_subordinates;
    }

    double calculate_salary() const override
    {
        return basic_salary + num_subordinates * 100; // Example calculation
    }

    void display() const override
    {
        cout << "Employee ID: " << this->getEmp_id() << endl;
        cout << "Employee Name: " << this->getname() << endl;
        cout << "Employee DOB: " << this->getdob() << endl;
        cout << "Basic Salary: $" << basic_salary << endl;
        cout << "Number of Subordinates: " << num_subordinates << endl;
        cout << "Salary: $" << calculate_salary() << endl;
    }

private:
    int basic_salary;
    int num_subordinates;
};

class SalesManager : public virtual SalesPerson, public virtual Manager
{
public:
    SalesManager(int emp_id, string name, string dob, int items_sold, double commission_per_item, int basic_salary, int num_subordinates) : SalesPerson(emp_id, name, dob, items_sold, commission_per_item),
                                                                                                                                            Manager(emp_id, name, dob, basic_salary, num_subordinates) {}

    void accept() override
    {
        SalesPerson::accept();
        Manager::accept();
    }

    double calculate_salary() const override
    {
        return SalesPerson::calculate_salary() + Manager::calculate_salary();
    }

    void display() const override
    {
        cout << "SalesManager Details:\n";
        SalesPerson::display();
        Manager::display();
    }
};

int main()
{
    // Allocate memory on the heap for derived class objects
    Employee *emp1 = new WageEmployee(1, "John Doe", "1990-01-01", 0, 0);
    Employee *emp2 = new SalesPerson(2, "Jane Smith", "1995-05-10", 0, 0);
    Employee *emp3 = new Manager(3, "Bob Johnson", "1985-12-25", 0, 0);
    Employee *emp4 = new SalesManager(4, "Alice Davis", "1992-03-17", 0, 0, 0, 0);

    emp1->accept();
    emp2->accept();
    emp3->accept();
    emp4->accept();

    cout << "\nEmployee 1 Details:\n";
    emp1->display();

    cout << "\nEmployee 2 Details:\n";
    emp2->display();

    cout << "\nEmployee 3 Details:\n";
    emp3->display();

    cout << "\nEmployee 4 Details:\n";
    emp4->display();

    delete emp1;
    delete emp2;
    delete emp3;
    delete emp4;

    return 0;
}