#include<bits/stdc++.h>
using namespace std;



class Solution {
public:
    // bool ans=false;
    // int dp[10005];
    // bool solve(vector<int>&num,int ind){
    //     cout<<ind<<" ";
    //     if(ind>=num.size()-1){ans=true;return true;}
    //     if(num[ind]==0){return dp[ind]= false;}
    //     if(dp[ind]!=-1)return dp[ind];
    //     bool ansTemp=false;
    //     for(int i=ind+1;i<=ind+num[ind];i++){
    //         cout<<i<<" ";
    //         if(i<=num.size()-1){ 
    //             ansTemp |= solve(num,i);
    //             if(ans)return dp[ind]=true;
    //         }
    //     }
    //     return dp[ind]=ansTemp;
    // }
    bool canJump(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        if(nums.size()==1)return true;
        int j=nums.size()-2;
        int i = j+1;
        while(j>=0){
            if(j+nums[j]>=i){
                i=j;
                j-=1;
            }
            else{
                j-=1;
            }
        }
        return i<=0;

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