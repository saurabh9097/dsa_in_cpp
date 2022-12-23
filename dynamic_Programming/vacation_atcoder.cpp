#include <bits/stdc++.h>
using namespace std;
int a[100005], b[100005], c[100005];
long long dp[100005][4];
long long solve(int ind,char ch){
    if(ind<0)return 0;
    if(dp[ind][ch-'A']!=-1)return dp[ind][ch-'A']; 
    long long ans=0;
    if(ch=='A'){
        ans=max(solve(ind-1,'B')+b[ind],solve(ind-1,'C')+c[ind]);
    }
    else if(ch=='B'){
        ans=max(solve(ind-1,'A')+a[ind],solve(ind-1,'C')+c[ind]);
    }
    else if(ch=='C'){
        ans=max(solve(ind-1,'B')+b[ind],solve(ind-1,'A')+a[ind]);
    }
    else
    {
        ans=max({solve(ind-1,'B')+b[ind],solve(ind-1,'A')+a[ind],solve(ind-1,'C')+c[ind]});
    }
    return dp[ind][ch-'A']=ans;
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    memset(dp,-1,sizeof(dp));
    for (int i = 0; i < n; i++)
    {
        cin>>a[i]>>b[i]>>c[i];
    }
    cout<<solve(n-1,'I');
}