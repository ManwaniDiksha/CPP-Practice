/*
    Q5. Object Counter

Create a class Item with a static data member that counts how many objects have been created. Read n, create n objects in a loop, then print the count.

Sample: 5 → 5

Hint: static is a BUILT-IN keyword. The counter’s name is yours. Remember a static member needs a definition outside the class.
*/

#include <iostream>
using namespace std;

class Item {
    public:
    static int count;
    
    Item()
    {
        count++;
    }
    
    static int print();
    
};

int Item::count = 0;
int Item::print()
{
    return count;
}

int main()
{
    int n;
    cin >> n;
    
    for(int i=0; i<n; i++)
    {
        Item i1;
    }
    
    cout << Item::count << endl;
    cout << Item::print() << endl;
}
