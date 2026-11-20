/*
    Q9. Time Addition

Class Time (hours, minutes). Write a member function add(Time t) that returns the sum, with minutes normalized below 60.

Input: h1 m1 h2 m2
Sample: 1 45 2 30 → 4 15
*/

#include <iostream>
using namespace std;

class Time {
    public:
    int hours, minutes;
    
    Time(int hours, int minutes)
    {
        this->hours = hours;
        this->minutes = minutes;
    }
    
    Time add(Time t)
    {
        int totalMinutes = this->minutes + t.minutes;
        int carry = totalMinutes / 60;
        int newMinutes = totalMinutes % 60;
        int newHours = this->hours + t.hours + carry;
        
        return Time(newHours, newMinutes);
    }
};

int main()
{
    int h1, m1, h2, m2;
    cin >> h1 >> m1 >> h2 >> m2;
    
    Time t1(h1, m1);
    Time t2(h2, m2);
    Time result = t1.add(t2);
    cout << result.hours << " " << result.minutes << endl;
}