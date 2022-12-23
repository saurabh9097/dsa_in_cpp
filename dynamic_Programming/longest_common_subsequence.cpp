#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int longestCommonSubsequence(string &text1, string &text2, int m, int n, int memo[][1001])
{
    if (m == 0 || n == 0)
    {
        return 0;
    }
    if (memo[m][n] != -1)
    {
        return memo[m][n];
    }
    if (text1[m - 1] == text2[n - 1])
    {
        return memo[m][n] = 1 + longestCommonSubsequence(text1, text2, m - 1, n - 1, memo);
    }
    else
    {
        return memo[m][n] = max(longestCommonSubsequence(text1, text2, m - 1, n, memo), longestCommonSubsequence(text1, text2, m, n - 1, memo));
    }
}

// int longestCommonSubsequence(string text1, string text2)
// {
//     int m = text1.size(), n = text2.size();
//     int memo[1001][1001];
//     for (int i = 0; i < 1001; i++)
//     {
//         for (int j = 0; j < 1001; j++)
//         {
//             memo[i][j] = -1;
//         }
//     }
//     return longestCommonSubsequence(text1, text2, m, n, memo);
// }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string text1, text2;
    cin >> text1 >> text2;
    int dp[1005][1001];

    memset(dp, -1, sizeof(dp));
    int m = text1.size();
    int n = text2.size();
    ll len = longestCommonSubsequence(text1, text2, m, n, dp);
    // string sss=ss.str();
    // reverse(sss.begin(),sss.end());
    cout << len;
    ll i = 0, j = 0;

    string ans = "";
    // while (len)
    // {
    //     if (s[i] == t[j])
    //     {
    //         ans.pb(s[i]);
    //         i++;
    //         j++;
    //         len--;
    //     }
    //     else
    //     {
    //         if (dp[i][j + 1] > dp[i + 1][j])
    //             j++;
    //         else
    //             i++;
    //     }
    // }
    cout << ans << endl;
}