#include <iostream>
#include <vector>
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

bool GetPath(node *root, int key, vector<int> &path)
{

    if (root == NULL)
    {
        return false;
    }

    path.push_back(root->data);
    if (root->data == key)
    {
        return true;
    }

    if (GetPath(root->left, key, path) || GetPath(root->right, key, path))
    {
        return true;
    }
    path.pop_back();
    return false;
}

int LeastCommenAncestor(node *root, int n1, int n2)
{
    vector<int> path1, path2;

    if(!GetPath(root,n1,path1) || !GetPath(root,n2,path2))
    {
        return -1;
    }

    int pc; // point of change

    for(pc=0;pc<path1.size() && pc<path2.size();pc++)
    {
        if(path1[pc]!=path2[pc])
        {
            break;
        }
    }

    return path1[pc-1];
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

    cout<<LeastCommenAncestor(root,6,7)<<'\n';
    return 0;
}