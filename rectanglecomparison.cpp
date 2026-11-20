/*
    Q2. Rectangle Comparison

Create a class Rectangle (length, breadth) with area() and perimeter(). Read two rectangles and print which has the larger area (First, Second, or Equal).

Input: l1 b1 l2 b2
Sample: 4 5 3 6 → First (20 vs 18)

Hint: add a member function that takes another Rectangle as a parameter.
*/

#include <iostream>
#include <string>

using namespace std;

class Rectangle
{
    public:
    int l, b; 
    Rectangle(int length, int breadth)
    {
        l = length;
        b = breadth;
    }
    
    int area()
    {
        return l*b;
    }
    
    int perimeter()
    {
        int p = 2*l + 2*b;
        return p;
    }
    
    string larger(Rectangle *other)
    {
        if(this->area() > other->area())
        {
            return "First";
        }
        else if (this->area() < other->area())
        {
            return "Second";
        }
        else
        {
            return "Equal";
        }
    }
    
};

int main()
{
    
    int l1, b1, l2, b2;
    cin >> l1 >> b1 >> l2 >> b2;
    
    Rectangle r1(l1, b1);
    Rectangle r2(l2, b2);
    
    cout << r1.larger(&r2) << endl;
    
}