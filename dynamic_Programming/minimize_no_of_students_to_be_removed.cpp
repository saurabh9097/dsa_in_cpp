#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int removeStudents(int H[], int N) {
        // code here
        int dp[N];
        memset(dp,0,sizeof(dp));
        int len=0;
        for(int ind=0;ind<N;ind++){
            int num=H[ind];
            int index=lower_bound(dp,dp+len,num)-dp;
            // cout<<index<<" "<<num<<endl;
            dp[index]=num;
            if(index==len)len++;
        }
        return N-len;
    }
};
//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        int H[N];
        for(int i=0; i<N; i++)
            cin>>H[i];

        Solution ob;
        cout << ob.removeStudents(H,N) << endl;
    }
    return 0;
}