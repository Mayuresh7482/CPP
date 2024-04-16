#include <iostream>
using namespace std;

void input(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

double output(int marks[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += marks[i];
    }
    return double(sum) / n;
}

int main()
{

    int n;
    cin >> n;
    int marks[n];
    input(n, marks);
    double avg = output(marks, n);
    cout << "The average of marks is : " << avg << endl;

    return 0;
}