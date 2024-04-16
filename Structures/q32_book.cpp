#include <iostream>
using namespace std;
typedef struct
{
    int bookId;
    string title;
    double price;
} book;

void display(const book &b)
{
    cout << "Book Id : " << b.bookId << endl;
    cout << "Title : " << b.title << endl;
    cout << "Price : " << b.price << endl;
}
int main()
{
    int n;
    cout << "Enter the number of books : " << endl;
    cin >> n;
    book b[n];
    for (int i = 0; i < n; i++)
    {
        b[i].bookId = i + 1;
        cout << "Enter the title of book : " << endl;
        cin >> b[i].title;
        cout << "Enter the price of book : " << endl;
        cin >> b[i].price;
    }

    for (int i = 0; i < n; i++)
    {
        /* code */
        display(b[i]);
    }

    return 0;
}