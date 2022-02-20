#include<iostream>
#include<stack>
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

void PreOrder(node* root)
{
    stack<node*>st;// Stack is used to store the address of the root
    st.push(root);

    while(!st.empty())
    {
        node* temp=st.top();
        
        cout<<temp->data<<" ";
        st.pop();
        if(temp->right!=NULL)
        st.push(temp->right);
        if(temp->left!=NULL)
        st.push(temp->left);
    }
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
    PreOrder(root);

    return 0;
}
    //while(!st.empty())
    //{
    //    while(root!=NULL)
    //    {
    //        cout<<root->data<<" ";
    //        root=root->left;
    //        st.push(root);
    //    }
//
    //    st.pop();
    //    root=st.top();
    //    root=root->right;
    //}