// Address.cpp
#include <iostream>
#include "Address.h"
using namespace std;

// Default constructor
Address::Address() : HouseNo(""), Colony(""), Area(""), City(""), Pincode(0) {}

// Parameterized constructor
Address::Address(const string &houseNo, const string &colony, const string &area, const string &city, int pincode)
    : HouseNo(houseNo), Colony(colony), Area(area), City(city), Pincode(pincode) {}

// Function to accept data input
void Address::acceptData()
{
    cout << "Enter House Number: ";
    cin >> HouseNo;
    cout << "Enter Colony: ";
    cin >> Colony;
    cout << "Enter Area: ";
    cin >> Area;
    cout << "Enter City: ";
    cin >> City;
    cout << "Enter Pincode: ";
    cin >> Pincode;
}

// Function to display data
void Address::display() const
{
    cout << "House Number: " << HouseNo << ", Colony: " << Colony << ", Area: " << Area << ", City: " << City << ", Pincode: " << Pincode << endl;
}

// Function to check if two addresses are the same
bool Address::isSame(const Address &other) const
{
    return HouseNo == other.HouseNo && Colony == other.Colony && Area == other.Area && City == other.City && Pincode == other.Pincode;
}

// Overloaded == operator
bool Address::operator==(const Address &other) const
{
    return isSame(other);
}
