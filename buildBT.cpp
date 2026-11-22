/* Difference between createBT.cpp & buildBT.cpp is that

createBT.cpp is Recursive (preorder-style input)

BinaryTree() reads a value, creates a node, then calls itself to build the entire left subtree, then the entire right subtree. It goes deep first.

And buildBT.cpp is Queue (level-by-level input)

This one builds the tree row by row. The queue holds nodes that exist but haven't had their children filled in yet. Each loop pass takes the front node, asks for its left and right child, and pushes any new children to the back of the queue.
*/

#include <iostream>
#include <queue>

using namespace std;

class Node 
{
    public:
    int data;
    Node *left;
    Node *right;

    Node(int value)
    {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

int main()
{
    int x;
    cin >> x;
    int first, second;
    queue <Node *> q;
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
}