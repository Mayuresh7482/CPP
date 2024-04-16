#include <iostream>
#include <cctype>
using namespace std;

int main()
{

    char ch;
    cout << "Enter the charcter : " << endl;
    cin >> ch;

    if (isalpha(ch))
    {
        if (islower(ch))
        {
            ch = toupper(ch);
        }
        else
        {
            ch = tolower(ch);
        }
        cout << "The opp case of " << ch << " is " << ch << ".\n";
    }
    else
    {
        cout << "Error the char entered is not an aplhabet \n";
    }
    return 0;
}