#include <iostream>

using namespace std;
void getDay(int &day, int &month, int &year)
{

    cout << "Enter day : " << endl;
    cin >> day;
    cout << "Enter month : " << endl;
    cin >> month;
    cout << "Enter year : " << endl;
    cin >> year;
}
int main()
{
    int day, month, year;
    getDay(day, month, year);
    cout << "Date is :" << day << "/" << month << "/" << year % 100 << endl;
    return 0;
}