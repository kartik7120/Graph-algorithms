#include <iostream>
#include <vector>
using namespace std;

class Trie
{
public:
    Trie *next[26];
    bool end;
};

Trie *getNode()
{
    Trie *root = new Trie;

    for (int i = 0; i < 26; i++)
        root->next[i] = NULL;

    root->end = false;
    return root;
}

void insert(Trie *&root, string word)
{
    Trie *temp = root;
    for (int i = 0; i < word.length(); i++)
    {
        int index = word[i] - 'a';
        if (temp->next[index] == NULL)
            temp->next[index] = getNode();
        temp = temp->next[index];
    }
    temp->end = true;
}

void PrintAll(Trie *&root, string &word, vector<string> &res, string cur)
{
    if (root == NULL)
        return;

    if (root->end)
    {
        res.push_back(cur);
    }

    for (int i = 0; i < 26; i++)
    {
        if (root->next[i])
        {
            string temp = to_string('a' + i);
            PrintAll(root, word, res, temp);
        }
    }
}
void search(Trie *&root, string word)
{
    Trie *temp = root;
    for (int i = 0; i < word.length(); i++)
    {
        int index = word[i] - 'a';

        if (temp->next[index] == NULL)
        {
            insert(root, word);
            cout << "No possible prefix\n";
            return;
        }
        temp = temp->next[index];
    }
    vector<string> res;
    PrintAll(temp, word, res, "");
    for (auto c : res)
    {
        cout << word << c << '\n';
    }
}

int main()
{
    Trie *root = getNode();

    int n;
    cin >> n;
    vector<string> a(n);
    for (auto &i : a)
    {
        cin >> i;
        insert(root, i);
    }
    int q;
    cin >> q;
    while (q--)
    {
        string s;
        cin >> s;
        search(root, s);
    }
    return 0;
}