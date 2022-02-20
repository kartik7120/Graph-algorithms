#include<iostream>
using namespace std;

class node
{public:
    int data;
    node* left;
    node* right;
    node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};

node* insertBST(node* &root,int val)
{
    if(root==NULL)
    {
        root=new node(val);
        return root;
    }
    if(root->data  > val)
    {
        root->left=insertBST(root->left,val);
    }
    else
    if(root->data < val)
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
    insertBST(root,6);
    insertBST(root,10);
    insertBST(root,2);
    insertBST(root,3);
    print(root);
    return 0;
}