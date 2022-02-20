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

node* InorderSuccessor(node* &root)
{
    node* temp=root;
    while(temp && temp->left!=NULL)
    {
        temp=temp->left;
    }
    return temp;
}

node* insertBST(node* &root,int val)
{
    if(root==NULL)
    {
        root=new node(val);
        return root;
    }

    if(root->data > val)
    {
        root->left=insertBST(root->left,val);
    }
    else
    if(root->data < val)
    {
        root->right=insertBST(root->right,val);
    }
    return root;
}

node* deleteBST(node* &root,int key)
{
    if(root==NULL)
    {
        return root;
    }

    if(key < root->data)
    {
        root->left=deleteBST(root->left,key);
    }
    else
    if(key > root->data)
    {
        root->right=deleteBST(root->right,key);
    }
    else
    {
        if(root->left==NULL)
        {
            node* temp=root->left;
            delete root;
            return temp;
        }
        else
        if(root->right==NULL)
        {
            node* temp=temp->right;
            delete root;
            return temp;
        }
        node* temp=InorderSuccessor(root->right);
        root->data=temp->data;
        root->right=deleteBST(root->right,temp->data);
    }
    return root;
}

void print(node* root)
{
    if(root==NULL)
    {
        return ;
    }
    print(root->left);
    cout<<root->data<<" ";
    print(root->right);
}


int main()
{
    node* root=NULL;
    insertBST(root, 50);
    insertBST(root, 30);
    insertBST(root, 20);
    insertBST(root, 40);
    insertBST(root, 70);
    insertBST(root, 60);
    insertBST(root, 80);
    print(root);
    root=deleteBST(root,50);
    cout<<'\n';
    print(root);
    return 0;
}