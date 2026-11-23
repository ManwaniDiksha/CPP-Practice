#include <vector>
#include <queue>
#include <iostream>
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
    else
    {
        root->right = insert(root->right, target);
    }

    return root;
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
        vector<int> v1;
        for(int i=0; i<levelsize; i++)
        {
            temp = q.front();
            q.pop();
            v1.push_back(temp->data);

            if(temp->left)
            {
                q.push(temp->left);
            }

            if(temp->right)
            {
                q.push(temp->right);
            }
        }

        v.push_back(v1);
    }

    return v;
}

int main()
{
    int N;
    cin >> N;
    int arr[N];

    for(int i=0; i<N; i++)
    {
        cin >> arr[i];
    }

    Node *root = nullptr;
    for(int i=0; i<N; i++)
    {
        root = insert(root, arr[i]);
    }

    for(vector<int> row : levelbylevel(root))
    {
        for(int x : row)
        {
            cout << x << " ";
        }
        cout << endl;
    }
}