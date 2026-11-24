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

int minimum(Node *root)
{
    while (root->left != nullptr)
    {
        root = root->left;
    }
    
    return root->data;
}

Node *insert(Node *root, int target)
{
    if(root == nullptr)
    {
        Node *temp = new Node(target);
        return temp;
    }

    if(target < root->data)
    {
        root->left = insert(root->left, target);
    }
    else {
        root->right = insert(root->right, target);
    }

    return root;
}

void inorder(Node *root)
{
    if(root == nullptr)
    {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

Node *deleteNode(Node *root, int key)
{
    if(root == nullptr)
    {
        return nullptr;
    }

    if(key < root->data)
    {
        root->left = deleteNode(root->left, key);
    }
    else if(key > root->data)
    {
        root->right = deleteNode(root->right, key);
    }
    else{

        if(root->left == nullptr)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }

        if(root->right == nullptr)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }

        int successor = minimum(root->right);
        root->data = successor;
        root->right = deleteNode(root->right, successor);
    }

    return root;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    Node *root = nullptr;
    for(int i=0; i<n; i++)
    {
        root = insert(root, arr[i]);
    }

    inorder(root);
    cout << endl;
    int key;
    cout << "Enter element to delete: ";
    cin >> key;
    root = deleteNode(root, key);
    inorder(root);

}