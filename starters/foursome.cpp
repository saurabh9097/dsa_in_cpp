//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int kk) {
        // Your code goes here
        vector<vector<int>>res;
        set<vector<int>>s;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size()-3;i++){
            for(int j=i+1;j<arr.size()-2;j++){
                int k=j+1,l=arr.size()-1;
                while(k<l){
                    if(arr[i]+arr[j]+arr[k]+arr[l]==kk){
                        // vector<int>temp{arr[i],arr[j],arr[ptr1],arr[ptr2]};
                        s.insert({arr[i],arr[j],arr[k],arr[l]});
                        k++;
                        l--;
                    }
                    else if(arr[i]+arr[j]+arr[k]+arr[l]<kk){
                        k++;
                    }
                    else{
                        l--;
                    }
                }
            }
        }
         for(auto i:s)
       {
           res.push_back(i);
       }
       return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends