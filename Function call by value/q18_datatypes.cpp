#include <iostream>
using namespace std;

void charLine(char c, int length) {
    for(int i = 0; i < length; i++) {
        cout << c;
    }
    cout << endl;
}

int main() {
    int length;
    char c;

    cout << "Enter the length of the line: ";
    cin >> length;
    cout << "Enter the character to print the line: ";
    cin >> c;

    // Print the table header
    cout << "Data Type\tSize in Bytes" << endl;

    // Print the table rows
    charLine(c, length);
    cout << "Integer\t\t4" << endl;
    charLine(c, length);
    cout << "Character\t1" << endl;
    charLine(c, length);
    cout << "Float\t\t4" << endl;
    charLine(c, length);

    return 0;
}