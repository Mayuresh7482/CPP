// MobilePhone.h
#ifndef MOBILEPHONE_H
#define MOBILEPHONE_H

#include <string>
#include <vector>
using namespace std;
class MobilePhone {
public:
    // Default constructor
    MobilePhone();

    // Parameterized constructor
    MobilePhone(const string& modelNo, double price, const string& manufacturer, int quantity);

    // Function to accept data input
    void acceptData();

    // Function to display data
    void display() const;

    // Function to search mobile phone model availability
    static bool searchModelAvailability(const vector<MobilePhone>& mobiles, const string& modelNo);

    // Data members
    string ModelNo;
    double Price;
    string Manufacturer;
    int Quantity;
};

#endif // MOBILEPHONE_H
