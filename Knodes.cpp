#include <iostream>
using namespace std;

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

//case 1

void DistK(node *root, node *target, int k)
{
    if (root == NULL || k < 0)
    {
        return;
    }
    if (k == 0)
    {
        cout << root->data << " ";
        return;
    }
    DistK(root->left, target, k - 1);
    DistK(root->right, target, k - 1);
}

//case 2

int abc(node *root, node *target, int k)
{
    if (root == NULL)
    {
        return -1;
    }

    if (root == target)
    {
        DistK(root, target, k);
        return 0;
    }

    int dl = abc(root->left, target, k);

    if (dl != -1)
    {
        if(dl+1==k)
        {
            cout<<root->data<<" ";
        }
        else
        DistK(root->right,target,k-dl-2);
        return 1+dl;
    }

    int dr = abc(root->right, target, k);

    if (dr != -1)
    {
        if(dr+1==k)
        {
            cout<<root->data<<" ";
        }
        else
        DistK(root->left,target,k-dr-2);
        return 1+dr;
    }

    return -1;
}

int main()
{
    node * root = new node(20);
    root->left = new node(8);
    root->right = new node(22);
    root->left->left = new node(4);
    root->left->right = new node(12);
    root->left->right->left = new node(10);
    root->left->right->right = new node(14);
    node * target = root->left->right;
    abc(root, target, 2);

    return 0;
}