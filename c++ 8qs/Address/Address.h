// Address.h
#ifndef ADDRESS_H
#define ADDRESS_H
using namespace std;

#include <string>

class Address
{
public:
    // Default constructor
    Address();

    // Parameterized constructor
    Address(const string &houseNo, const string &colony, const string &area, const string &city, int pincode);

    // Function to accept data input
    void acceptData();

    // Function to display data
    void display() const;

    // Function to check if two addresses are the same
    bool isSame(const Address &other) const;

    // Overloaded == operator
    bool operator==(const Address &other) const;

    // Data members
    string HouseNo;
    string Colony;
    string Area;
    string City;
    int Pincode;
};

#endif // ADDRESS_H
