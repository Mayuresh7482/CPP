#include <iostream>
#include "Date.h"
using namespace std;
int main() {
    // Create two Date objects using the parameterized constructor
    Date date1(15, 4, 2024); // April 15, 2024
    Date date2(16, 4, 2024); // April 16, 2024

    // Use the overloaded == operator to compare dates
    if (date1 == date2) {
        std::cout << "Date1 and Date2 are the same." << std::endl;
    } else {
        std::cout << "Date1 and Date2 are different." << std::endl;
    }

    // Use the overloaded != operator to compare dates
    if (date1 != date2) {
        std::cout << "Date1 and Date2 are different." << std::endl;
    } else {
        std::cout << "Date1 and Date2 are the same." << std::endl;
    }

    // Calculate the difference between two dates
    int daysDifference = date2.difference(date1);
    std::cout << "Difference between Date1 and Date2: " << daysDifference << " days" << std::endl;

    // Use the overloaded + operator to add days to a date
    Date date3 = date1 + 10; // Add 10 days to date1
    std::cout << "Date3 (Date1 + 10 days): " << date3.getDay() << "/" << date3.getMonth() << "/" << date3.getYear() << std::endl;

    // Use the overloaded - operator to subtract days from a date
    Date date4 = date2 - 5; // Subtract 5 days from date2
    std::cout << "Date4 (Date2 - 5 days): " << date4.getDay() << "/" << date4.getMonth() << "/" << date4.getYear() << std::endl;

    return 0;
}
