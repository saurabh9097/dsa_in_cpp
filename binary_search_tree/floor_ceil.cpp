#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *right;
    Node *left;
    Node(int data)
    {
        this->data = data;
        this->right = this->left = NULL;
    }
};
int floor(Node *root, int key)
{
    int ans = INT_MAX;
    while (root != NULL)
    {
        if (root->data == key)
            return ans;
        else if (root->data < key)
        {
            ans = root->data;
            root = root->right;
        }
        else
        {
            root = root->left;
        }
    }
    return ans;
}

int ceil(Node *root, int key)
{
    int ans = INT_MIN;
    while (root != NULL)
    {
        if (root->data == key)
            return ans;
        else if (root->data > key)
        {
            ans = root->data;
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    return ans;
}