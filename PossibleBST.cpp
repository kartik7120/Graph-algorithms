#include<iostream>
#include<vector>
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

vector<node*> buildTrees(int start,int end) // values that will be stored in data
{
    vector<node*>tree;
    if(start > end)
    {
        tree.push_back(NULL);
    }

    for(int i=start;i<=end;i++)
    {
        vector<node*> leftSubtree=buildTrees(start,i-1);
        vector<node*> rightSubtree=buildTrees(i+1,end);

        for(int j=0;j<leftSubtree.size();j++)
        {
            node* left=leftSubtree[j];
            for(int k=0;k<rightSubtree.size();k++)
            {
                node* right=rightSubtree[k];
                node* n=new node(i);
                n->left=left;
                n->right=right;
                tree.push_back(n);
            }
        }
    }
    return tree;

}

void preorder(node* root){

    if(root==NULL)
    return ;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

int main()
{
    vector<node*> totalTrees=buildTrees(1,3);
    for(int i=0;i<totalTrees.size();i++)
    {
        preorder(totalTrees[i]);
        cout<<'\n';
    }
    return 0;
}