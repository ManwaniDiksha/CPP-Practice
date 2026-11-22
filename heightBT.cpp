#include <iostream>
#include <queue>
#include <algorithm>
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

int height(Node *root)
{
    if(root == nullptr)
    {
        return 0;
    }

    return 1 + max(height(root->left), height(root->right));
}

int main()
{
    int x, first, second;
    cin >> x;
    
    queue<Node *> q;
    Node *root = new Node(x);
    q.push(root);

    while(!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        cout << "Enter the left child of " << temp->data << ": ";
        cin >> first;
        if(first != -1)
        {
            temp->left = new Node(first);
            q.push(temp->left);
        }

        cout << "Enter the right child of " << temp->data << ": ";
        cin >> second;
        if(second != -1)
        {
            temp->right = new Node(second);
            q.push(temp->right);
        }
    }

    cout << "Height of tree: " << height(root) << endl;

}