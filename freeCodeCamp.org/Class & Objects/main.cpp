#include <iostream>
using namespace std;

class Book
{
public:
    string title;
    string author;
    int pages;

    // Constructor
    Book()
    {
        cout << "Creating Objects" << endl;
    }
};

int main()
{

    Book book1;

    book1.title = "Harry Potter";
    book1.author = "JK Rowling";
    book1.pages = 500;

    cout << "Title : " << book1.title << endl;
    cout << "Author : " << book1.author << endl;
    cout << "Pages : " << book1.pages << endl;

    return 0;
}