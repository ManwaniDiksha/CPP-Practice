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
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    printlist(head);
}