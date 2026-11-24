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

Node *lca(Node *root, int p, int q)
{
    if(p < root->data && q < root->data)
    {
        return lca(root->left, p, q);
    }
    else if(p > root->data && q > root->data)
    {
        return lca(root->right, p, q);
    }
    else
    {
        return root;
    }
 
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

    int p, q;
    cin >> p >> q;
    Node *ans = lca(root, p, q);
    if(ans != nullptr)
    {
        cout << ans->data << endl;
    }
   
}