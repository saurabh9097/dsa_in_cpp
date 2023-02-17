#include <bits/stdc++.h>
using namespace std;
int a[100005], b[100005], c[100005];
long long dp[100005][4];
long long solve(int ind,char ch){
    if(ind<0)return 0;
    if(dp[ind][ch-'A']!=-1)return dp[ind][ch-'A']; 
    long long ans=0;
    if(ch=='A'){
        ans=max(solve(ind-1,'B')+b[ind],solve(ind-1,'C')+c[ind]);
    }
    else if(ch=='B'){
        ans=max(solve(ind-1,'A')+a[ind],solve(ind-1,'C')+c[ind]);
    }
    else if(ch=='C'){
        ans=max(solve(ind-1,'B')+b[ind],solve(ind-1,'A')+a[ind]);
    }
    else
    {
        ans=max({solve(ind-1,'B')+b[ind],solve(ind-1,'A')+a[ind],solve(ind-1,'C')+c[ind]});
    }
    return dp[ind][ch-'A']=ans;
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    memset(dp,-1,sizeof(dp));
    for (int i = 0; i < n; i++)
    {
        cin>>a[i]>>b[i]>>c[i];
    }
    cout<<solve(n-1,'I');
}



/*

//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
struct hash_pair {
    template <class T1, class T2>
    size_t operator()(const pair<T1, T2>& p) const
    {
        auto hash1 = hash<T1>{}(p.first);
        auto hash2 = hash<T2>{}(p.second);
 
        if (hash1 != hash2) {
            return hash1 ^ hash2;             
        }
         
        // If hash1 == hash2, their XOR is zero.
          return hash1;
    }
};
class Solution{   
public:

unordered_map<pair<int, int>, int, hash_pair> dp;
long long solve(int ind,char ch,int a[],int b[],int c[]){
    if(ind<0)return 0;
    if(dp.find({ind,(ch-'A')})!=dp.end())return dp[{ind,(ch-'A')}]; 
    long long ans=0;
    if(ch=='A'){
        ans=min(solve(ind-1,'B',a,b,c)+b[ind],solve(ind-1,'C',a,b,c)+c[ind]);
    }
    else if(ch=='B'){
        ans=min(solve(ind-1,'A',a,b,c)+a[ind],solve(ind-1,'C',a,b,c)+c[ind]);
    }
    else if(ch=='C'){
        ans=min(solve(ind-1,'B',a,b,c)+b[ind],solve(ind-1,'A',a,b,c)+a[ind]);
    }
    else
    {
        ans=min({solve(ind-1,'B',a,b,c)+b[ind],solve(ind-1,'A',a,b,c)+a[ind],solve(ind-1,'C',a,b,c)+c[ind]});
    }
    dp[{ind,(ch-'A')}]=ans;
    return ans;
    
}
    long long int distinctColoring(int N, int r[], int g[], int b[]){
        // code here 
        // memset(dp,-1,sizeof(dp));
        return solve(N-1,'I',r,g,b);
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        int r[N],g[N],b[N];
        for(int i = 0; i < N; i++)
            cin >> r[i];
        for(int i = 0; i < N; i++)
            cin >> g[i];
        for(int i = 0; i < N; i++)
            cin >> b[i];
        
        Solution ob;
        cout << ob.distinctColoring(N, r, g, b) << endl;
    }
    return 0; 
}
// } Driver Code Ends

*/