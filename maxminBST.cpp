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

int minimum(Node *root)
{
    while(root->left != nullptr)
    {
        root = root->left;
    }

    return root->data;
}

int maximum(Node *root)
{
    while(root->right != nullptr)
    {
        root = root->right;
    }

    return root->data;
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

    cout << "Maximum: " << maximum(root) << endl;
    cout << "Minimum: " << minimum(root) << endl;
}