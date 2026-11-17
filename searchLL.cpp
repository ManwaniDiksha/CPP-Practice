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


bool search(Node *head, int key)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        if(temp->data == key)
        {
            return true;
        }
        
        temp = temp->next;
        
    }
    return false;
}

int main()
{
    int N, key;
    cin >> N;

    Node *head = nullptr;
    Node *tail = nullptr;

    for(int i=0; i<N; i++)
    {
        int value;
        cin >> value;

        Node *newNode = new Node(value);
        if(head == nullptr)
        {
            head = newNode;
            tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
    }

    cout << "Enter number to be searched: ";
    cin >> key;

    if(search(head, key))
    {
        cout << "Found" << endl;
    }
    else{
        cout << "Not found" << endl;
    }

    return 0;
}