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

int search(int inorder[], int start, int end,int curr)
{
    for (int i = start; i <= end; i++)
    {
        if (inorder[i] == curr)
            return i;
    }
    return -1;
}

node *BuildTree(int preorder[], int inorder[], int start, int end)
{
    static int idx = 0;
    int curr= preorder[idx];
    idx++;
    node *ele = new node(curr);

    if(start==end)
    {
        return ele;
    }
    int pos = search( inorder, start, end,curr);

    ele->left=BuildTree(preorder,inorder,start,pos-1);

    ele->right=BuildTree(preorder,inorder,pos+1,end);

    return ele;
}

void print(node* root)
{
    if(root==NULL)
    return ;

    print(root->left);
    cout<<root->data<<" ";
    print(root->right);
}

int main()
{
    int preorder[] = {1, 2, 3};
    int inorder[] = {2, 1, 3};
    node* root=BuildTree(preorder,inorder,0,2);
    print(root);
    return 0;
}