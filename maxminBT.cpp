#include <iostream>
#include <algorithm>
#include <climits>
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

int maximum(Node *root)
{
    if(root == nullptr)
    {
        return INT_MIN;
    }
    return max(root->data, max(maximum(root->left) , maximum(root->right)));
}

int minimum(Node *root)
{
    if(root == nullptr)
    {
        return INT_MAX;
    }

    return min(root->data, min(minimum(root->left), minimum(root->right)));
}

int main()
{
    cout << "Enter root node: ";
    Node *root;
    root = BinaryTree();

    cout << "Maximum: " << maximum(root) << endl;
    cout << "Minimum: " << minimum(root) << endl;
}