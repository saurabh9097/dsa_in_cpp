#include <bits/stdc++.h> 
using namespace std;
vector<pair<pair<int, int>, int>> calculatePrimsMST(int n, int m, vector<pair<pair<int, int>, int>> &g)
{
    // Write your code here.
    unordered_map<int, list<pair<int, int>>> adj;
    // min heap
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
    for (int i = 0; i < g.size(); i++)
    {
        int u = g[i].first.first;
        int v = g[i].first.second;
        int w = g[i].second;
        adj[u].push_back(make_pair(v, w));
        adj[v].push_back(make_pair(u, w));
    }
    vector<int> key(n + 1);
    vector<bool> mst(n + 1);
    vector<int> parent(n + 1);
    for (int i = 0; i <= n; i++)
    {
        key[i] = INT_MAX;
        parent[i] = -1;
        mst[i] = false;
    }
    key[1] = 0;
    parent[1] = -1;
    // push in priority_queue (weight =0,vertex=1)
    q.push({0,1});
    while(!q.empty())
    {
        int u=q.top().second;
        q.pop();
        // find the min wali node;
//         if(mst[u]){
//             continue;
//         }
        // mark min node as true;
        mst[u] = true;

        for (auto it : adj[u])
        {   
            int v = it.first;
            int w = it.second;
            
            if (mst[v] == false && w < key[v])
            {   
                q.push({w,v});
                parent[v] = u;
                key[v] = w;
            }
        }
    }
    vector<pair<pair<int, int>, int>> res;
    // since parent of 0th node is -1 so we will run a loop from 2 to n(included)
    // and make our result vector having a pair of(pair of (u->v) and weight)
    for (int i = 2; i <= n; i++)
    {
        res.push_back({{parent[i], i}, key[i]});
    }

    return res;
}
