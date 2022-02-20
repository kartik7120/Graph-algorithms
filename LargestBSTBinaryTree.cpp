#include <iostream>
#include <climits>
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

//node *insertBST(node *&root, int val)
//{
//    if (root == NULL)
//    {
//        root = new node(val);
//        return root;
//    }
//
//    if (root->data > val)
//    {
//        root->left = insertBST(root->left, val);
//    }
//    else if (root->data < val)
//    {
//        root->right = insertBST(root->right, val);
//    }
//    return root;
//}

struct Info
{
    int size;
    int max;
    int min;
    int ans; // size of BST
    bool isBST;
};

Info BSTinBinary(node *root)
{
    if (root == NULL)
    {
        return {0, INT_MIN, INT_MAX, 0, true};
    }
    if (root->left == NULL && root->right == NULL)
    {
        return {1, root->data, root->data, 1, true};
    }

    Info LeftTree = BSTinBinary(root->left);
    Info RightTree = BSTinBinary(root->right);

    Info res;
    res.size = (1 + LeftTree.size + RightTree.size);

    if (LeftTree.isBST && RightTree.isBST && LeftTree.max < root->data && RightTree.min > root->data)
    {
        res.min = min(LeftTree.min, min(root->data, RightTree.min));
        res.max = max(LeftTree.max, max(root->data, RightTree.max));
        res.ans = res.size;
        res.isBST = true;
        return res;
    }
    else
    {
        res.ans = max(LeftTree.ans, RightTree.ans);
        res.isBST = false;
        return res;
    }
}

int main()
{
    node *root = new node(60);
    root->left = new node(65);
    root->right = new node(70);
    root->left->left = new node(50);
    cout << BSTinBinary(root).ans << '\n';

    return 0;
}