#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>> &graph, int source, vector<bool> &vis)
{
    cout << source << " ";
    vis[source] = true;
    for (int neigh : graph[source])
        if (!vis[neigh])
            dfs(graph, neigh, vis);
}

int main()
{
    int n, e;
    cin >> n >> e;
    vector<vector<int>> graph(n);
    vector<bool> vis(n, false);
    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
            dfs(graph, i, vis);
    }
    return 0;
}