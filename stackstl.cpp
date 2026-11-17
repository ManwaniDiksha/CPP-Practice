#include <iostream>
#include <stack>
using namespace std;

void display(stack<int> temp)
{
    if(temp.empty())
    {
        cout << "Stack is empty" << endl;
        return;
    }
    while(!temp.empty())
    {
        cout << temp.top() << endl;
        temp.pop();
    }
}

int main()
{
    stack<int> s;
    int choice;

    do{
        cout << "1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit" << endl;

        cin >> choice;

        switch(choice)
        {
            case 1: int x;
                    cin >> x;
                    s.push(x);
                    break;
            case 2: if(s.empty())
                    {
                        cout << "Stack is empty" << endl;
                    }
                    else{
                        s.pop();
                    }
                    break;
            case 3: if(s.empty())
                    {
                        cout << "Stack is empty" << endl;
                    }
                    else{
                        cout << s.top() << endl;
                    }
                    break;
            case 4: display(s);
                    break;
            case 5: break;
            default: cout << "Invalid choice" << endl;
        }
    } while (choice != 5);
}