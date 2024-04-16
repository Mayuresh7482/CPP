#include <iostream>

using namespace std;

int main()
{

    int match = 21;

    while (match > 0)
    {
        cout << "There are " << match << " left " << endl;
        cout << "Enter the number between 1,2,3,4 of matchstick " << endl;
        int picked;
        cin >> picked;
        if (picked < 1 || picked > 4)
        {
            cout << "invalid input " << endl;
            continue;
        }
        match -= picked;
        if (match == 1)
        {
            cout << "You picked " << picked << " match. Now there is only 1 matchstick left." << endl;
            cout << "Computer picks the last matchstick and wins." << endl;
            break;
        }

        cout << "You picked " << picked << " match. Now there are " << match << " match left." << endl;
        int computerpicked = match % (picked + 1);
        match -= computerpicked;
        cout << "Computer pickeds " << computerpicked << " match." << endl;
        if (match == 1)
        {
            cout << "Computer pickeded " << computerpicked << " match. Now there is only 1 matchstick left." << endl;
            cout << "You are forced to picked the last matchstick and lose." << endl;
        }
    }

    return 0;
}