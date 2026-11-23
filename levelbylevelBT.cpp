#include <iostream>
#include <vector>
#include <queue>
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

Node *BinaryTree()
{
    int x;
    cin >> x;
    if(x == -1)
    {
        return nullptr;
    }

    Node *temp = new Node(x);

    cout << "Enter left child of " << temp->data << ": ";
    temp->left = BinaryTree();
    cout << "Enter right child of " << temp->data << ": ";
    temp->right = BinaryTree();

    return temp;
}

vector<vector<int>> levelbylevel(Node *root)
{
    vector<vector<int>> v;
    if(root == nullptr)
    {
        return v;
    }

    queue<Node *> q;
    q.push(root);

    Node *temp;

    while(!q.empty())
    {
        int levelsize = q.size();
        vector<int> level;
        for(int i=0; i<levelsize; i++)
        {
            temp = q.front();
            q.pop();
            level.push_back(temp->data);

            if(temp->left)
            {
                q.push(temp->left);
            }
            if(temp->right)
            {
                q.push(temp->right);
            }

        }
        v.push_back(level);
    }
    return v;
}

int main()
{
    cout << "Enter root node: ";
    Node *root;
    root = BinaryTree();

    for(vector<int> row : levelbylevel(root))
    {
        for(int x : row)
        {
            cout << x << " ";
        }
        cout << endl;
    }
}