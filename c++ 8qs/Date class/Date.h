// Date.h
#ifndef DATE_H
#define DATE_H

#include <iostream>

class Date {
public:
    // Default constructor
    Date();

    // Parameterized constructor
    Date(int dd, int mm, int yyyy);

    // Destructor
    ~Date();

    // Function to find out difference between two dates
    int difference(const Date& other) const;

    // Function to compare dates
    bool isEqual(const Date& other) const;

    // Overloaded operators
    bool operator==(const Date& other) const;
    bool operator!=(const Date& other) const;
    Date operator+(int days) const;
    Date operator-(int days) const;

    // Getter functions for private members
    int getDay() const { return dd; }
    int getMonth() const { return mm; }
    int getYear() const { return yyyy; }

private:
    int dd;
    int mm;
    int yyyy;
};

#endif // DATE_H
