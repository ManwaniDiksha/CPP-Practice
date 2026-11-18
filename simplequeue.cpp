#include <iostream>
using namespace std;

class Queue
{
    public:
    int *arr;
    int front, rear, capacity;

    Queue(int size)
    {
        capacity = size;
        arr = new int[capacity];
        front = 0;
        rear = -1;
    }

    bool isEmpty()
    {
        return front > rear;
    }

    bool isfull()
    {
        return rear == capacity - 1;
    }

    void enqueue(int x)
    {
        if(isfull())
        {
            cout << "Overflow" << endl;
            return;
        }
        arr[++rear] = x;
    }

    void dequeue()
    {
        if(isEmpty())
        {
            cout << "Underflow" << endl;
            return;
        }
        front++;
    }

    int getfront()
    {
        if(isEmpty())
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[front];
    }

    void display()
    {
        if(isEmpty())
        {
            cout << "Queue is empty" << endl;
            return;
        }
        for(int i=front; i<=rear; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    int N;
    cin >> N;
    int choice;
    Queue q(N);

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