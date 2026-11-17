#include <iostream>
using namespace std;

class Stack
{
    public:
    int *arr, top, capacity;

    Stack(int size)
    {
        capacity = size;
        arr = new int[capacity];
        top = -1;
    }
    ~Stack(){
        delete[] arr;
    }

    bool isEmpty()
    {
        return top == -1;
    }
    bool isfull()
    {
        return top == capacity - 1;
    }

    void push(int x){
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
    
    int peek(){
        if(isEmpty())
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return arr[top];
    }

    void display()
    {
        if(isEmpty())
                    {
                        cout << "Stack is empty" << endl;
                        return;
                    }
                    
                    for(int i=top; i>=0; i--)
                    {
                        cout << arr[i] << endl;
                    }
    }

};

int main()
{
    int N;
    cin >> N;
    Stack s(N);
    int choice;
    do{
        cout << "1. Push \n2. Pop \n3. Peek \n4. Exit \n5. Display" << endl;
        
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
            case 4: cout << "Exiting" << endl;
                    break;
            case 5: s.display();
                    break;
            default: cout << "Invalid Choice" << endl;
                    break;
        }
    } while (choice != 4);
    return 0;
}