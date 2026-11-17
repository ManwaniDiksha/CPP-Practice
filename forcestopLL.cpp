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

void printlist(Node *head)
{
    Node *curr = head;
    while (curr != nullptr)
    {
        cout << curr->data << " -> ";
        curr = curr->next;
    }   
    cout << "null" << endl;
}

int main()
{
    // Node *head = nullptr;
    // Node *tail = nullptr;
    // int value;
    // do {
    //     cin >> value;
    //     Node *newNode = new Node(value);

    //     if(head == nullptr)
    //     {
    //         head = newNode;
    //         tail = newNode;
    //     }
    //     else
    //     {
    //         tail->next = newNode;
    //         tail = newNode;
    //     }
    // } while (value != -1);

    // Node *head = nullptr;
    // Node *tail = nullptr;
    // int value;
    // cin >> value;
    // while (value != -1)
    // {
    //     Node *newNode = new Node(value);

    //     if(head == nullptr)
    //     {
    //         head = newNode;
    //         tail = newNode;
    //     }
    //     else{
    //         tail->next = newNode;
    //         tail = newNode;
    //     }
    //     cin >> value;
    // }

    Node *head = nullptr;
    Node *tail = nullptr;
    int value;
    do {
        cin >> value;
        if(value == -1 )
        {
            break;
        }
        Node *newNode = new Node(value);

        if(head == nullptr)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    } while (true);
    printlist(head);
}