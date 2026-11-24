#include <vector>
#include <iostream>
#include <climits>
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
    else {
        root->right = insert(root->right, target);
    }

    return root;
}

int rangesum(Node *root, int low, int high)
{
    if(root == nullptr)
    {
        return 0;
    }

    if(root->data < low)
    {
        return rangesum(root->right, low, high);
    }
    if(root->data > high)
    {
        return rangesum(root->left, low, high);
    }

    return root->data + rangesum(root->left, low, high) + rangesum(root->right, low, high);
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

    int low, high;
    cin >> low >> high;
    cout << rangesum(root, low, high) << endl;
    
}