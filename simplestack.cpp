#include <iostream>
using namespace std;
class Stack
{
    public:
    int *arr;
    int top;
    int capacity;
    Stack(int size)
    {
        capacity = size;
        arr = new int[capacity];
        top = -1;
    }

    ~Stack(){
        delete[] arr;
    }

    bool isEmpty(){
        return top == -1;
    }
    bool isfull() {
        return top == capacity - 1;
    }

    void push(int x)
    {
        if(isfull())
        {
            cout << "Overflow" << endl;
            return;
        }
        
        arr[++top] = x;
    }

    void pop()
    {
        if(isEmpty())
        {
            cout << "Underflow" << endl;
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
    Stack s(3);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    cout << s.peek() << endl;
    s.pop();
    cout << s.peek() << endl;
    s.pop();
    s.pop();
    s.pop();
}