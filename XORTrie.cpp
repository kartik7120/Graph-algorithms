#include <iostream>
#include <vector>
using namespace std;

class Trie
{
public:
    Trie *next[2];
    Trie()
    {
        next[0] = NULL;
        next[1] = NULL;
    }
};

Trie *build(vector<int> &a)
{
    Trie *root = new Trie();

    int n = a.size();

    for (int i = 0; i < n; i++)
    {
        int num = a[i];
        Trie *temp = root;
        for (int i = 31; i >= 0; i--)
        {
            int bit = (num >> i) & 1;
            if (temp->next[bit] == NULL)
                temp->next[bit] = new Trie();
            temp = temp->next[bit];
        }
    }
    return root;
}

int CalXOR(Trie *&root, vector<int> &a)
{
    int res = 0;
    for (int i = 0; i < a.size(); i++)
    {
        int num = a[i];
        Trie *temp = root;
        int cur_max = 0;
        for (int i = 31; i >= 0; i--)
        {
            int bit = ((num >> i) & 1) ? 0 : 1;
            if (temp->next[bit])
            {
                cur_max <<= 1;
                res |= 1;
                temp - temp->next[bit];
            }
            else
            cur_max<<=1;
            res|=0;
        }
    }

    return res;
}

int main()
{
    vector<int> a = {3, 10, 5, 12, 2};
    return 0;
}