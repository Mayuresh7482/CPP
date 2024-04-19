#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Create a vector to store ten integers
    vector<int> vec(10);

    // Read ten integers from standard input and store them in the vector
    for (int i = 0; i < 10; ++i) {
        cin >> vec[i];
    }

    // Insert two more values into the vector at the end
    vec.push_back(11);
    vec.push_back(12);

    // Print the vector using subscript notation
    cout << "Vector elements using subscript notation: ";
    for (int i = 0; i < vec.size(); ++i) {
        cout << vec[i] << " ";
    }
    cout << endl;

    // Remove two elements from the end of the vector
    vec.pop_back();
    vec.pop_back();

    // Print the vector using iterator
    cout << "Vector elements using iterator: ";
    for (vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}