#include <iostream>
using namespace std;
//https://www.geeksforgeeks.org/diameter-of-a-binary-tree/
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

int CalDiametre(node *root, int *height)
{

    if (root == NULL)
    {
        *height = 0;
        return 0;
    }
    int leftHeight = 0;
    int RightHeight = 0;

    int leftDiametre = CalDiametre(root->left, &leftHeight);
    int rightDiametre = CalDiametre(root->right, &RightHeight);

    int CurrDiametre = leftHeight + RightHeight + 1;
    *height = max(leftHeight, RightHeight) + 1;
    return max(CurrDiametre, max(leftDiametre, rightDiametre));
}

int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->left->left = new node(3);
    root->left->right = new node(4);
    root->right = new node(4);
    root->right->left = new node(1);
    int height = 0;
    cout << CalDiametre(root, &height) << '\n';
    return 0;
}