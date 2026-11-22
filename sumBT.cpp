#include <iostream>
using namespace std;
class Node
{
    public: 
    int data;
    Node *left, *right;

    Node(int value)
    {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

Node *BinaryTree()
{
    int x;
    cin >> x;
    if(x == -1)
    {
        return nullptr;
    }

    Node *temp = new Node(x);
    cout << "Enter left child of " << temp->data << ": ";
    temp->left = BinaryTree();
    cout << "Enter right child of " << temp->data << ": ";
    temp->right = BinaryTree();

    return temp;
}

int sum(Node *root)
{
    if(root == nullptr)
    {
        return 0;
    }
    return root->data + sum(root->left) + sum(root->right);
}

int main()
{
    cout << "Enter root node: ";
    Node *root;
    root = BinaryTree();

    cout << "Sum of all nodes: " << sum(root);
}