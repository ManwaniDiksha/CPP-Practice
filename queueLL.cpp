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

class Queue
{
    public:
    Node *front, *rear;

    Queue()
    {
        front = nullptr;
        rear = nullptr;
    }

    bool isEmpty()
    {
        return front == nullptr;
    }

    void enqueue(int x)
    {
        Node *newNode = new Node(x);
        if(front == nullptr)
        {
            front = rear = newNode;
            return;
        }
        rear->next = newNode;
        rear = newNode; 
    }

    void dequeue()
    {
        if(isEmpty())
        {
            cout << "Underflow" << endl;
            return;
        }

        Node *temp = front;
        front = front->next;
        if(front == nullptr)
        {
            rear = nullptr;
        }

        delete temp;
    }

    int getfront()
    {
        if(isEmpty())
        {
            cout << "Queue is empty" << endl;
            return -1;
        }

        return front->data;
    }

    void display()
    {
        if(isEmpty())
        {
            cout << "Queue is empty" << endl;
            return;
        }
        Node *curr = front;
        while (curr != nullptr)
        {
            cout << curr->data << " ";
            curr = curr->next;
        }
        cout << "null" << endl;
    }
};

int main()
{
    int choice;
    Queue q;

    do{
        cout << "1. Enqueue\n2. Dequeue\n3. Get Front\n4. Display\n5. Exit" << endl;

        cin >> choice;

        switch(choice)
        {
            case 1: int x;
                    cin >> x;
                    q.enqueue(x);
                    break;
            case 2: q.dequeue();
                    break;
            case 3: cout << q.getfront() << endl;
                    break;
            case 4: q.display();
                    break;
            case 5: break;
            default: cout << "Invalid choice" << endl;
        }
    } while (choice != 5);
    return 0;
}