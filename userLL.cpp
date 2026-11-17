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
    while(curr != nullptr)
    {
        cout << curr->data << " -> ";
        curr = curr->next;
    }
    cout << "null" << endl;
}

int main()
{
    int N;
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

    printlist(head);
}