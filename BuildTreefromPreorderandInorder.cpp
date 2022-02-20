#include<iostream>
using namespace std;

class node
{
    public:
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

int search(int previous[],int inorser[])

node* BuildBinaryTree(int previous[],int inorder[],int start,int end)
{
    int idx=0;
    node* root=new node(previous[idx]);
    idx++;
    int curr=search(previous,inorder,start,end);

}

int main()
{
    int preorder[]={1,2,4,3,5};
    int inorder[]={4,2,1,5,3};

    return 0;
}