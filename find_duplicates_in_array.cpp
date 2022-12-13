//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

#define pb push_back
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
        // First check all the values that are
    // present in an array then go to that
    // values as indexes and increment by
    // the size of array
    for (int i = 0; i < n; i++) 
    {
        int index = arr[i] % n;
        arr[index] += n;
    }

    // Now check which value exists more
    // than once by dividing with the size
    // of array
    // if it is true then push that index into result vector;
    // and return result vector.
    vector<int>res;
    for (int i = 0; i < n; i++)
    {
        if ((arr[i] / n) >= 2)
            res.push_back(i);
    }
    if(res.size()==0)res.pb(-1);
    return res;
}
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends