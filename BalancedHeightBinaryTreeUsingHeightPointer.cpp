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
//Since we are not calling a height function then the time complexcity for this function is O(n) instread of O(n^2) 
bool IsBalanced(node* root,int* height)
{
    int lh=0;//Height of left subtree
    int rh=0;//Height of right subtree
    if(root==NULL)
    {
        return true; // This is true beacause every empty tree is itself a balanced binary tree
    }
    if(IsBalanced(root->left,&lh)== false)
    {
        return false;
    }

    if(IsBalanced(root->right,&rh) == false)
    {
        return false;
    }

    *height=max(lh,rh)+1;

    if((std::abs(lh-rh))<=1)
    {
        return true;
    }
    else
    return false;
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
    int height=0;
    cout<<IsBalanced(root,&height)<<'\n';
    return 0;
}