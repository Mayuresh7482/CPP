#include <iostream>
using namespace std;

// Function to insert an element into an array at a specified position
void insert(int arr[], int n, int pos, int elem)
{
    // Shift elements to the right
    for (int i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    // Insert the new element
    arr[pos] = elem;
}

int main()
{
    // Declare and initialize an array of integers
    int arr[10];

    // Declare and initialize variables for the number of elements, position, and element to be inserted
    int n, pos, elem;

    // Prompt the user to input the number of elements in the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    // Prompt the user to input the elements in the array
    cout << "Enter the elements in the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Prompt the user to input the position at which the element needs to be inserted
    cout << "Enter the position at which the element needs to be inserted: ";
    cin >> pos;

    // Prompt the user to input the element to be inserted
    cout << "Enter the element to be inserted: ";
    cin >> elem;

    // Call the insert function with the appropriate arguments
    insert(arr, n, pos, elem);

    // Print the array after insertion
    cout << "Array after insertion: ";
    for (int i = 0; i <= n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}