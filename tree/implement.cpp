#include <bits/stdc++.h>
#include "binarytree.h"
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int data)
    {
        this->data = data;
    }
};
class Depth
{
public:
    int data;
    Depth(int data)
    {
        this->data = data;
    }
};
node *createTree()
{
    node *root = NULL;
    cout << "Enter data: ";
    int temp;
    cin >> temp;
    if (temp == -1)
        return NULL;
    root = new node(temp);
    cout << "Enter left for " << temp << ": " << endl;
    root->left = createTree();
    cout << "Enter right for " << temp << ": " << endl;
    root->right = createTree();
    return root;
}
void inordertraverse(node *root)
{
    if (root != NULL)
    {
        inordertraverse(root->left);
        cout << root->data << " ";
        inordertraverse(root->right);
    }
}
void preordertraverse(node *root)
{
    if (root != NULL)
    {
        cout << root->data << " ";
        inordertraverse(root->left);
        inordertraverse(root->right);
    }
}
void postordertraverse(node *root)
{
    if (root != NULL)
    {
        inordertraverse(root->left);
        inordertraverse(root->right);
        cout << root->data << " ";
    }
}
void levelOrderTraverse(node *root)
{
    queue<node *> res;
    res.push(root);
    res.push(NULL);
    while (!res.empty())
    {
        cout << res.front()->data << " ";
        if (res.front()->left != NULL)
            res.push(res.front()->left);

        if (res.front()->right != NULL)
            res.push(res.front()->right);
        res.pop();
        if (res.front() == NULL)
        {
            res.pop();
            if (res.empty())
            {

                break;
            }
            res.push(NULL);
            cout << endl;
        }
    }
}
int height(node *root)
{
    if (root == NULL)
        return 0;
    return max(height(root->left), height(root->right)) + 1;
}
int size(node *root)
{
    if (root == NULL)
        return 0;
    return size(root->left) + size(root->right) + 1;
}
int diameter(node *root)
{
    if (root == NULL)
        return 0;
    int ldiameter = diameter(root->left);
    int rdiameter = diameter(root->right);
    int cur = height(root->left) + height(root->right) + 1;
    return max({ldiameter, rdiameter, cur});
}
int ans = 0;
int diameterOptimised(node *root)
{
    if (root == NULL)
        return 0;
    int lh = diameterOptimised(root->left);
    int rh = diameterOptimised(root->right);
    ans = max(ans, lh + rh + 1);
    return max(lh, rh) + 1;
}
int maximum(node *root)
{
    if (root == NULL)
        return INT_MIN;
    return max(root->data, max(maximum(root->left), maximum(root->right)));
}
int minimum(node *root)
{
    if (root == NULL)
        return INT_MAX;
    return min(root->data, min(minimum(root->left), minimum(root->right)));
}
void leftviewutil(node *root, vector<node *> &res, int level)
{
    if (root == NULL)
        return;
    if (res[level] == NULL)
    {
        res[level] = root;
    }
    leftviewutil(root->left, res, level + 1);
    leftviewutil(root->right, res, level + 1);
}
void leftview(node *root)
{
    int heigt = height(root);
    vector<node *> res(heigt, NULL);
    leftviewutil(root, res, 0);
    for (node *i : res)
    {
        if (i != NULL)
            cout << i->data << endl;
    }
}
void rightviewutil(node *root, vector<node *> &res, int level)
{
    if (root == NULL)
        return;
    if (res[level] == NULL)
    {
        res[level] = root;
    }
    rightviewutil(root->right, res, level + 1);
    rightviewutil(root->left, res, level + 1);
}
void rightview(node *root)
{
    int heigt = height(root);
    vector<node *> res(heigt, NULL);
    rightviewutil(root, res, 0);
    for (node *i : res)
    {
        if (i != NULL)
            cout << i->data << endl;
    }
}

void topView(node *root)
{
    queue<pair<int, node *>> q;
    map<int, int> res;
    q.push({0, root});
    while (!q.empty())
    {
        pair<int, node *> temp = q.front();
        q.pop();
        if (res.find(temp.first) == res.end())
            res[temp.first] = temp.second->data;
        if (temp.second->left != NULL)
        {
            q.push({temp.first - 1, temp.second->left});
        }
        if (temp.second->right != NULL)
        {
            q.push({temp.first + 1, temp.second->right});
        }
    }
    for (auto i : res)
        cout << i.second << " ";
}
void bottomView(node *root)
{
    queue<pair<int, node *>> q;
    map<int, int> res;
    q.push({0, root});
    while (!q.empty())
    {
        pair<int, node *> temp = q.front();
        q.pop();
        res[temp.first] = temp.second->data;
        if (temp.second->left != NULL)
        {
            q.push({temp.first - 1, temp.second->left});
        }
        if (temp.second->right != NULL)
        {
            q.push({temp.first + 1, temp.second->right});
        }
    }
    for (auto i : res)
        cout << i.second << " ";
}
node *prev1 = NULL;
node *head1 = NULL;
void tree2DLL(node *root)
{
    if (root == NULL)
        return;
    tree2DLL(root->left);
    if (prev1 == NULL)
        head1 = root;
    else
    {
        prev1->right = root;
        root->left = prev1;
    }
    prev1 = root;
    tree2DLL(root->right);
}
node *lowestCommonAncestor(node *root, int a, int b)
{
    if (root == NULL)
        return NULL;
    if (root->data == a || root->data == b)
        return root;
    node *left = lowestCommonAncestor(root->left, a, b);
    node *right = lowestCommonAncestor(root->right, a, b);
    if (left == NULL)
        return right;
    if (right == NULL)
        return left;
    return root;
}
// // int ans=-1;
// int minTime(node *root, int target)
// {
//     Depth *depth = new Depth(-1);
//     burn(root,target,depth);
//     return ans;

// }
// int burn(node*root,int target,Depth*depth){
//     if(root==NULL)return 0;
//     if(root->data==target){
//         depth->data=1;
//         return 1;
//     }
//     Depth *ld=new Depth(-1);
//     Depth *rd=new Depth(-1);
//     int lh=burn(root->left,target,ld);
//     int rh=burn(root->right,target,rd);
//     if(ld->data!=-1){
//         ans=max(ans,ld->data+1+rh);
//         depth->data=ld->data+1;
//     }
//     else if(rd->data!=-1){
//         ans=max(ans,rd->data+1+lh);
//         depth->data=rd->data+1;
//     }
//     return max(lh,rh)+1;
// }

int main()
{
    node *root = createTree();
    // int depth = -1;
    // vector<int> a = {1, 2, 4, 3};

    // topView(root);
    // bottomView(root);
    levelOrderTraverse(root);
}