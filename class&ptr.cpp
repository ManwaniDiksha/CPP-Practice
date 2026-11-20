/*
    Extend your fixed Book class:

Add a member function void print() defined outside the class using ::.
Add a member function bool isCheaperThan(float amount) defined inside the class.
In main, create two books, create a Book * pointer pointing to the one with more pages, and use only the pointer (->) to call print() on it.
Also print whether that book is cheaper than 300.
*/

#include <iostream>
using namespace std;

class Book
{
    public:
    string title;
    int pages;
    float price;
    
    void print();
    
    bool isCheaperThan(float amount)
    {
        return price < amount;
    }
};

void Book::print()
{
    cout << title << " " << price << endl;
}

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
    
    Book *ptr;
    if(b1.pages > b2.pages)
    {
       ptr = &b1;
       ptr->print();
       if(ptr->isCheaperThan(300.00))
       {
           cout << "Cheaper than 300";
       }
    }
    else
    {
       ptr = &b2;
       ptr->print();
       if(ptr->isCheaperThan(300.00))
       {
           cout << "Cheaper than 300";
       }
    }
    
    
}