#include<iostream>
#include<stdlib.h>
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

int height(node* root)
{
    if(root==NULL)
    return 0;

    return 1+max(height(root->left),height(root->right));
}
//Time complexiiy is O(N^2)
bool IsBalanced(node* root)
{
    if(root==NULL)
    {
        return true; // This is true beacause every empty tree is itself a balanced binary tree
    }
    if(IsBalanced(root->left)== false)
    {
        return false;
    }

    if(IsBalanced(root->right) == false)
    {
        return false;
    }

    int leftHeight=height(root->left);
    int rightHeight=height(root->right);

    if((std::abs(leftHeight-rightHeight))<=1)
    {
        return true;
    }
    else
    return false;
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
   
    cout<<IsBalanced(root)<<'\n';
    return 0;
}