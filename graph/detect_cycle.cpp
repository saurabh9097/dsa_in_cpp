//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        bool *vis=new bool[V];
        memset(vis,0,V);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(is(i,adj,vis,-1))return true;
            }
        }
        return false;
    }
    bool is(int v,vector<int>adj[],bool*vis,int parent){
        vis[v]=true;
        for(auto i:adj[v]){
            if(!vis[i]){
                if(is(i,adj,vis,v))return true;
            }
            else if(parent!=i){
                return true;
            }
        }
        return false;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends