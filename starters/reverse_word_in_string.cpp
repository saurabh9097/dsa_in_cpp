//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string &s) 
    { 
        // code here
        int i=0,j=0;
        int n=s.size();
        while(j<=n){
            if(s[j]=='.'||j==n){
                reverse(s.begin()+i,s.begin()+j);
                j++;
                i=j;
            }else{
                j++;
            }
        }
        reverse(s.begin(),s.end());
        return s;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends