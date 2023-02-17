#include <bits/stdc++.h>
using namespace std;

const int ALPHABET_SIZE = 26;
unordered_map<string, int> dp;
// trie node
struct TrieNode
{
    struct TrieNode *children[ALPHABET_SIZE];

    // isEndOfWord is true if the node represents
    // end of a word
    bool isEndOfWord;
};

// Returns new trie node (initialized to NULLs)
struct TrieNode *getNode(void)
{
    struct TrieNode *pNode = new TrieNode;

    pNode->isEndOfWord = false;

    for (int i = 0; i < ALPHABET_SIZE; i++)
        pNode->children[i] = NULL;

    return pNode;
}

// If not present, inserts key into trie
// If the key is prefix of trie node, just
// marks leaf node
void insert(struct TrieNode *root, string key)
{
    struct TrieNode *pCrawl = root;

    for (int i = 0; i < key.length(); i++)
    {
        int index = key[i] - 'a';
        if (!pCrawl->children[index])
            pCrawl->children[index] = getNode();

        pCrawl = pCrawl->children[index];
    }

    // mark last node as leaf
    pCrawl->isEndOfWord = true;
}

// Returns true if key presents in trie, else
// false
bool search(struct TrieNode *root, string key)
{
    struct TrieNode *pCrawl = root;

    for (int i = 0; i < key.length(); i++)
    {
        int index = key[i] - 'a';
        if (!pCrawl->children[index])
            return false;

        pCrawl = pCrawl->children[index];
    }

    return (pCrawl->isEndOfWord);
}
bool helper(struct TrieNode *root, string s)
{

    if (s.size() == 0)
        return true;
    if (dp.find(s) != dp.end())
    {
        cout << 9;
        return dp[s];
    }
    for (int i = 1; i <= s.size(); i++)
    {
        if (search(root, s.substr(0, i)) && helper(root, s.substr(i)))
            return dp[s] = true;
    }
    return dp[s] = false;
}
class Solution
{
public:
    bool wordBreak(string s, vector<string> &wordDict)
    {
        dp.clear();
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        struct TrieNode *root = getNode();
        for (auto i : wordDict)
        {
            insert(root, i);
        }
        return helper(root, s);
    }
    //     struct Trie {
    //  public:
    //     Trie* next[26];
    //     bool is_terminal;

    //     Trie() {
    //         memset(next, 0, sizeof(next));
    //         is_terminal = false;
    //     }
    // };

    // bool wordBreak(string s, vector<string>& wordDict) {
    //     Trie* root = new Trie();
    //     for (const string& word : wordDict) {
    //         Trie* cur = root;
    //         for (char w : word) {
    //             int c = w - 'a';
    //             if (!cur->next[c]) {
    //                 cur->next[c] = new Trie();
    //             }
    //             cur = cur->next[c];
    //         }

    //         cur->is_terminal = true;
    //     }

    //     unordered_set<Trie*> states;
    //     states.insert(root);
    //     for (char w : s) {
    //         char c = w - 'a';
    //         unordered_set<Trie*> tmp;
    //         for (Trie* s : states) {
    //             if(s->next[c]) {
    //                 tmp.insert(s->next[c]);
    //                 if (s->next[c]->is_terminal) {
    //                     tmp.insert(root);
    //                 }
    //             }
    //         }
    //         swap(states,tmp);
    //     }

    //     for (Trie* s : states) {
    //         if (s->is_terminal) return true;
    //     }

    //     return false;
    // }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
    }
}