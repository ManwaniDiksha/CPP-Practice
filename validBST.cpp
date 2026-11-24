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

bool isValid(Node *root, long long low, long long high)
{
    if(root == nullptr)
    {
        return true;
    }

    if(root->data <= low || root->data >= high)
    {
        return false;
    }

    return isValid(root->left, low, root->data) && isValid(root->right, root->data, high);
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

    if(isValid(root, LLONG_MIN, LLONG_MAX))
    {
        cout << "Valid BST" << endl;
    }
    else{
        cout << "Invalid BST" << endl;
    }
}