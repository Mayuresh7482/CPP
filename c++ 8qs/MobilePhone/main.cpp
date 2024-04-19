#include <iostream>
#include <vector>
#include "MobilePhone.h"

int main() {
    std::vector<MobilePhone> mobiles;
    int choice;

    do {
        std::cout << "\nMenu:\n";
        std::cout << "1. Add Mobile\n";
        std::cout << "2. Display List of Available Mobiles\n";
        std::cout << "3. Find Out Quantity of Particular Mobile Type\n";
        std::cout << "4. Find Out Availability of Particular Model\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                MobilePhone newMobile;
                newMobile.acceptData();
                mobiles.push_back(newMobile);
                break;
            }
            case 2: {
                std::cout << "List of Available Mobiles:\n";
                for (const auto& mobile : mobiles) {
                    mobile.display();
                }
                break;
            }
            case 3: {
                std::string modelNo;
                std::cout << "Enter Model Number to find quantity: ";
                std::cin >> modelNo;
                int quantity = 0;
                for (const auto& mobile : mobiles) {
                    if (mobile.ModelNo == modelNo) {
                        quantity += mobile.Quantity;
                    }
                }
                std::cout << "Quantity of " << modelNo << ": " << quantity << std::endl;
                break;
            }
            case 4: {
                std::string modelNo;
                std::cout << "Enter Model Number to check availability: ";
                std::cin >> modelNo;
                if (MobilePhone::searchModelAvailability(mobiles, modelNo)) {
                    std::cout << modelNo << " is available.\n";
                } else {
                    std::cout << modelNo << " is not available.\n";
                }
                break;
            }
            case 5:
                std::cout << "Exiting...\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}
