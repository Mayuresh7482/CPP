#include <iostream>
#include <vector>
#include "MobilePhone.h"
using namespace std;
int main() {
    vector<MobilePhone> mobiles;
    int choice;

    do {
        cout << "\nMenu:\n";
        cout << "1. Add Mobile\n";
        cout << "2. Display List of Available Mobiles\n";
        cout << "3. Find Out Quantity of Particular Mobile Type\n";
        cout << "4. Find Out Availability of Particular Model\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                MobilePhone newMobile;
                newMobile.acceptData();
                mobiles.push_back(newMobile);
                break;
            }
            case 2: {
                cout << "List of Available Mobiles:\n";
                for (const auto& mobile : mobiles) {
                    mobile.display();
                }
                break;
            }
            case 3: {
                string modelNo;
                cout << "Enter Model Number to find quantity: ";
                cin >> modelNo;
                int quantity = 0;
                for (const auto& mobile : mobiles) {
                    if (mobile.ModelNo == modelNo) {
                        quantity += mobile.Quantity;
                    }
                }
                cout << "Quantity of " << modelNo << ": " << quantity << endl;
                break;
            }
            case 4: {
                string modelNo;
                cout << "Enter Model Number to check availability: ";
                cin >> modelNo;
                if (MobilePhone::searchModelAvailability(mobiles, modelNo)) {
                    cout << modelNo << " is available.\n";
                } else {
                    cout << modelNo << " is not available.\n";
                }
                break;
            }
            case 5:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}
