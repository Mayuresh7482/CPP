#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    double avg;

    cout << "Enter the value of n: ";
    cin >> n;

    int *marks = new int[n];
    cout << "Enetr in each subject marks :";
    for (int i = 0; i < n; i++)
    {
        cin >> marks[i];
        sum += marks[i];
    }
    avg = double(sum) / n;
    cout << "average of all numbers is : " << avg << endl;
    delete[] marks;

    return 0;
}