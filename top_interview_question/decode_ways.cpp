#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int dp[101];
    int help(string &s, int i){
        if(i>=s.length())return 1;
        if(dp[i]!=-1)return dp[i];

        int ans=0, op1=s[i]-'0', op2=0;
        if(i<s.size()-1) op2=op1*10+s[i+1]-'0';
        if(op1>0)ans+=help(s,i+1);
        if(op1>0&&op2>0&&op2<=26)ans+=help(s,i+2);
        return dp[i]=ans;
    }
    int numDecodings(string s) {
        memset(dp,-1,sizeof dp);
        return help(s,0);     
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