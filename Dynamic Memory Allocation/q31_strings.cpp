#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main() {
    // Dynamically allocate memory for an array of 5 strings
    string* strArray = new string[5];

    // Prompt the user to enter 5 strings
    cout << "Enter five strings:\n";
    for (int i = 0; i < 5; ++i) {
        cout << "String " << (i + 1) << ": ";
        cin >> strArray[i];
    }

    // Sort the strings alphabetically using std::sort
    sort(strArray, strArray + 5);

    // Display the sorted strings
    cout << "Strings in alphabetical order:\n";
    for (int i = 0; i < 5; ++i) {
        cout << strArray[i] << endl;
    }

    // Free the dynamically allocated memory
    delete[] strArray;

    return 0;
}
