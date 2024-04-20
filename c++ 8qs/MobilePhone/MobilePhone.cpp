// MobilePhone.cpp
#include <iostream>
#include "MobilePhone.h"
using namespace std;


// Default constructor
MobilePhone::MobilePhone() : ModelNo(""), Price(0.0), Manufacturer(""), Quantity(0) {}

// Parameterized constructor
MobilePhone::MobilePhone(const string& modelNo, double price, const string& manufacturer, int quantity)
    : ModelNo(modelNo), Price(price), Manufacturer(manufacturer), Quantity(quantity) {}

// Function to accept data input
void MobilePhone::acceptData() {
    cout << "Enter Model Number: ";
    cin >> ModelNo;
    cout << "Enter Price: ";
    cin >> Price;
    cout << "Enter Manufacturer: ";
    cin >> Manufacturer;
    cout << "Enter Quantity: ";
    cin >> Quantity;
}

// Function to display data
void MobilePhone::display() const {
    cout << "Model Number: " << ModelNo << ", Price: " << Price << ", Manufacturer: " << Manufacturer << ", Quantity: " << Quantity << endl;
}

// Function to search mobile phone model availability
bool MobilePhone::searchModelAvailability(const vector<MobilePhone>& mobiles, const string& modelNo) {
    for (const auto& mobile : mobiles) {
        if (mobile.ModelNo == modelNo) {
            return true;
        }
    }
    return false;
}
