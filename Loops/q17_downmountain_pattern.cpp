#include <iostream>

using namespace std;

int main()
{

    int num;
    cout << "Enter the down fall series pattern :" << endl;
    cin >> num;
    

   // Outer loop to control the number of rows
    for (int i = num; i >= 1; i--) {
        // Inner loop to print spaces
        for (int j = num; j > i; j--) {
            cout << " ";
        }
        // Inner loop to print numbers
        for (int k = i; k >= 1; k--) {
            cout << k << " ";
        }
        // Move to the next row
        cout << endl;
    }

    return 0;
}