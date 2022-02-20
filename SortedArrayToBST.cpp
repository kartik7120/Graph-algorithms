#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

node *insertBST(node *&root, int val)
{
    if (root == NULL)
    {
        root = new node(val);
        return root;
    }
    if (root->data > val)
    {
        root->left = insertBST(root->left, val);
    }
    else if (root->data < val)
    {
        root->right = insertBST(root->right, val);
    }
    return root;
}

void BuildBST(int arr[], int l, int u, node *&root)
{
    if (l > u)
        return;

    int mid = (l + u) / 2;

    insertBST(root, arr[mid]);
    BuildBST(arr, l, mid - 1, root);
    BuildBST(arr, mid + 1, u, root);
}

void print(node *root)
{
    if (root == NULL)
    {
        return;
    }
    print(root->left);
    cout << root->data << " ";
    print(root->right);
}

int main()
{
    node *root = NULL;

    
    print(root);
    return 0;
}