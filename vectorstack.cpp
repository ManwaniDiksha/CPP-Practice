#include <iostream>
#include <vector>
using namespace std;

class Stack
{
    public:
    vector<int> data;

    bool isEmpty()
    {
        return data.empty();
    }

    void push(int x)
    {
        data.push_back(x);
    }

    void pop()
    {
        if(isEmpty())
        {
            cout << "Stack is empty" << endl;
            return;
        }
        data.pop_back();
    }

    int peek()
    {
        if(isEmpty())
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return data.back();
    }

    void display()
    {
        if(isEmpty())
        {
            cout << "Stack is empty" << endl;
            return;
        }

        for(int i = (int)data.size()-1; i >= 0; i--)
        {
            cout << data[i] << endl;
        }
    }
};

int main()
{
    int choice;
    Stack s;

    do
    {
        cout << "1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit" << endl;
        cin >> choice;

        switch(choice)
        {
            case 1: int x;
                    cin >> x;
                    s.push(x);
                    break;
            case 2: s.pop();
                    break;
            case 3: cout << s.peek() << endl;
                    break;
            case 4: s.display();
                    break;
            case 5: break;
            default: cout << "Invalid choice" << endl;
        }
    } while(choice != 5);
}