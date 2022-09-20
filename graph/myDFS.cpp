//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[])
    {
        // Code here
        vector<int> ans;
        bool *vis = new bool[V];
        memset(vis, 0, V);
        for (int i = 0; i < V; i++)
        {
            if (vis[i] == false)
            {
                dfsOfGraphutil(i, adj, vis, ans);
            }
        }
        return ans;
    }
    void dfsOfGraphutil(int v, vector<int> adj[], bool *vis, vector<int> &ans)
    {
        vis[v] = true;
        ans.push_back(v);
        for (auto i : adj[v])
        {
            if (!vis[i])
            {
                dfsOfGraphutil(i, adj, vis, ans);
            }
        }
    }
};

//{ Driver Code Starts.
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends