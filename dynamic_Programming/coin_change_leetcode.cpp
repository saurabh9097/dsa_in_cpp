#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int dp[10010];
  long long int coin_change(int amount,vector<int>& coins,int N){
      if(amount==0){return 0;}
      if(dp[amount]!=-1){return dp[amount];}
      long long int ans=INT_MAX;
      for(int i=0;i<N;i++){
          if(amount-coins[i]>=0)
          ans=min(ans+0LL,coin_change(amount-coins[i],coins,N)+1LL);
          
      }
      return dp[amount]=ans;
  }
    int coinChange(vector<int>& coins, int amount) {
          memset(dp,-1,sizeof(dp));
        int N=coins.size();
        long long int ans=coin_change(amount,coins,N);
        return ans==INT_MAX?-1:ans;
    }
};