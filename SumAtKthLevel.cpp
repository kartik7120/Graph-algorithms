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

int SumAtK(node *root, int K)
{
    int sum=0;
    if(root==NULL)
    {
        return -1;
    }
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    int level=0;
    while(!q.empty())
    {
        node* n=q.front();
        q.pop();
        if(n!=NULL)
        {
            if(level==K)
            {
                sum+=n->data;
            }
            
            if(n->left)
            {
                q.push(n->left);
            }
            if(n->right)
            {
                q.push(n->right);
            }
        }
        else
        if(n==NULL)
        {
            if(!q.empty())
            {
                level++;
                q.push(NULL);
            }
        }

       // if(K==0)
       // {
       //     while(q.front()!=NULL)
       //     {
       //         sum+=q.front()->data;
       //         q.pop();
       //     }
       //     break;
       // }
    }

    return sum;
}

int main()
{
    node *root = new node(1);
    (*root).left = new node(2);
    (*root).left->left = new node(4);
    root->left->right = new node(5);
    root->right = new node(3);
    root->right->left = new node(6);
    root->right->right = new node(7);
    int K;
    cin>>K;
    cout<<SumAtK(root,K)<<endl;
    return 0;
}