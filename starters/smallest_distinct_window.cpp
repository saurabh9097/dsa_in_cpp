//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int findSubString(string str)
    {
        // Your code goes here
        map<char,int>resstr;
        map<char,int>res;
        // for(int i=0;i<256;i++){
        //     char ch=i;
        //     resstr[ch]=res[ch]=0;
        // }
        for(int i=0;i<str.size();i++){

            resstr[str[i]]=1;
        }
         for(int i=0;i<str.size();i++){

            res[str[i]]=0;
        }
        
        int ans=str.size();
        int i=0;int j=0;
        int n=str.size();
        while(i<n&&j<=n&&i<=j){
            int c=0;
            for(auto k:resstr){
                if(res[k.first]==0){
                    c=1;
                    // cout<<" yes ";
                    break;
                }
            }
            if(c==1){
                res[str[j++]]++;
                //  cout<<"a";
            }
            else{
                  ans=min(ans,j-i);
                if(res[str[i]]>0){
                    res[str[i]]--;
                    i++;
                    // cout<<"s";
                }
                else {
              
                i++;
                // cout<<"d";
                }
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
// Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;
    }
    return 0;
}
// } Driver Code Ends