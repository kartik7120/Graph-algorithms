#include <iostream>
using namespace std;
// https://www.geeksforgeeks.org/check-whether-the-two-binary-search-trees-are-identical-or-not/
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

node *insertBST(node *&root, int val)
{
    if (root == NULL)
    {
        root = new node(val);
        return root;
    }

    if (root->data > val)
    {
        root->left = insertBST(root->left, val);
    }
    else if (root->data < val)
    {
        root->right = insertBST(root->right, val);
    }
    return root;
}

bool CheckBST(node* root1,node* root2)
{
    if(root1==NULL && root2==NULL)
    {
        return true;
    }
    else
    if(root1==NULL || root2==NULL)
    {
        return false;
    }
    else
    {
        bool cond1=root1->data == root2->data;
        bool cond2=CheckBST(root1->left,root2->left);
        bool cond3=CheckBST(root1->right,root2->right);
        if(cond1 && cond2 && cond3)
        {
            return true;
        }
        return false;
    }
}

int main()
{
    node* root1=NULL;
    node* root2=NULL;
    insertBST(root1,3);
    insertBST(root1,2);
    insertBST(root1,1);
    
    insertBST(root2,10);
    insertBST(root2, 5);
    insertBST(root2, 13);

    if(CheckBST(root1,root2))
    {
        cout<<"Identical BST"<<'\n';
    }
    else
    cout<<"Not Identical\n";
    return 0;
}