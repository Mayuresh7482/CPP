#include <iostream>
#include "MyString.h"

int main() {
    // Create a MyString object using the parameterized constructor
    MyString str1("Hello, World!");
    str1.display(); // Display the string

    // Create a MyString object using the copy constructor
    MyString str2(str1);
    str2.display(); // Display the copied string

    // Create a MyString object using the default constructor
    MyString str3;
    str3.display(); // Display the default-constructed string

    return 0;
}
