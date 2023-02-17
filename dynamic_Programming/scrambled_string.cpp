//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
//Back-end complete function Template for C++
class Solution{
    public:
    unordered_map<string,bool>mp;
    bool isScramble(string S1, string S2){
        //code here
        return helper(S1,S2);
    }   
    bool helper(string s1,string s2){
        if(s1.compare(s2)==0){
            mp.insert({s1+s2,true});
            return true;
        }
        if(mp.find(s1+s2)!=mp.end()){
            return mp[s1+s2];
        }
        
        int n=s1.size();
        for(int i=1;i<n;i++){
            // first part just partition at i
            string a=s1.substr(0,i);
            string b=s2.substr(0,i);
            string c=s1.substr(i,n-i);
            string d=s2.substr(i,n-i);
            if(helper(a,b)&&helper(c,d)){
                mp.insert({s1+s2,true});
                return true;
                
            }
            // second part partition at i in first and n-i in second to get 
            // reversed at any non leaf node
            string e=s1.substr(0,i);
            string f=s2.substr(n-i,i);
            string g=s1.substr(i,n-i);
            string h=s2.substr(0,n-i);
            if(helper(e,f)&&helper(g,h)){
                mp.insert({s1+s2,true});
                return true;
            }
        }
        mp.insert({s1+s2,false});
        return false;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--){
        string S1, S2;
        cin>>S1>>S2;
        Solution ob;
        
        if (ob.isScramble(S1, S2)) {
            cout << "Yes";
        }
        else {
            cout << "No";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends