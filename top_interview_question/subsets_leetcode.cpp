#include<bits/stdc++.h>
using namespace std;



class Solution {
public:
void powerset(set<vector<int>> &res, vector<int> s,int i,vector<int>&curr){
    int n=s.size();
    if(i==n){
        res.insert(curr);
        
        return;
    }
    powerset(res,s,i+1,curr);
    curr.push_back(s[i]);
    powerset(res,s,i+1,curr);
    curr.pop_back();
}
    vector<vector<int>> subsets(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        vector<int>temp;
        set<vector<int>> res;
        powerset(res,nums,0,temp);
        vector<vector<int>>ans(res.begin(),res.end());
        return ans;
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