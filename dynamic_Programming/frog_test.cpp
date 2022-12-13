#include<bits/stdc++.h>
using namespace std;
const int N (1e5+10);
int dp[N];
int jump(int h[],int k,int i){
    if(dp[i]!=-1)return dp[i];
	if(i==0)return 0;
	int ans=INT_MAX;
	for(int j=1;j<=k;j++){
		if(i-j>=0){
			ans=min(jump(h,k,i-j)+abs(h[i]-h[i-j]),ans);
		}
	}
	return dp[i]=ans;
}
int main(){
	int n;
	cin>>n;
	int h[n];
	int k;
	cin>>k;
	for(int i=0;i<n;i++){
		int t;
		cin>>t;
		h[i]=t;

	}
    memset(dp,-1,sizeof(dp));
	cout<<jump(h,k,n-1);
	
}