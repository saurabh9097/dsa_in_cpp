//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
/*You are required to complete this method */

class Solution
{
public:
    bool solve(int ind, int k, int bucketNum, int bucketSum, int reqSum, vector<int> &picked, vector<int> &num)
    {
        if (bucketNum == k + 1)
            return true;
        if (bucketSum == reqSum)
            return solve(0, k, bucketNum + 1, 0, reqSum, picked, num);
        if (bucketSum > reqSum)
            return false;
        if (ind >= num.size())
            return false;

        bool ans;
        if (picked[ind])
        {
            return solve(ind + 1, k, bucketNum, bucketSum, reqSum, picked, num);
        }
        else
        {
            bucketSum += num[ind];
            picked[ind] = 1;
            ans = solve(ind + 1, k, bucketNum, bucketSum, reqSum, picked, num);
            bucketSum -= num[ind];
            picked[ind] = 0;
            ans |= solve(ind + 1, k, bucketNum, bucketSum, reqSum, picked, num);
        }
        return ans;
    }
    bool isKPartitionPossible(int a[], int n, int k)
    {
        // Your code here
        vector<int> nums(a, a + n);
        int sum = accumulate(nums.begin(), nums.end(), 0);
        if (sum % k != 0)
            return false;

        vector<int> picked(n, 0);
        sort(nums.begin(), nums.end());
        reverse(nums.begin(), nums.end());
        // int dp[17][17][sum/k];
        // memset(dp,-1,sizeof(dp));
        return solve(0, k, 1, 0, sum / k, picked, nums);
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;

        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int k;
        cin >> k;
        Solution obj;
        cout << obj.isKPartitionPossible(a, n, k) << endl;
    }
}
// } Driver Code Ends