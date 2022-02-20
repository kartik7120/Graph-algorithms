#include <iostream>
#include<climits>
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

// Time Complexicity is O(N) where N is the length of the preorder
node *insertBST(int preorder[], int *preorderIdx, int key, int min, int max, int n)
{
    if (*preorderIdx >= n)
        return NULL;
    node *root = NULL;
    if (key > min && key < max)
    {
        root = new node(key);
        *preorderIdx = *preorderIdx + 1;
        if (*preorderIdx < n)
        {
            root->left = insertBST(preorder, preorderIdx, preorder[*preorderIdx], min, key, n);
        }
        if (*preorderIdx < n)
        {
            root->right = insertBST(preorder, preorderIdx, preorder[*preorderIdx], key, max, n);
        }
    }
    return root;
}

void print(node* root)
{
    if(root==NULL)
    return ;

    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
}

int main()
{
    int n;
    cout << "Entre the length of the array\n";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int idx=0;
    node* root=insertBST(arr,&idx,arr[0],INT_MIN,INT_MAX,n);
    print(root);
    return 0;
}