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

// not passing all the test cases need to be optimised

// class Solution {
// public:
//     bool isSymmetric(TreeNode* root) {
//         vector<int>lefttree;
//         stack<TreeNode*> s;
//         TreeNode*l=root;
//         while(l||!s.empty()){
//             if(l!=NULL){
//                 s.push(l);
//                 l=l->left;
//             }
//             else{
//                 TreeNode*temp=s.top();
//                 s.pop();
//                 lefttree.push_back(temp->val);
//                 l=temp->right;
//             }
//         }
//         // delete s;
//         while(!s.empty()){
//             s.pop();
//         }
//         l=root;
//         // stack<TreeNode*> s;
//         vector<int>righttree;
//         while(l||!s.empty()){
//             if(l!=NULL){
//                 s.push(l);
//                 l=l->right;
//             }
//             else{
//                 TreeNode*temp=s.top();
//                 s.pop();
//                 righttree.push_back(temp->val);
//                 l=temp->left;
//             }
//         }
//         for(int i=0;i<lefttree.size();i++){
//             if(lefttree[i]!=righttree[i])return false;
//         }
//         return true;
//     }
// };

class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        
        if(root==NULL) return true; //Tree is empty
        
        return isSymmetricTest(root->left,root->right);
    }
    
    bool isSymmetricTest(TreeNode* p , TreeNode* q){
        if(p == NULL && q == NULL) //left & right node is NULL 
            return true; 
        
        else if(p == NULL || q == NULL) //one of them is Not NULL
            return false; 
        
        else if(p->val!=q->val) 
            return false;
        
        return isSymmetricTest(p->left,q->right) && isSymmetricTest(p->right,q->left); //comparing left subtree's left child with right subtree's right child --AND-- comparing left subtree's right child with right subtree's left child
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