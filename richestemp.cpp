/*
    Q4. Richest Employee

Class Employee (id, name, salary). Read n employees into an array of objects and print the name of the one with the highest salary. (Salaries are distinct.)

Sample: Input:
        3 
        1 Ravi 5000 
        2 Sita 9000 
        3 Om 7000 
        
        Output:
        Sita
*/

#include <iostream>
#include <string>
using namespace std;

class Employee
{
    public:
    int id;
    string name;
    int salary;
    
    Employee()
    {
        id = 0;
        salary = 0;
    }
    
    Employee(int id, string name, int salary)
    {
        this->id = id;
        this->name = name;
        this->salary = salary;
    }
    
};

int main()
{
    int n;
    cin >> n;
    
    Employee e[n];
    
    for(int i=0; i<n; i++)
    {
        cin >> e[i].id >> e[i].name >> e[i].salary;
    }
    
    int best = 0;
    
    for(int i=0; i<n; i++)
    {
        if(e[best].salary < e[i].salary)
        {
            best = i;
        }
    }
    
    cout << e[best].name;
}