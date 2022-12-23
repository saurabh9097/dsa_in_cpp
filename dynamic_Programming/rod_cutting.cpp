//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
  public:
    int dp[1005];
    int solve(int len_to_cut,int arr[],int n){
        if(len_to_cut==0) return 0;
        if(dp[len_to_cut]!=-1)return dp[len_to_cut];
        int ans=0;
        for(int i=1;i<=n;i++){
            if(len_to_cut-i>=0)
                ans=max(ans,solve(len_to_cut-i,arr,n)+arr[i-1]);
        }
        return dp[len_to_cut]=ans;
    }
    int cutRod(int price[], int n) {
        //code here
        memset(dp,-1,sizeof(dp));
        return solve(n,price,n);
    }
};

//{ Driver Code Starts.

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends