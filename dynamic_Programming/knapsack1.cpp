#include<bits/stdc++.h>
using namespace std;
long long dp[105][100005];
int arr[102][2];
long long solve(int ind ,int w){
	if(w==0)return 0;
	if(ind<0)return 0;
	if(dp[ind][w] != -1) return dp[ind][w];
	long long ans=solve(ind-1,w);
	if(w-arr[ind][0]>=0)
	ans=max(ans,solve(ind-1,w-arr[ind][0])+arr[ind][1]);
	return dp[ind][w]=ans;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long n,w;
	int t;
	cin>>n>>w;
	memset(dp,-1,sizeof(dp));
	for(int i=0;i<n;i++){
		for(int j=0;j<2;j++){
			cin>>t;
			arr[i][j]=t;
		}
	}
	cout<<solve(n-1,w);

}