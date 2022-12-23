#include<bits/stdc++.h>
using namespace std;
class Solution {
int solveSubset(int dp[][100005],int &ans, int ind, vector<int>&a,int remain){
    if(remain==0){
        ans=1;
        return 0;
    }
    if(ind<0)return 0;
    if(dp[ind][remain]!=-1)return dp[ind][remain];
    int res=solveSubset(dp,ans,ind-1,a,remain);
    if(remain-a[ind]>=0){
        res=max(res,solveSubset(dp,ans,ind-1,a,remain-a[ind]));
    }
    return dp[ind][remain]=ans;
    
}

int Solution::solve(vector<int> &A, int B) {
    int n=A.size();
    int dp[105][100005];
    memset(dp,-1,sizeof(dp));
    int ans=0; 
    solveSubset(dp,ans,n-1,A,B);
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