/*
    Bonus Q11. Method Chaining with this

Class Counter with increment() and decrement() that both return *this (by reference), so you can write c.increment().increment().decrement(). Print the final value.

Input: a string like ++-+, where + is increment and - is decrement. Start from 0.
Sample: ++-+ → 2
*/

#include <iostream>
using namespace std;

class Counter
{
    public:
    int value;
    
    Counter()
    {
        value = 0;
    }
    
    Counter &increment()
    {
        value++;
        return *this;
    }
    
    Counter &decrement()
    {
        value--;
        return *this;
    }
};


int main()
{
    string s;
    cin >> s;
    Counter c;
    
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == '+')
        {
            c.increment();
        }
        else
        {
            c.decrement();
        }
    }
    
    cout << c.value << endl;
}