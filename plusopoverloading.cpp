/*
    Q6. Add Two Points (Operator Overloading)

Class Point (x, y). Overload + so that p1 + p2 returns a new Point. Print the result as (x, y).

Input: x1 y1 x2 y2
Sample: 1 2 3 4 → (4, 6)

Note: operator is BUILT-IN, and operator+ is the fixed name C++ gives to the + overload. Point is yours.
*/

#include <iostream>
using namespace std;

class Point {
    public:
    int x, y;
    
    Point(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    
    Point operator+(Point other)
    {
        return Point(this->x + other.x , this->y + other.y);
    }
    
    void print()
    {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    
    Point p1(x1, y1);
    Point p2(x2, y2);
    
    Point p3 = p1 + p2;
    p3.print();
}