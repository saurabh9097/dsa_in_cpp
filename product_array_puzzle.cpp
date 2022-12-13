//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int> &nums, int n)
    {

        // code here

        // Compute product of all elements of array in from left and right in left(let) and right(let) array.
        // Then start traversing from i = 0. For every element the answer will left(i-1) * right(i+1). 
        // Handle corner cases for first and last element.
        if(n==1)
        {
            return {1};
        }
        vector<long long> left(n);
        vector<long long> right(n);
        vector<long long> res;
        long long l = 1, r = 1;
        for (int i = 0; i < n; i++)
        {
            l *= nums[i];
            left[i] = l;
        }
        for (int i = n - 1; i >= 0; i--)
        {
            r *= nums[i];
            right[i] = r;
        }
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                res.push_back(right[i + 1]);
            }
            else if (i == n - 1)
            {
                res.push_back(left[i - 1]);
            }
            else
            {
                res.push_back(left[i - 1] * right[i + 1]);
            }
        }
        return res;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; // number of test cases
    cin >> t;
    while (t--)
    {
        int n; // size of the array
        cin >> n;
        vector<long long int> arr(n), vec(n);

        for (int i = 0; i < n; i++) // input the array
        {
            cin >> arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr, n); // function call

        for (int i = 0; i < n; i++) // print the output
        {
            cout << vec[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends