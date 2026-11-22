#include <iostream>
using namespace std;
class Node {
    public:
    int data;
    Node *left;
    Node *right;

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
    cout << "Enter the left child of " << x << ": ";
    temp->left = BinaryTree();
    cout << "Enter the right child of " << x << ": ";
    temp->right = BinaryTree();

    return temp;
}

void Preorder(Node *root)
{
    if(root == nullptr)
    {
        return;
    }

    cout << root->data << " ";
    Preorder(root->left);
    Preorder(root->right);
    
}

void Inorder(Node *root)
{
    if(root == nullptr)
    {
        return;
    }
    Inorder(root->left);
    cout << root->data << " ";
    Inorder(root->right);
}

void Postorder(Node *root)
{
    if(root == nullptr)
    {
        return;
    }
    Postorder(root->left);
    Postorder(root->right);
    cout << root->data << " ";
}

int main()
{
    cout << "Enter the root node: ";
    Node *root;
    root = BinaryTree();

    cout << "Preorder: ";
    Preorder(root);
    cout << endl;
    cout << "Inorder: ";
    Inorder(root);
    cout << endl;
    cout << "Postorder: ";
    Postorder(root);

}