#include <bits/stdc++.h>
using namespace std;
long long dp[105][100005];
int arr[102][2];
long long solve(int ind, int val_left)
{
    if (val_left== 0)
        return 0;
    if (ind < 0)
        return 1e15;;
    if (dp[ind][val_left] != -1)
        return dp[ind][val_left];
    long long ans = solve(ind - 1, val_left);
    if (val_left - arr[ind][1] >= 0)
        ans = min(ans, solve(ind - 1, val_left - arr[ind][1]) + arr[ind][0]);
    return dp[ind][val_left] = ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n, w;
    int t;
    cin >> n >> w;
    memset(dp, -1, sizeof(dp));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> t;
            arr[i][j] = t;
        }
    }
    for(int i=100005;i>=0;i--){
        if(solve(n-1,i)<=w){
            cout<<i<<endl;
            break;
        }
    }
}