#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int dp[205][10050];

    int ans=0;
    int solve(int ind,vector<int>&num,int remain){
        if(remain==0){
            ans=1;
            return 0;
        }
        if(ind<0)return 0;
        if(dp[ind][remain]!=-1)
            return dp[ind][remain];
        int res=solve(ind-1,num,remain);
        if(remain-num[ind]>=0)
            res=max(res,solve(ind-1,num,remain-num[ind]));

        return dp[ind][remain]=res;
    }

    bool canPartition(vector<int>& nums) {
        int sum=accumulate(nums.begin(),nums.end(),0,[](int a,int b){return a+b;});
      
        if(sum&1)return 0;
        memset(dp,-1,sizeof(dp));
        solve(nums.size()-1,nums,sum/2);

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