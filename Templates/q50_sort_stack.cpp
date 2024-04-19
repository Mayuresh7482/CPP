
#include <iostream>
#include "q50_header.h"
#include <stdexcept>
using namespace std; 
// Assuming the Sort function and Stack class are defined above

int main() {
    // Testing with integers
    int int_data[] = {5, 2, 8, 1, 3};
    int size = sizeof(int_data) / sizeof(int_data[0]);
    Sort(int_data, size);
    cout << "Sorted integers: ";
    for (int i = 0; i < size; ++i) {
        cout << int_data[i] << " ";
    }
    cout << endl;

    // Testing with doubles
    Stack<double> double_stack(3);
    double_stack.push(3.14);
    double_stack.push(2.71);
    double_stack.push(1.62);
    cout << "Double stack: ";
    double_stack.display();

    // Testing with complex objects
    struct Complex {
        double real, imag;
    };
    Stack<Complex> complex_stack(2);
    Complex c1 = {1, 2};
    Complex c2 = {3, 4};
    complex_stack.push(c1);
    complex_stack.push(c2);
    cout << "Complex stack: ";
    complex_stack.display();

    return 0;
}
