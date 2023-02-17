//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

long long helper(int n, int ind, int prev,int visit , vector<vector<bool>> &adj, vector<int> &arr ,vector<vector<vector<long long>>> &dp)
{
    // vector<vector<long long>>&dp
    if(ind>=n)return 1;
    if(dp[ind][prev][visit]!=-1)return dp[ind][prev][visit];
    long long ans=0;
    for(int i=0;i<n;i++) {
            if((visit&(1<<i))==0) 
            {
                // visit[i]=1;
                if(prev==-1) {
                ans+=helper(n,ind+1,arr[i],visit+(1<<i),adj,arr,dp);
            }
            else{
                
                if(adj[prev][arr[i]]==1){
                    cout<<i+10<<endl;
                    ans+=helper(n,ind+1,arr[i],visit+(1<<i),adj,arr,dp);
                }
            }
        }
    }
    // cout<<ans;
    return dp[ind][prev][visit]=ans;
    
}


class Solution {
  public:
    long long int luckyPermutations(int N, int M, vector<int> arr, vector<vector<int>> graph) {
        
        // Creating adjacency matrix, adj
        // Initializing adj
        // setting adj as true for all edges
        vector<vector<bool>> adj(N+1,vector<bool>(N+1,0));
        
        for(auto edge:graph) adj[edge[0]][edge[1]]=adj[edge[1]][edge[0]]=1;
        
        // creating and initializing dp
        vector<vector<vector<long long>>> dp(N+1, vector<vector<long long>>(N+1, vector<long long>(1<<N, -1)));
        // memset(dp,-1,sizeof(dp));
        
        // for(int i=0; i<N; i++) dp[i][(1<<i)] = 1; // This is same as this line in rec "if(subset == (1<<curr)) return 1;"
        
        // Answer is all possible ways where every node is visited(i.e. subset with all 1's) 
        // long long ans = 0;
        // for(int i=0; i<N; i++)
        // {
        //     ans+= rec(i,(1<<N)-1,N,adj,arr,dp);
        // }
        
        return helper(N,0,-1,0,adj,arr,dp);
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin >> N >> M;
        vector<int> arr(N);
        vector<vector<int>> graph(M, vector<int>(2));
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < 2; j++) {
                cin >> graph[i][j];
            }
        }
        Solution obj;
        cout << obj.luckyPermutations(N, M, arr, graph) << endl;
    }
}

// } Driver Code Ends