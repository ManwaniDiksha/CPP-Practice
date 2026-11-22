//Size of a Binary Tree is number of nodes in the tree.

#include <iostream>
#include <queue>
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

vector<int> LevelOrder(Node *root)
{
    queue<Node *> q;
    q.push(root);

    vector<int> ans;
    Node *temp;
    if(root == nullptr)
    {
        return ans;
    }

    while(!q.empty())
    {
        temp = q.front();
        q.pop();
        ans.push_back(temp->data);

        if(temp->left)
        {
            q.push(temp->left);
        }
        if(temp->right)
        {
            q.push(temp->right);
        }
    }

    return ans;
}

int main()
{
    int x;
    cin >> x;
    int first, second;
    queue <Node *> q;
    Node *root = new Node(x);
    q.push(root);

    while (!q.empty())
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


    vector<int> result = LevelOrder(root);
    cout << "Size of tree is: " << result.size();
}