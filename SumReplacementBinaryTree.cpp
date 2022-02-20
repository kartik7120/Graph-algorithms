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

void SumReplace(node* &root)
{
    if(root==NULL)
    {
        return;
    }

    SumReplace(root->left);
    SumReplace(root->right);

    if(root->left!=NULL)
    {
        root->data+=root->left->data;
    }
    if(root->right!=NULL)
    {
        root->data+=root->right->data;
    }
}

void print(node* root)
{
    if(root==NULL)
    {
        return ;
    }

    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
}

int main()
{
    node* root=new node(1);
    root->left=new node(2);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right=new node(3);
    root->right->left=new node(6);
    root->right->right=new node(7);
    SumReplace(root);
    print(root);
    return 0;
}