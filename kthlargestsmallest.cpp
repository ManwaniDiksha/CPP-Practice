#include <vector>
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
    else {
        root->right = insert(root->right, target);
    }

    return root;
}

void inorder(Node *root, vector<int> &v)
{
    if(root == nullptr)
    {
        return;
    }
    inorder(root->left, v);
    v.push_back(root->data);
    inorder(root->right, v);
}
int small(Node *root, int k)
{
    vector<int> v;
    inorder(root, v);
    return v[k - 1];
}

int large(Node *root, int k)
{
    vector<int> v;
    inorder(root, v);
    return v[v.size() - k];
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

    int k;
    cin >> k;

    cout << "Kth smallest: " << small(root, k) << endl;
    cout << "Kth largest: " << large(root, k) << endl;
}