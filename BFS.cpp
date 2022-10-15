#include <bits/stdc++.h>
using namespace std;

void bfs(vector<vector<int>> &graph, int source, vector<bool> &vis)
{
    queue<int> q;
    q.push(source);
    vis[source] = true;
    while (!q.empty())
    {
        int curr = q.front();
        q.pop();
        cout << curr << " ";
        for (int neigh : graph[curr])
            if (!vis[neigh])
            {
                q.push(neigh);
                vis[neigh] = true;
            }
    }
}

int main()
{
    int n, e;
    cout << "Enter the Number of Nodes : " << endl;
    cin >> n;
    cout << "Enter the number of Edges : " << endl;
    cin >> e;
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
            bfs(graph, i, vis);
    }
    return 0;
}