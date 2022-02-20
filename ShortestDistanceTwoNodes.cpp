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

node *LeastCommenAncestor(node *root, int n1, int n2)
{
    if (root == NULL)
        return NULL;
    if (root->data == n1 || root->data == n2)
    {
        return root;
    }

    node *leftLCA = LeastCommenAncestor(root->left, n1, n2);
    node *rightLCA = LeastCommenAncestor(root->right, n1, n2);

    if (leftLCA && rightLCA)
    {
        return root;
    }

    if (leftLCA != NULL)
    {
        return leftLCA;
    }

    return rightLCA;
}
// Our distance will corrospond to level wise 
int findDist(node *root, int k, int dist)
{
    if (root == NULL)
    {
        return -1;
    }

    if(root->data == k)
    {
        return dist;
    }

    int left=findDist(root->left,k,dist+1);
    if(left!=-1)
    {
        return dist;
    }
    return findDist(root->right,k,dist+1);
}

int LeastDistance(node *root, int n1, int n2)
{
    node *LCA = LeastCommenAncestor(root, n1, n2);

    int d1 = findDist(root, n1, 0);
    int d2 = findDist(root, n2, 0);
    return d1 + d2 -1;
}

int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right = new node(3);
    root->right->left = new node(6);
    root->right->right = new node(7);
    cout<<LeastDistance(root,6,7)<<" ";
    return 0;
}