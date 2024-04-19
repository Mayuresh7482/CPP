// Date.cpp
#include <iostream>
#include "Date.h"

// Default constructor
Date::Date() : dd(1), mm(1), yyyy(1900) {}

// Parameterized constructor
Date::Date(int dd, int mm, int yyyy) : dd(dd), mm(mm), yyyy(yyyy) {}

// Destructor
Date::~Date() {}

// Function to find out difference between two dates
int Date::difference(const Date& other) const {
    // Implement date difference logic here
    // This is a simplified example, actual implementation may vary
    return (yyyy - other.yyyy) * 365 + (mm - other.mm) * 30 + (dd - other.dd);
}

// Function to compare dates
bool Date::isEqual(const Date& other) const {
    return dd == other.dd && mm == other.mm && yyyy == other.yyyy;
}

// Overloaded operators
bool Date::operator==(const Date& other) const {
    return isEqual(other);
}

bool Date::operator!=(const Date& other) const {
    return !isEqual(other);
}

Date Date::operator+(int days) const {
    // Implement date addition logic here
    // This is a simplified example, actual implementation may vary
    return Date(dd + days, mm, yyyy);
}

Date Date::operator-(int days) const {
    // Implement date subtraction logic here
    // This is a simplified example, actual implementation may vary
    return Date(dd - days, mm, yyyy);
}
