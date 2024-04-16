/* 38.Write a single function “Multiply” to multiply two or three or four integers passed depending on call. Use default value arguments.
 */

#include <iostream>
using namespace std;

int Mutliply(int a, int b, int c = 0, int d = 0)
{
    int result = a * b;
    if (c != 0)
    {
        result = result * c;
    }
    if (d != 0)
    {
        result = result * d;
    }
    return result;
}

int main()
{
    int a, b, c, d, n;
    cout << "Enter the a and b value : ";
    cin >> a >> b;
    cout<<"Enter the value of c(optional : ";
    cin>>c;
    cout<<"Enter the value of d(optional : ";
    cin>>d;


    cout<<"multipliaction of a and b : "<<Mutliply(a, b)<<endl;
    cout<<"multipliaction of a and b and c : "<<Mutliply(a, b, c)<<endl;
    cout<<"multipliaction of a and b and c and d : "<<Mutliply(a, b, c, d)<<endl;

    return 0;
}