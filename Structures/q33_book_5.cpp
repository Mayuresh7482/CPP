#include <iostream>
#include <string>
using namespace std;

typedef struct
{
    int bookId;
    string title;
    double price;
} Book;

void displayBook(const Book &book)
{
    cout << "Book ID: " << book.bookId << endl;
    cout << "Title: " << book.title << endl;
    cout << "Price: " << book.price << endl;
    cout << "-------------------------" << endl;
}

int main()
{
    Book books[5];
    for (int i = 0; i < 5; i++)
    {
        books[i].bookId = i + 1;
        cout << "Enter title: ";
        cin >> books[i].title;
        cout << "Enter price: ";
        cin >> books[i].price;
    }
    for (int i = 0; i < 5; i++)
    {
        displayBook(books[i]);
    }
    return 0;
}