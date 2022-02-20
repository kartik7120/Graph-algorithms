#include <iostream>
using namespace std;

class node
{
 public:   int data;
    node *left;
    node *right;


    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

node* insertBST(node* root,int val)
{
    if(root==NULL)
    {
        return new node(val);
    }

    if(val < root->data)
    {
        root->left=insertBST(root->left,val);
    }
    else
    {
        root->right=insertBST(root->right,val);
    }
    return root;
}

void print(node* root)
{
    if(root==NULL)
    {
        return ;
    }

    print(root->left);
    cout<<root->data<<" ";
    print(root->right);
}

int main()
{
    
    node* root=NULL;
    insertBST(root,1);
    insertBST(root,3);
    insertBST(root,4);
    insertBST(root,2);
    insertBST(root,7);
    print(root);
    return 0;
}