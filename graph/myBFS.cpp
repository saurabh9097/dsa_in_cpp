#include <bits/stdc++.h>
using namespace std;
bool bfs(vector<vector<int>> &adj, int source, int dest, int v, int *dist, int *pred, bool *vis)
{

    queue<int> res;
    res.push(source);
    // cout << source << endl;
    dist[source] = 0;
    vis[source]=true;
    while (!res.empty())
    {
        int curr = res.front();
        res.pop();
        for (int i = 0; i < adj[curr].size(); i++)
        {
            if (vis[adj[curr][i]] == false)
            {
                // cout << adj[curr][i] << endl;
                res.push(adj[curr][i]);
                vis[adj[curr][i]] = true;
                dist[adj[curr][i]] = dist[curr] + 1;
                pred[adj[curr][i]] = curr;
                if (adj[curr][i] == dest)
                    return true;
            }
        }
    }
    return false;
}
int main()
{
    vector<vector<int>> adj = {
        {},
        {2, 5, 3},
        {1, 5},
        {1, 4},
        {3, 5, 6},
        {2, 1, 4, 6},
        {4, 5},
        {}};
    int v = 7;
    int e = 8;
    int *pred = new int[v + 1];
    int *dist = new int[v + 1];
    bool *vis = new bool[v + 1];
    memset(dist, 0, v + 1);
    memset(pred, 0, v + 1);
    memset(vis, false, v + 1);
    int components = 0;
    
    for (int i = 1; i <= v; i++)
    {
        if (vis[i] == false)
        {
            components++;

            bfs(adj, 1, 7, v, dist, pred, vis);
        }
    }

    cout << vis[7] << endl
         << dist[7] << endl
         << pred[7] << " " << components;
}