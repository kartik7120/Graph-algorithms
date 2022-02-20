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

int HeightTree(node* root)
{
    if(root==NULL)
    return 0;

    return 1+max(HeightTree(root->left),HeightTree(root->right));
}

int main()
{
    node* root=new node(1);
    root->left=new node(2);
    root->left->left=new node(3);
    root->left->right=new node(4);
    root->right=new node(4);
    root->right->left=new node(1);
    cout<<HeightTree(root)<<'\n';
    return 0;
}