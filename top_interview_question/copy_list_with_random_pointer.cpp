#include <bits/stdc++.h>
using namespace std;

// Definition for a Node.
class Node
{
public:
    int val;
    Node *next;
    Node *random;

    Node(int _val)
    {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

class Solution
{
public:
    Node *copyRandomList(Node *head)
    {
        if (!head)
            return head;
        Node *temp = head;
        while (temp != nullptr)
        {
            Node *t = new Node(temp->val);
            Node *coming = temp->next;
            temp->next = t;
            temp->next->next = coming;
            temp = temp->next->next;
        }
        temp = head;
        while (temp != nullptr)
        {
            if (temp->random != NULL)
                temp->next->random = temp->random->next;
            temp = temp->next->next;
        }
        Node *res = head->next;
        Node *curr = head;
        // temp=head;
        while (curr != nullptr)
        {
            temp = curr->next;
            curr->next = temp->next;
            if (temp->next != NULL)
                temp->next = temp->next->next;
            curr = curr->next;
        }
        return res;
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