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

void DistKnode(node *target, int k, vector<int> ans)
{
    if (target == NULL || k<0)
    {
        return;
    }

    if (target->left != NULL || target->right != NULL)
    {
        if (k == 0)
        {
            if (target->left != NULL)
                ans.push_back(target->left->data);
            if (target->right != NULL)
                ans.push_back(target->right->data);
            return;
        }
    }
    DistKnode(target->left, k - 1, ans);
    DistKnode(target->right, k - 1, ans);
}

int main()
{
    node *root = new node(20);
    root->left = new node(8);
    root->right = new node(22);
    root->left->left = new node(4);
    root->left->right = new node(12);
    root->left->right->left = new node(10);
    root->left->right->right = new node(14);
    node *target = root->left->right;
    vector<int> ans;
    DistKnode(target, 2, ans);
    for (auto i : ans)
    {
        cout << i << " ";
    }
    return 0;
}