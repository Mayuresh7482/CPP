/* 39.Implement class Complex with real (int) and imaginary (int) parts as data members of class. Implement below functions inside this class.
default constructor, parameterized constructor, getter functions for real and imaginary parts, setter functions for real and imaginary parts, display function. */

#include <iostream>
using namespace std;

class Complex
{
    int real;
    int img;

public:
    Complex()
    {
        real = 0;
        img = 0;
    }
    Complex(int r, int i)
    {
        real = r;
        img = i;
    }
    int getReal()
    {
        return real;
    }
    int getImg()
    {
        return img;
    }
    void setReal(int r)
    {
        real = r;
    }
    void setImg(int i)
    {
        img = i;
    }
    void display()
    {
        cout << real << " + " << img << "i" << endl;
    }
};
int main()
{
    Complex c1;
    c1.display();

    Complex c2(3, 5);
    c2.display();

    c2.setReal(7);
    c2.setImg(5);
    c2.display();
    cout << c2.getReal() << " + " << c2.getImg() << "i" << endl;
    return 0;
}