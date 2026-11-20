/*
    Q8. Linked List: Insert and Print

Create a class Node (data, Node *next) and a class LinkedList with insertAtEnd(int) and print(). Read n numbers, insert them, then print the list space-separated.

Sample: 4 / 1 2 3 4 → 1 2 3 4
*/

#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node *next;
    
    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};

class LinkedList {
    public:
    Node *head;
    LinkedList()
    {
        head = nullptr;
    }
    
    void insertAtEnd(int x)
    {
        Node *newNode = new Node(x);
        
        if(head == nullptr)
        {
            head = newNode;
        }
        else
        {
            Node *temp = head;
            while(temp->next != nullptr)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }
    
    void print()
    {
        Node *curr = head;
        while (curr != nullptr)
        {
            cout << curr->data << " ";
            curr = curr->next;
        }
    }
};

int main()
{
    int n;
    cin >> n;
    LinkedList list;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        list.insertAtEnd(x);
    }
    
    list.print();
}