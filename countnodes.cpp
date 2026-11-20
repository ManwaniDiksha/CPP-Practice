/*
    Q10. Count Nodes and Find the Max

Extend your Q8 LinkedList with countNodes() and findMax(). Print both on separate lines.

Sample: 5 / 3 9 2 7 4
Output:

5
9
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
    
    void countNodes()
    {
        int count = 0;
         Node *curr = head;
        while (curr != nullptr)
        {
            count++;
            curr = curr->next;
        }
        cout << count << endl;
    }
    
    void findMax()
    {
        int max = head->data;
        
        Node *temp = head;
        while(temp != nullptr)
        {
            if(temp->data > max)
            {
                max = temp->data;
            }
            temp = temp->next;
        }
        
        cout << max << endl;
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
    
    // list.print();
    list.countNodes();
    list.findMax();
}