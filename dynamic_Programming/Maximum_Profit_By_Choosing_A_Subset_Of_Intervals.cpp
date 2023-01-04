//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  
    // int ans=0;
    int dp[10009];
    
    int binarySearch(vector<vector<int>> &intervals,int val){
        int lo=0,hi=intervals.size()-1,res=intervals.size();
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(intervals[mid][0]<val){
                lo=mid+1;
            }
            else{
                hi=mid-1;
                res=min(res,mid);
            }
        }
        return res;
    }
    int helper(vector<vector<int>> &intervals,int ind,int n){
        if(ind==n)return 0;
        if(ind==n-1)return intervals[ind][2];
        if(dp[ind]!=-1)return dp[ind];
        int ans=0;
        //this interval is not considered in the solution
        ans=max(ans,helper(intervals,ind+1,n));
        int index=binarySearch(intervals,intervals[ind][1]);
        if(index<=n){
            //this interval is considered in the solution so ind will be index; if we consider this interval we will now consider the next interval 
            ans=max(ans,helper(intervals,index,n)+intervals[ind][2]);
        }
        return dp[ind]=ans;
    }
    int maximum_profit(int n, vector<vector<int>> &intervals) {
        
        // Write your code here.
        if(n==1)return intervals[0][2];
        sort(intervals.begin(),intervals.end());
        memset(dp,-1,sizeof(dp));
        return helper(intervals,0,n);
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> intervals(n, vector<int>(3));
        for (int i = 0; i < n; i++) {
            cin >> intervals[i][0] >> intervals[i][1] >> intervals[i][2];
        }
        Solution obj;
        cout << obj.maximum_profit(n, intervals) << endl;
    }
    return 0;
}

// } Driver Code Ends