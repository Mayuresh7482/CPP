// MobilePhone.h
#ifndef MOBILEPHONE_H
#define MOBILEPHONE_H

#include <string>
#include <vector>

class MobilePhone {
public:
    // Default constructor
    MobilePhone();

    // Parameterized constructor
    MobilePhone(const std::string& modelNo, double price, const std::string& manufacturer, int quantity);

    // Function to accept data input
    void acceptData();

    // Function to display data
    void display() const;

    // Function to search mobile phone model availability
    static bool searchModelAvailability(const std::vector<MobilePhone>& mobiles, const std::string& modelNo);

    // Data members
    std::string ModelNo;
    double Price;
    std::string Manufacturer;
    int Quantity;
};

#endif // MOBILEPHONE_H
