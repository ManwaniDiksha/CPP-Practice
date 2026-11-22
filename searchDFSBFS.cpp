#include <queue>
#include <iostream>
#include <vector>
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

bool searchDFS(Node *root, int key)
{
    if(root == nullptr)
    {
        return false;
    }
    if(root->data == key)
    {
        return true;
    }

    return searchDFS(root->left, key) || searchDFS(root->right, key);
}

bool searchBFS(Node *root, int key)
{
    if(root == nullptr)
    {
        return false;
    }

    queue<Node *> q;
    q.push(root);

    Node *temp;
    while (!q.empty())
    {
        temp = q.front();
        q.pop();
        if(temp->data == key)
        {
            return true;
        }

        if(temp->left)
        {
            q.push(temp->left);
        }
        if(temp->right)
        {
            q.push(temp->right);
        }
    }

    return false;
    
}

int main()
{
    cout << "Enter root node: ";
    Node *root;
    root = BinaryTree();

    int val;
    cout << "Enter value to search: ";
    cin >> val;
    // cout << searchDFS(root, val) << endl;
    // cout << searchBFS(root, val);

    if(searchDFS(root, val))
    {
        cout << "Found" << endl;
    }
    else{
        cout << "Not found" << endl;
    }

    if(searchBFS(root, val))
    {
        cout << "Found" << endl;
    }
    else{
        cout << "Not found" << endl;
    }
}