#include<bits/stdc++.h>
using namespace std;    
template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };


class info{
    public:
    int maxi;
    int mini;
    bool isBST;
    int size;
    
};
info solve(TreeNode<int>*root,int &ans){
    if(root==NULL)
        return {INT_MIN,INT_MAX,true,0};
    info left=solve(root->left,ans);
    info right=solve(root->right,ans);
    info CurrNode;
    CurrNode.size=left.size+right.size+1;
    CurrNode.maxi=max(root->data,right.maxi);
    CurrNode.mini=min(root->data,left.mini);
    if(left.isBST&&right.isBST&&(root->data>left.maxi&&root->data<right.mini))
        CurrNode.isBST=true;
    else
        CurrNode.isBST=false;
    if(CurrNode.isBST)
        ans=max(ans,CurrNode.size);
    return CurrNode;
}
int largestBST(TreeNode<int>* root) 
{
    // Write your code here.
    int res=0;
    solve(root,res);
    return res;
}
