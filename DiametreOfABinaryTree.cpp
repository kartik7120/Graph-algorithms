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

int CalHeight(node* root)
{
    if(root==NULL)
    {
        return 0;
    }

    return 1+max(CalHeight(root->left),CalHeight(root->right));
}

int CalDiametre(node* root)
{
    if(root==NULL)
    {
        return 0;
    }

    int LeftHeight =CalHeight(root->left);
    int Rightheight=CalHeight(root->right);

    int CurrentDiametre=LeftHeight+Rightheight+1;

    int LeftDiametre=CalDiametre(root->left);
    int RightDiametre=CalDiametre(root->right);

    return max(CurrentDiametre,max(LeftDiametre,RightDiametre));
}

//Time complexicity for this function is O(n^2)
//https://www.geeksforgeeks.org/diameter-of-a-binary-tree/

int main()
{
    node* root=new node(1);
    root->left=new node(2);
    root->left->left=new node(3);
    root->left->right=new node(4);
    root->right=new node(4);
    root->right->left=new node(1);
    cout<<CalDiametre(root)<<'\n';
    return 0;
}