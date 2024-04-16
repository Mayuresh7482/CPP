/*
41.Write a class Array which will store integer elements in dynamically allocated space.
        class Array
        {
            int size;
            int *arr;
        }
    Provide below functions in Array class -
      1. Default constructor - Take 5 as default size. Initialize the array elements to 0
      2. Parameterized constructor - Takes size as parameter. Initialize the array elements to 0.
      3. Copy constructor - Performs deep copy of Array object.
      4. Destructor - Deletes memory which is allocated dynamically.
*/

#include <iostream>
using namespace std;

class Array {
private:
    int size;
    int *arr;

public:
    // Default constructor
    Array() {
        size = 5;
        arr = new int[size];
        for (int i = 0; i < size; i++) {
            arr[i] = 0;
        }
    }

    // Parameterized constructor
    Array(int size) {
        this->size =size;
        arr = new int[size];
        for (int i = 0; i < size; i++) {
            arr[i] = 0;
        }
    }

    // Copy constructor
    Array(const Array &obj) {
        size = obj.size;
        arr = new int[size];
        for (int i = 0; i < size; i++) {
            arr[i] = obj.arr[i];
        }
    }

    // Destructor
    ~Array() {
        delete[] arr;
    }

    // Function to display array elements
    void display() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Array arr1; // Calls default constructor
    arr1.display();

    Array arr2(10); // Calls parameterized constructor
    arr2.display();

    Array arr3(arr2); // Calls copy constructor
    arr3.display();

    return 0;
}