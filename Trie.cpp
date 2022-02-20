#include <iostream>
#include <vector>
using namespace std;

class Trie
{
public:
    Trie *children[26];
    bool isEndOfWord;
};

Trie *getNode()
{
    Trie *pNode = new Trie;

    pNode->isEndOfWord = false;

    for (int i = 0; i < 26; i++)
    {
        pNode->children[i] = NULL;
    }
    
    return pNode;
}
// a b a
void insert(Trie *&root, string word)
{
    Trie *temp = root;
    for (int i = 0; i < word.length(); i++)
    {
        int index = word[i] - 'a';
        if (temp->children[index] == NULL)
        {
            temp->children[index] = getNode();
        }
        temp = temp->children[index];
    }
    temp->isEndOfWord = true;
}

bool search(Trie *&root, string word)
{
    Trie *temp = root;

    for (int i = 0; i < word.length(); i++)
    {
        int index = word[i] - 'a';
        if (temp->children[index] == NULL)
            return false;

        temp = temp->children[index];
    }

    return temp->isEndOfWord;
}

int main()
{
    string arr[] = {"the", "a", "these", "answer", "any", "by", "bye", "their"};

    int n = 8;

    Trie *root = getNode();

    for (int i = 0; i < n; i++)
        insert(root, arr[i]);

    cout << search(root, "the") << '\n';
    cout << search(root, "these") << '\n';

    return 0;
}