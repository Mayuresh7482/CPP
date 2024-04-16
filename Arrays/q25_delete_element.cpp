#include <iostream>
using namespace std;

int main()
{
    int size, pos, i;
    cout << "Enter array size (Max: 50): ";
    cin >> size;
    int arr[50];

    cout << "\nEnter array elements:\n";
    for (i = 0; i < size; i++)
    {
        cout << "Enter arr[" << i << "] Element: ";
        cin >> arr[i];
    }

    cout << "\nStored Data in Array:\n\n";
    for (i = 0; i < size; i++)
    {
        cout << " " << arr[i] << " ";
    }

    cout << "\n\nEnter position to Delete number: ";
    cin >> pos;

    if (pos > size)
    {
        cout << "\nThis is out of range.\n";
    }
    else
    {
        --pos; // Adjust position to 0-based index
        for (i = pos; i < size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        cout << "\nNew Array is:\n\n";
        for (i = 0; i < size - 1; i++)
        {
            cout << " " << arr[i] << " ";
        }
    }

    cout << "\n";
    return 0;
}
