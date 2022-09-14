//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    string findSum(string X, string Y) {
        // Your code goes here
        string res;
        int sx=X.size()-1;
        int sy=Y.size()-1;
        int mini=min(sx,sy);
        int carry=0;
        int temp=0;
        while(mini>=0){
            int t1=X[sx--]-'0';
            int t2=Y[sy--]-'0';
            carry=temp/10;
            temp=(t1+t2+carry)%10;
            res.insert(0,to_string(temp));
            mini--;
        }
        temp=0;
        if(sx==0){
            while(sy>=0){
            int t2=Y[sy--]-'0';
            carry=temp/10;
            temp=(t2+carry)%10;
            res.insert(0,to_string(temp));
        }
            
        }
        else{
            while(sx>=0){
            int t2=X[sx--]-'0';
            carry=temp/10;
            temp=(t2+carry)%10;
            res.insert(0,to_string(temp));
        }
        }
        return res;
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string x, y;
        cin >> x >> y;
        Solution ob;
        cout << ob.findSum(x, y) << "\n";
    }

    return 0;
}
// } Driver Code Ends