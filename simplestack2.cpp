/*
    Q7. Simple Stack (Array-based)

Create a class Stack with a fixed array of size 100, and push, pop, and top. Process the queries:

1 x: push x
2: pop (if empty, do nothing)
3: print the top, or Empty if the stack is empty

Sample:

5
1 10
1 20
3
2
3

Output:

20
10
*/

#include <iostream>
using namespace std;

class Stack {
    public:
    int *arr;
    int capacity;
    int top;
    
    Stack(int size)
    {
        capacity = size;
        arr = new int[capacity];
        top = -1;
    }
    
    ~Stack()
    {
        delete[] arr;
    }
    
    bool isfull()
    {
        return top == capacity - 1;
    }
    
    bool isEmpty()
    {
        return top == -1;
    }
    
    void push(int x)
    {
        if(isfull())
        {
            cout << "Stack overflow" << endl;
            return;
        }
        
        arr[++top] = x;
    }
    
    void pop()
    {
        if(isEmpty())
        {
            cout << "Stack underflow" << endl;
            return;
        }
        
        top--;
    }
    
    int peek()
    {
        if(isEmpty())
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return arr[top];
    }
};

int main()
{
    int nofop;
    cin >> nofop;
    Stack s(100);
    for(int i=0; i<nofop; i++)
    {
        int choice;
        cin >> choice;
        int x;
        switch(choice)
        {
            case 1:
                    cin >> x;
                    s.push(x);
                    break;
            case 2: s.pop();
                    break;
            case 3: cout << s.peek() << endl;
                    break;
        }
    }
}