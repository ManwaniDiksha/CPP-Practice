/*
Q3. Bank Account

Create BankAccount with a balance. Support these operations:

D x: deposit x
W x: withdraw x. If the balance is insufficient, print Insufficient and don’t change the balance.
B: print the balance

Input: initial balance, q, then q operations
Sample:

100
4
D 50
W 200
W 120
B

Output:

Insufficient
30
*/

#include <iostream>
using namespace std;

class BankAccount 
{
    public:
    int bal;
    BankAccount(int bal)
    {
        this->bal = bal;
    }
    
    void deposit(int x)
    {
        bal = bal + x; 
    }
    
    void withdraw(int x)
    {
        if(x > bal)
        {
            cout << "Insufficient" << endl;
        }
        else
        {
            bal = bal - x;
        }
    }
    
    void print()
    {
        cout << bal << endl;
    }
};

int main()
{
    int balance;
    cin >> balance;
    
    int q;
    cin >> q;
    
    
    BankAccount b(balance);
    
    for(int i=0; i<q; i++)
    {
        char choice;
        int x;
        cin >> choice;
        switch(choice)
        {
            case 'D' : 
                        cin >> x;
                        b.deposit(x);
                        break;
            case 'W' : 
                        cin >> x;
                        b.withdraw(x);
                        break;
            case 'B' : b.print();
                        break;
        }
    }
}