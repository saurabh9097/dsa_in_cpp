#include <bits/stdc++.h>
#include<string>
using namespace std;
template <class T>
class Node
{
public:
    T data;
    Node *left;
    Node *right;
    Node(T data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
template <class T>
class BST
{
public:
    Node<T> *base;
    BST()
    {
        base=NULL;
    }
    Node<T> *insertNode(Node<T> *root, T data)
    {
        if (root == NULL)
        {
            Node<T> *temp = new Node<T>(data);
            return temp;
        }
        if (root->data > data)
        {
            root->left = insertNode(root->left, data);
        }
        else
        {
            root->right = insertNode(root->right, data);
        }
        return root;
    }
    bool search(Node<T> *root, T x)
    {
        if (root == NULL)
            return false;
        if(root->data==x)return true;
        if (x < root->data)
            return search(root->left, x);
        return search(root->right, x);
    }
    void display(Node<T> *root)
    {
        if (root == NULL)
            return;
        display(root->left);
        cout << root->data << " ";
        display(root->right);
    }
};
int main()
{
    // BST<int> b;
    // b.base=b.insertNode(b.base, 5);
    // b.base=b.insertNode(b.base,4);
    // b.base=b.insertNode(b.base, 2);
    // b.base=b.insertNode(b.base, 3);
    // // b.base=b.insertNode(b.base, 7989);
    // // b.base=b.insertNode(b.base, 45);
    // // b.base=b.insertNode(b.base, 0);
    // // b.insertNode(b.base, 2);
    // b.display(b.base);
    vector<int>a={2,4,2,2,2,};
    char ch=0;
    cout<<char(91)<<endl;
}