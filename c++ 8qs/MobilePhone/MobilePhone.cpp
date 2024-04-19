// MobilePhone.cpp
#include <iostream>
#include "MobilePhone.h"

// Default constructor
MobilePhone::MobilePhone() : ModelNo(""), Price(0.0), Manufacturer(""), Quantity(0) {}

// Parameterized constructor
MobilePhone::MobilePhone(const std::string& modelNo, double price, const std::string& manufacturer, int quantity)
    : ModelNo(modelNo), Price(price), Manufacturer(manufacturer), Quantity(quantity) {}

// Function to accept data input
void MobilePhone::acceptData() {
    std::cout << "Enter Model Number: ";
    std::cin >> ModelNo;
    std::cout << "Enter Price: ";
    std::cin >> Price;
    std::cout << "Enter Manufacturer: ";
    std::cin >> Manufacturer;
    std::cout << "Enter Quantity: ";
    std::cin >> Quantity;
}

// Function to display data
void MobilePhone::display() const {
    std::cout << "Model Number: " << ModelNo << ", Price: " << Price << ", Manufacturer: " << Manufacturer << ", Quantity: " << Quantity << std::endl;
}

// Function to search mobile phone model availability
bool MobilePhone::searchModelAvailability(const std::vector<MobilePhone>& mobiles, const std::string& modelNo) {
    for (const auto& mobile : mobiles) {
        if (mobile.ModelNo == modelNo) {
            return true;
        }
    }
    return false;
}
