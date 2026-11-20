/*
    Q1. Student Report

Create a class Student with a name, roll number, and 3 marks. Read n students, then print each student’s name and average (2 decimal places).

Input: n, then n lines of name roll m1 m2 m3
Output: name average per line

Input:            Output:
2                 Aman 80.00
Aman 1 70 80 90   Riya 60.00
Riya 2 60 60 60
*/

#include <iostream>
#include <iomanip>
using namespace std;

class Student {
    public:
    
    string name;
    int roll;
    int m[3];
    Student(string name, int roll, int *m)
    {
        this->name = name;
        this->roll = roll;
        for(int i=0; i<3; i++)
        {
            this->m[i] = m[i];
        }
    }
    
    double average()
    {
        int sum = 0;
        for(int i=0; i<3; i++)
        {
            sum = sum + m[i];
        }
        
        return sum/3.0;
    }
    
    void print()
    {
        cout << fixed << setprecision(2);
        cout << name << " " << average() << endl;
    }
    
};

int main()
{
    string name;
    int roll, m[3];
    int nofstd;
    cin >> nofstd;
    
    for(int i=0; i<nofstd; i++)
    {
        cin >> name >> roll;
        for(int j=0; j<3; j++)
        {
            cin >> m[j];
        }
        Student s(name, roll, m);
        s.print();
    }
    
}