// MyString.h
#ifndef MYSTRING_H
#define MYSTRING_H

#include <iostream>

class MyString {
public:
    // Default constructor
    MyString();

    // Parameterized constructor
    MyString(const char* str);

    // Copy constructor
    MyString(const MyString& other);

    // Destructor
    ~MyString();

    // Display function
    void display() const;

private:
    char* p;
    int size;
};

#endif // MYSTRING_H
