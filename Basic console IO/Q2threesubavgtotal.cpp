#include <iostream>
using namespace std;
int main()
{
    int sub1, sub2, sub3;
    double total, avg;

    cout << "Enter sub1 marks : " << endl;
    cin >> sub1;
    cout << "Enter sub2 marks : " << endl;
    cin >> sub2;
    cout << "Enter sub3 marks : " << endl;
    cin >> sub3;

    total = sub1 + sub2 + sub3;

    cout << " Total marks obtain are: " << total << endl;
    avg = total / 3;
    cout << " avg of all numbers is : " << avg << endl;

    return 0;
}