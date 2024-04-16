#include <iostream>

using namespace std;
void findmaxmin(int arr[], int n, int &maxval, int &minval)
{
    maxval = arr[0];
    minval = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxval)
        {
            maxval = arr[i];
        }
        if (arr[i] < minval)
        {
            minval = arr[i];
        }
    }
}

void multiplebyfive(int arr[], int n, int result[])
{
    for (int i = 0; i < n; i++)
    {
        result[i] = arr[i] * 5;
    }
}
int main()
{
    int n;
    cout << "Enter the number of integers:" << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int maxval, minval;
    findmaxmin(arr, n, maxval, minval);
    cout << "Maximum val is : " << maxval << endl;
    cout << "Minimum val is : " << minval << endl;
    int result[n];
    multiplebyfive(arr, n, result);
    cout << "Array after mutliple each element by 5 : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}