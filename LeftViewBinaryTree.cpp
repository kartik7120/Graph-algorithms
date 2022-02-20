#include <iostream>
#include <queue>
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

void LeftView(node* root)
{
    if(root==NULL)
    return ;
    queue<node*> q;

    q.push(root);
    
    while(!q.empty())
    {
        int n=q.size();// n here is used to represent each level of a binary tree

        for(int i=1;i<=n;i++){

            node* temp=q.front();
            q.pop();

            if(i==1)
            {
                cout<<temp->data<<" ";
            }

            if(temp->left!=NULL)
            {
                q.push(temp->left);
            }
            if(temp->right!=NULL)
            {
                q.push(temp->right);
            }
        }
    }
}

int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right = new node(3);
    root->right->left = new node(6);
    root->right->right = new node(7);
    LeftView(root);
    return 0;
}
//This is my own solution which is also correct !

//    if(root==NULL)
//    return ;
//    queue<node*> q;
//    q.push(root);
//    q.push(NULL);
//    cout<<root->data<<" ";
//    while(!q.empty())
//    {
//        node* n=q.front();
//        q.pop();
//        if(n!=NULL)
//        {
//            if(n->left)
//            {
//                q.push(n->left);
//            }
//            if(n->right)
//            {
//                q.push(n->right);
//            }
//        }
//        else
//        if(n==NULL){
//            if(!q.empty())
//            {
//                cout<<q.front()->data<<" ";
//                q.push(NULL);
//            }
//        }
//    }
//}