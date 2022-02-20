#include <iostream>
using namespace std;

class Trie
{
public:
    class Node
    {
    public:
        bool end;
        Node *next[26];
        Node()
        {
            end = false;
            for (int i = 0; i < 26; i++)
            {
                next[i] = NULL;
            }
        }
    };
    Node *trie;
    Trie()
    {
        trie = new Node();
    }
};

void insert(string word, Trie *trie)
{
    int i = 0;
    Trie *temp = trie;
    while (i < word.size())
    {
        if (temp->trie->next[word[i] - 'a'] == NULL)
        {
            temp->trie->next[word[i] - 'a'] = new 
        }
    }
}

int main()
{

    return 0;
}