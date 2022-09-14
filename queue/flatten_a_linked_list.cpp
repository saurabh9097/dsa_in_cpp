#include <bits/stdc++.h>
#include <queue>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *child;
};
class solution
{
public:
    void flatten(node *head)
    {
        node *curr = head;
        queue<node *> q;
        while (curr != NULL)
        {
            if (curr->child != NULL)
            {
                q.push(curr->child);
            }
            cout << curr->data << " ";
            if (curr->next != NULL)
            {
                curr = curr->next;
            }
            else
            {
                if (!q.empty())
                {
                    curr = q.front();
                    q.pop();
                }
                else
                {
                    curr = NULL;
                }
            }
        }
    }

    void flatten2(node *head)
    {
        node *curr = head;
        node *last = head;
        while (last->next != NULL)
        {
            last = last->next;
        }
        while (curr != NULL)
        {
            if (curr->child != NULL)
            {
                last->next = curr->child;
            }
            while (last->next != NULL)
            {
                last = last->next;
            }
            cout<<curr->data<<" ";
            curr=curr->next;
        }
    }
};

int main()
{
    node *head = new node();
    head->data = 5;
    head->child = NULL;
    node *a = new node();
    a->data = 4;
    a->next = NULL;
    a->child = NULL;
    head->child = a;
    solution s;
    s.flatten2(head);
}
