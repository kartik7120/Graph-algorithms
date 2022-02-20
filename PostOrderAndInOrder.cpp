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

int search(int postorder[], int inorder[], int start,int end,int ele)
{
    for (int i = start; i <= end;i++)
    {
        if(inorder[i]==ele)
        {
            return i;
        }
    }
    return -1;
}

node *BuildTree(int postorder[], int inorder[], int start, int end)
{
    static int idx = 4;
    int ele=postorder[idx];
    node *n = new node(ele);
    idx--;

    if(start==end)
    return n;

    int pos = search(postorder, inorder,start,end, ele);

    n->right=BuildTree(postorder,inorder,pos+1,end);

    n->left=BuildTree(postorder,inorder,start,pos-1);

    return n;
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
    int postorder[] = {4, 2, 5, 3, 1};
    int inorder[] = {4, 2, 1, 5, 3};
    node* root=BuildTree(postorder,inorder,0,4);
    print(root);
    return 0;
}