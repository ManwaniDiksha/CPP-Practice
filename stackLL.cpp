#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};

class Stack
{
    public:
    Node *top;
    Stack()
    {
        top = nullptr;
    }

    bool isEmpty()
    {
        return top == nullptr;
    }

    void push(int x)
    {
        Node *newNode = new Node(x);
        newNode->next = top;
        top = newNode;
    }

    void pop()
    {
        if(isEmpty())
        {
            cout << "Stack Underflow" << endl;
            return;
        }
        Node *temp = top;
        top = top->next;
        delete temp;
    }
    int peek(){
        if(isEmpty())
        {
            cout << "Stack Underflow" << endl;
            return -1;
        }
        return top->data;
    }
    void display()
    {
        if(isEmpty())
        {
            cout << "Stack Underflow" << endl;
            return;
        }
        Node *curr = top;
        while (curr != nullptr)
        {
            cout << curr->data << " -> ";
            curr = curr->next;
        }
        cout << "null" << endl;
    }
};

int main()
{
    int choice;
    Stack s;

    do{
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
    } while (choice != 5);
    return 0;
}