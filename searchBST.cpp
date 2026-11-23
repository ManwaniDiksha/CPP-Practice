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
    else{
        root->right = insert(root->right, target);
    }

    return root;
}

bool search(Node *root, int key)
{
    if(root == nullptr)
    {
        return false;
    }

    if(root->data == key)
    {
        return true;
    }

    if(key < root->data)
    {
        return search(root->left, key);
    }
    else
    {
        return search(root->right, key);
    }

}

int main()
{
    int N;
    cin >> N;
    int arr[N];

    for(int i=0; i<N; i++)
    {
        cin >> arr[i];
    }

    Node *root = nullptr;
    for(int i=0; i<N; i++)
    {
        root = insert(root, arr[i]);
    }

    int key;
    cin >> key;
    if(search(root, key))
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }
}