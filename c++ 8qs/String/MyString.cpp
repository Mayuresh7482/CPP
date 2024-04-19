// MyString.cpp
#include "MyString.h"
#include<cstring>

// Default constructor
MyString::MyString() : p(nullptr), size(0) {}

// Parameterized constructor
MyString::MyString(const char* str) {
    size = strlen(str);
    p = new char[size + 1]; // Allocate memory for the string and the null terminator
    strcpy(p, str);
}

// Copy constructor
MyString::MyString(const MyString& other) {
    size = other.size;
    p = new char[size + 1]; // Allocate memory for the string and the null terminator
    strcpy(p, other.p);
}

// Destructor
MyString::~MyString() {
    delete[] p; // Clean-up: delete the dynamically allocated memory
}

// Display function
void MyString::display() const {
    std::cout << p << std::endl;
}
