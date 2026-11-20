/* Write a class Book with public members title (string), pages (int), and price (float). In main:

Create two Book objects.
Fill them in with any values.
Print the title and price of the book that has more pages, using an if. */

#include <iostream>
using namespace std;

class Book
{
    public:
    string title;
    int pages;
    float price;
};

int main()
{
    Book b1;
    b1.title = "Harry Potter 1";
    b1.pages = 500;
    b1.price = 200.10;
    
    Book b2;
    b2.title = "Harry Potter 2";
    b2.pages = 600;
    b2.price = 200.20;
    
    if(b1.pages > b2.pages)
    {
        cout << b1.title << " " << b1.price << endl; 
    }
    else
    {
        cout << b2.title << " " << b2.price << endl;
    }
    
    
}