//{ Driver Code Starts
// driver code

#include<bits/stdc++.h>
using namespace std;

string LongestPalindromeSubString(string text);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<< LongestPalindromeSubString(s) << endl;
    }
    return 1;
}

// } Driver Code Ends


// return the longest palindrome substring

string LongestPalindromeSubString(string text)
{
    // code here
    int c=1;
    string ans="";
    int n=text.size();
    for(int i=0;i<n;i++){
        int l=i,r=i;
        while(text[l]==text[r] && l>=0 && r<n){
            l--;r++;
        }
        if(c<(r-1)-(l+1)+1){
            c=(r-1)-(l+1)+1;
            ans = text.substr(l,c);
        }
    }
     for(int i=0;i<n-1;i++){
        int l=i,r=i+1;
        if(text[l]==text[r] ){
        while(text[l]==text[r] && l>=0 && r<n){
            l--;r++;
        }
        if(c<(r-1)-(l+1)+1){
            c=(r-1)-(l+1)+1;
            ans = text.substr(l,c);
        }
        }
    }
    return ans;
}
