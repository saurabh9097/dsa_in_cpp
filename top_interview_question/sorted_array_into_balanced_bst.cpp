#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
 
class Solution {
public:
    TreeNode* implement(vector<int>& nums,int l,int h){
        if(l>h)return NULL;
        int m=l+(h-l)/2;
        TreeNode*root=new TreeNode();
        root->val=nums[m];
        root->left=implement(nums,l,m-1);
        root->right=implement(nums,m+1,h);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return implement(nums,0,nums.size()-1);
    }
};

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t;
cin>>t;
while(t--){

}
}