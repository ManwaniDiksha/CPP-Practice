/*
    Create a class Rectangle with private members width and height (both int).

A default constructor that makes it 1 by 1.
A parameterized constructor Rectangle(int w, int h) that uses a member initializer list.
int area().
void print() that prints width, height and area.
Rectangle *larger(Rectangle *other) that returns a pointer to whichever rectangle has the bigger area. On a tie, return the object it was called on (hint: that is where this comes in).

In main, create r1 (default), r2(4, 5), r3(3, 6) and r4(10, 2). Then:

Rectangle *big = r2.larger(&r3); followed by big->print();
Test the tie case: r2.larger(&r4). Before running, write down which one you expect it to return, and verify with big == &r2.
*/

#include <iostream>
using namespace std;

class Rectangle
{
    int width, height;
    
    public:
    
    Rectangle()
    {
        width = 1;
        height = 1;
    }
    
    Rectangle(int w, int h)
        : width(w), height(h) {}
        
    int area()
    {
        return width * height;
    }
    
    void print()
    {
        cout << "Width: " << width << " Height: " << height << " Area: " << area() << endl;
    }
    
    Rectangle *larger(Rectangle *other)
    {
        if(this->area() >= other->area() )
        {
            return this;
        }
        else
        {
            return other;
        }
    }
};

int main()
{
    Rectangle r1;
    Rectangle r2(4, 5);
    Rectangle r3(3, 6);
    Rectangle r4(10, 2);
    
    Rectangle *big = r2.larger(&r3);
    big->print();
    
    
    big = r2.larger(&r4);
    big->print();
    cout << (big == &r2);
}