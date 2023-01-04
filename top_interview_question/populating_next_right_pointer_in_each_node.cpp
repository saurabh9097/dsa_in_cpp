
#include <bits/stdc++.h>
using namespace std;

// Definition for a Node.
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node *next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node *_left, Node *_right, Node *_next)
        : val(_val), left(_left), right(_right), next(_next) {}
};

class Solution
{
public:
    Node *connect(Node *root)
    {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        queue<pair<Node *, int>> q;
        q.push({root, 1});
        while (!q.empty())
        {
            auto temp = q.front();
            q.pop();
            if (!q.empty() && q.front().second == temp.second)
                temp.first->next = q.front().first;
            if (!temp.first)
                continue;
            if (temp.first->left)
                q.push({temp.first->left, temp.second + 1});
            if (temp.first->right)
                q.push({temp.first->right, temp.second + 1});
            cout << temp.first->val << " ";
        }
        return root;
    }
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