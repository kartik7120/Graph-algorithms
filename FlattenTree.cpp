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

void flatten(node *root)
{
    if(root==NULL || (root->left == NULL && root->right == NULL))
    {
        return ;
    }

    if (root->left != NULL)
    {
        node *leftTail = root->left;
        node* temp=root->right;
        root->right=root->left;
        root->left=NULL;
        node* t=root;
        while(t->right!=NULL)
        {
            t=t->right;
        }
        t->right=temp;
    }
    flatten(root->right);
}

void InOrder(node* root)
{
    if(root==NULL)
    {
        return ;
    }

    InOrder(root->left);
    cout<<root->data<<" ";
    InOrder(root->right);
}

int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->right->left = new node(4);
    root->right->right = new node(5);
    flatten(root);
    InOrder(root);
    return 0;
}