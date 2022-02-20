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

int SumNodes(node* root)
{
    if(root==NULL)
    {
        return 0;
    }

    return root->data+SumNodes(root->left)+SumNodes(root->right);
}

int main()
{
    node* root=new node(1);
    root->left=new node(2);
    root->left->left=new node(3);
    root->left->right=new node(4);
    root->right=new node(4);
    root->right->left=new node(1);
    cout<<SumNodes(root)<<'\n';
    return 0;
}