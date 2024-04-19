#include <iostream>
using namespace std;

class Array {
private:
    int size;
    int *arr;
public:
    // Default constructor
    Array() : size(5), arr(new int[5]()) {}

    // Parameterized constructor
    Array(int s) : size(s), arr(new int[s]()) {}

    // Copy constructor
    Array(const Array &other) : size(other.size), arr(new int[other.size]) {
        for (int i = 0; i < size; ++i) {
            arr[i] = other.arr[i];
        }
    }

    // Destructor
    ~Array() {
        delete[] arr;
    }

    // Overloaded [] operator
    int& operator[](int index) {
        if (index < 0 || index >= size) {
            throw out_of_range("Index out of range");
        }
        return arr[index];
    }

    // Overloaded ! operator to reverse array elements
    void operator!() {
        for (int i = 0; i < size / 2; ++i) {
            int temp = arr[i];
            arr[i] = arr[size - i - 1];
            arr[size - i - 1] = temp;
        }
    }

    // Overloaded >> operator to accept array size and elements from user
    friend istream& operator>>(istream& input, Array& array) {
        cout << "Enter array size: ";
        input >> array.size;
        delete[] array.arr;
        array.arr = new int[array.size];
        cout << "Enter array elements: ";
        for (int i = 0; i < array.size; ++i) {
            input >> array.arr[i];
        }
        return input;
    }

    // Overloaded << operator to display array
    friend ostream& operator<<(ostream& output, const Array& array) {
        for (int i = 0; i < array.size; ++i) {
            output << array.arr[i] << " ";
        }
        return output;
    }
};

int main() {
    Array arr1; // Default constructor
    cout << "Default constructor array: " << arr1 << endl;

    Array arr2(7); // Parameterized constructor
    cout << "Parameterized constructor array: " << arr2 << endl;

    // Copy constructor
    Array arr3 = arr2;
    cout << "Copy constructor array: " << arr3 << endl;

    // Overloaded [] operator
    arr3[2] = 10;
    cout << "Array after setting element at index 2: " << arr3 << endl;

    // Overloaded ! operator
    !arr3;
    cout << "Array after reversing: " << arr3 << endl;

    // Overloaded >> operator
    cin >> arr3;
    cout << "Array after input: " << arr3 << endl;

    return 0;
}