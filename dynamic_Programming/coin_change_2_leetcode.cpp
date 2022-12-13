#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int size=coins.size(),x=size+1,y=amount+1;
        vector<vector<int>> dp(x,vector<int>(y,0));
        for(int i=0;i<x;i++)
            dp[i][0]=1;
        for(int i=size-1;i>=0;i--){
            for(int j=1;j<y;j++){
                if(coins[i]<=j)
                    dp[i][j]=dp[i][j-coins[i]] + dp[i+1][j];
                else
                    dp[i][j]=dp[i+1][j];
            }
        }
        return dp[0][amount];
    }
};

// class Solution {
// public:
//      int dp[310][10010];
//     int solve(int ind,vector<int>& coins,int amount){
//          if(amount==0)return 1;
//         if(ind<0)return 0;
//         if(dp[ind][amount]!=-1)return dp[ind][amount];
       
//         int ways =0;
//         for(int coin_amount=0;coin_amount<=amount;coin_amount+=coins[ind]){
//             ways+=solve(ind-1,coins,amount-coin_amount);
//         }
//         return dp[ind][amount]= ways;
//     }
//     int change(int amount, vector<int>& coins) {
//           memset(dp,-1,sizeof(dp));
//         return solve(coins.size()-1,coins,amount);
//     }
// };
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t;
cin>>t;
while(t--){

}
}