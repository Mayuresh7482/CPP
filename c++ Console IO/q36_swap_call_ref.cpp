#include <iostream>
using namespace std;

void swap(int &n1, int &n2)
{
    int swap = n1;
    n1 = n2;
    n2 = swap;
    cout << "After swapping the number is :" << n1 << " " << n2 << endl;
}
int main()
{
    int n1, n2;
    cout << "Enter the number :" << endl;
    cin >> n1 >> n2;
    cout << "Before swapping the number is :" << n1 << " " << n2 << endl;
    swap(n1, n2);
    return 0;
}