#include <queue>
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

int countNodes(Node *root)
{
    if(root == nullptr)
    {
        return 0;
    }

    return 1 + countNodes(root->left) + countNodes(root->right);
}

int main()
{
    int x;
    cin >> x;
    int first, second;
    queue<Node *> q;

    Node *root = new Node(x);
    q.push(root);

    while(!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        cout << "Enter left child of " << temp->data << ": ";
        cin >> first;

        if(first != -1)
        {
            temp->left = new Node(first);
            q.push(temp->left);
        }


        cout << "Enter right child of " << temp->data << ": ";
        cin >> second;

        if(second != -1)
        {
            temp->right = new Node(second);
            q.push(temp->right);
        }
    }

    cout << "Size of the tree: " << countNodes(root) << endl;
}