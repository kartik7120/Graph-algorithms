#include <iostream>
#include <stack>
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

void printZigZag(node *root)
{
    int c = 1;
    queue<node *> q;
    stack<node *> st;
    q.push(root);
    q.push(NULL);
    node *temp;
    while (!q.empty())
    {
        if (c % 2 != 0)
        {
            temp=q.front();
            q.pop();
            if (temp != NULL)
            {
                cout << temp->data << " ";
                if (temp->left)
                {
                    q.push(temp->left);
                }
                if(temp->right)
                {
                    q.push(temp->right);
                }
            }
            else
            if(temp==NULL)
            {
                if(!q.empty())
                {
                    c++;
                    q.push(NULL);
                }
            }
        }
        else
        if(c%2==0)
        {
            temp=q.front();
            q.pop();
            if (temp != NULL)
            {
                st.push(temp);
                if (temp->left)
                {
                    q.push(temp->left);
                }
                if(temp->right)
                {
                    q.push(temp->right);
                }
            }
            else
            if(temp==NULL)
            {
                if(!q.empty())
                {
                    while(!st.empty())
                    {
                        cout<<st.top()->data<<" ";
                        st.pop();
                    }
                    c++;
                    q.push(NULL);
                }
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
    printZigZag(root);
    return EXIT_SUCCESS;
}