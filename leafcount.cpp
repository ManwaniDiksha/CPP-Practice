#include <iostream>
using namespace std;
class Node {
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

int leafCount(Node *root)
{
    if(root == nullptr)
    {
        return 0;
    }

    if(root->left == nullptr && root->right == nullptr)
    {
        return 1;
    }

    return (leafCount(root->left) + leafCount(root->right));
}

int main()
{
    cout << "Enter the root node: ";
    Node *root;
    root = BinaryTree();

    cout << "No. of leaf nodes: " << leafCount(root) << endl;
}