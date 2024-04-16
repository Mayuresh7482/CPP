/* 40.Write a program to count number of objects created for above class Complex . Use static data member and member function. */

#include <iostream>
using namespace std;

class Complex
{
private:
    int real, imag;
    static int count;

    /* static int count;: A static data member declared private to keep track of the number of Complex objects created. It's initialized to 0 outside the class definition. */

public:
    /* Complex(): Default constructor that initializes real and imag to default values (usually 0) and increments count. */

    Complex()
    {
        count++;
    }

    /* Complex(int r, int i): Parameterized constructor that initializes real and imag with the provided arguments and increments count. */

    Complex(int r, int i)
    {
        real = r;
        imag = i;
        count++;
    }

    /* static int getCount(): A static member function that returns the current value of count. This function can be called without creating an object of the class because it operates on the class-level variable count. */

    static int getCount()
    {
        return count;
    }

    /* void display(): A member function that displays the complex number in rectangular form (e.g., real + imag*i). */

    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

/*
int Complex::count = 0;: This line initializes the static data member count to 0 outside the class definition. This is necessary because static data members are not automatically initialized.
 */

int Complex::count = 0;

int main()
{
    Complex c1;
    Complex c2(5, 3);
    Complex c3(7, 4);

    cout << "Number of Complex objects created: " << Complex::getCount() << endl;

    c1.display();
    c2.display();
    c3.display();

    return 0;
}

/* Key Points:

Static data members are shared by all objects of a class. They are initialized only once, outside the class definition.
Static member functions can access static data members directly without needing an object instance.
This program effectively tracks the number of Complex objects created using a static data member and a static member function.
Additional Notes:

Consider using const for the getCount() function as it doesn't modify the class state.
While not strictly necessary in this case, including a destructor (~Complex() {}) is good practice for memory management in more complex classes */