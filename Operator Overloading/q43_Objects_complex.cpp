/*
43.Create objects c1,c2,c3,c4 of class Complex implemented earlier. Overload necessary operators to execute following statements
a.c3=c1+c2
b.c3=c1-c2
c.c2= -c1
d.c4= ++c1
e.c4=c1++
*/

#include <iostream>
using namespace std;

class Complex
{
private:
    double real, imag;

public:
    // Constructors
     Complex(){
            real=0;
            imag=0;
        }
        
        Complex(double r,double i){
            real=r;
            imag=i;
        }

    // Getter functions
    double getReal() { return real; }
    double getImag() { return imag; }

    // Overloaded operator functions
    Complex operator+(const Complex &c);
    Complex operator-(const Complex &c);
    Complex operator++();    // prefix increment
    Complex operator++(int); // postfix increment
    Complex operator-();     // unary minus
};

// Overloaded operator functions

/* 
Complex operator+(const Complex &c) (Addition):
Takes a constant reference to a Complex object (c) as input.
Creates a new Complex object by adding the real and imag parts of the current object and c separately.Returns the newly created Complex object representing the sum.

 */

Complex Complex::operator+(const Complex &c)
{
    return Complex(real + c.real, imag + c.imag);
}

/* 
Complex operator-(const Complex &c) (Subtraction):
Similar to addition, takes a constant reference to a Complex object (c).
Creates a new Complex object by subtracting the real and imag parts of c from the current object's parts.
Returns the newly created Complex object representing the difference.
 */

Complex Complex::operator-(const Complex &c)
{
    return Complex(real - c.real, imag - c.imag);
}

/* 
Complex operator++() (Prefix Increment):
This operator is called when ++c1 is used.
Increments both real and imag of the current object by 1 (pre-increment).
Returns a reference to the current object (*this) to allow chaining of operations (e.g., ++c1 + c2).
 */

Complex Complex::operator++()
{ // prefix increment
    ++real;
    ++imag;
    return *this;
}

/* 
Complex operator++(int) (Postfix Increment):
This operator is called when c1++ is used.
Creates a temporary Complex object to store the current object's state before incrementing.
Increments both real and imag of the current object by 1 (post-increment).
Returns the temporary Complex object, representing the value before the increment.
 */

Complex Complex::operator++(int)
{ // postfix increment
    Complex temp(real, imag);
    ++real;
    ++imag;
    return temp;
}

/* 
Complex operator-() (Unary Minus):
Creates a new Complex object with the negative of both real and imag from the current object.
Returns the newly created Complex object representing the negation.
*/

Complex Complex::operator-()
{ // unary minus
    return Complex(-real, -imag);
}

int main()
{
    Complex c1(1, 2), c2(3, 4), c3, c4;

    // a. c3 = c1 + c2
    c3 = c1 + c2;
    // c3 = c1.operator+(c2);
    cout << "a. c3 = c1 + c2: (" << c3.getReal() << ", " << c3.getImag() << ")" << endl;

    // b. c3 = c1 - c2
    c3 = c1 - c2;
    cout << "b. c3 = c1 - c2: (" << c3.getReal() << ", " << c3.getImag() << ")" << endl;

    // c. c2 = -c1
    c2 = -c1;
    cout << "c. c2 = -c1: (" << c2.getReal() << ", " << c2.getImag() << ")" << endl;

    // d. c4 = ++c1
    c4 = ++c1;
    cout << "d. c4 = ++c1: (" << c4.getReal() << ", " << c4.getImag() << ")" << endl;

    // c4 = c1++ in cpp
    c4 = c1++;
    cout << "e. c4 = c1++: (" << c4.getReal() << ", " << c4.getImag() << ")" << endl;

    return 0;
}