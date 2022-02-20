#include<iostream>
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

node* LeastCommenAncestor(node* root,int n1,int n2)
{
    if(root == NULL)
    return NULL;
    if(root->data == n1 || root->data == n2)
    {
        return root;
    }

    node* leftLCA=LeastCommenAncestor(root->left,n1,n2);
    node* rightLCA=LeastCommenAncestor(root->right,n1,n2);

    if(leftLCA && rightLCA)
    {
        return root;
    }

    if(leftLCA != NULL)
    {
        return leftLCA;
    }

    return rightLCA;
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

    node* LCA=LeastCommenAncestor(root,6,7);
    cout<<LCA->data<<'\n';
    return 0;
}