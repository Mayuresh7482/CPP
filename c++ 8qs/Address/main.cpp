#include <iostream>
#include "Address.h"
using namespace std;

int main()
{
    Address addr1;
    cout << "Enter details for Address 1:" << endl;
    addr1.acceptData();

    Address addr2;
    cout << "Enter details for Address 2:" << endl;
    addr2.acceptData();

    // Display the addresses
    cout << "Address 1:" << endl;
    addr1.display();
    cout << "Address 2:" << endl;
    addr2.display();

    // Check if the addresses are the same
    if (addr1 == addr2)
    {
        cout << "The addresses are the same." << endl;
    }
    else
    {
        cout << "The addresses are different." << endl;
    }

    return 0;
}
