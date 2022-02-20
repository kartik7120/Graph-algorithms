#include <iostream>
#include <vector>
#include <algorithm>
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

void print(node *root)
{
    if (root == NULL)
    {
        return;
    }
    print(root->left);
    cout << root->data << " ";
    print(root->right);
}

void calPointers(node *root, node **first, node **mid, node **last, node **prev)
{
    if(root==NULL){
        return ;
    }

    calPointers(root->left,first,mid,last,prev);

    if(*prev && root->data < (*prev)->data)
    {
        if(!*first)
        {
            *first=*prev;
            *mid=root;
        }
        else
        {
            *last=root;
        }
    }
        *prev=root;
        calPointers(root->right,first,mid,last,prev);
}

void swap(node* &a,node* &b)
{
    node* temp=a;
    *a=*b;
    *b=*temp;
}

void restore(node *root)
{
    node *first, *mid, *last, *prev;
    first = NULL;
    mid = NULL;
    last = NULL;
    prev = NULL;

    calPointers(root, &first, &mid, &last, &prev);

    //case 1
    if (first && last)
    {
        swap(&(first->data), &(last->data));
    }
    else if (first && mid)
    {
        swap(&(first->data), &(mid->data));
    }
}

int main()
{
    int n;
    cin >> n;

    vector<int> temp(n);
    for (int i = 0; i < n; i++)
    {
        cin >> temp[i];
    }
    node *root = NULL;
    // BuildBST(root,temp);
    return 0;
}