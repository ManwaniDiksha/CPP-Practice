/* Difference between createBT.cpp & buildBT.cpp is that

createBT.cpp is Recursive (preorder-style input)

BinaryTree() reads a value, creates a node, then calls itself to build the entire left subtree, then the entire right subtree. It goes deep first.

And buildBT.cpp is Queue (level-by-level input)

This one builds the tree row by row. The queue holds nodes that exist but haven't had their children filled in yet. Each loop pass takes the front node, asks for its left and right child, and pushes any new children to the back of the queue.
*/
#include <iostream>
using namespace std;
class Node {
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

Node *BinaryTree()
{
    int x;
    cin >> x;
    if(x == -1)
    {
        return nullptr;
    }
    Node *temp = new Node(x);
    cout << "Enter the left child of " << x << ": ";
    temp->left = BinaryTree();
    cout << "Enter the right child of " << x << ": ";
    temp->right = BinaryTree();

    return temp;
}

int main()
{
    cout << "Enter the root node: ";
    Node *root;
    root = BinaryTree();

}