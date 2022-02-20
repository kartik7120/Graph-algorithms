#include <iostream>
#include <climits>
using namespace std;

int Maxsum = INT_MIN;

class node
{
public:
    int data;
    node *right;
    node *left;
    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int MaxPath(node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int l = MaxPath(root->left);
    int r = MaxPath(root->right);

    int nodeMax = max(max(root->data, root->data + l), max(root->data + l + r, root->data + r));
    Maxsum = max(Maxsum, nodeMax);
    return nodeMax;
}

int main()
{
    node *root = new node(10);
    root->left = new node(2);
    root->right = new node(10);
    root->left->left = new node(20);
    root->left->right = new node(1);
    root->right->right = new node(-25);
    root->right->right->left = new node(3);
    root->right->right->right = new node(4);
    MaxPath(root);
    cout << Maxsum << '\n';
    return 0;
}