#include <bits/stdc++.h>
using namespace std;

void dijisktra(vector<vector<pair<int, int>>> &adj, int source)
{
    int n = adj.size();
    vector<bool> vis(n, false);
    vector<int> dis(n, INT_MAX);
    set<pair<int, int>> st;

    st.insert({0, source});
    dis[source] = 0;

    while (st.size() > 0)
    {
        auto node = *st.begin();
        int v = node.second;
        int v_dis = node.first;
        st.erase(st.begin());
        if (vis[v])
            continue;
        vis[v] = true;
        for (auto neigh : adj[v])
        {
            int neigh_v = neigh.first;
            int neigh_wt = neigh.second;
            if (dis[v] + neigh_wt < dis[neigh_v])
            {
                dis[neigh_v] = dis[v] + neigh_wt;
                st.insert({dis[neigh_v], neigh_v});
            }
        }
    }
    for (int i = 0; i < n; i++)
        cout << "distance from " << source << " to  " << i << " is : - > " << dis[i] << endl;
}
int main()
{
    int n, m;
    cout << "Enter Number of Nodes" << endl;
    cin >> n;
    cout << "Enter number of edges" << endl;
    cin >> m;
    vector<vector<pair<int, int>>> adj(n);
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
    }
    int source;
    cin >> source;
    dijisktra(adj, source);
    return 0;
}
// 0 1 4 0 7 8 1 2 8 1 7 1 2 3 7 2 8 2 2 5 4 3 4 9 3 5 1 4 5 1 5 6 2 6 7 1 6 8 6 7 8 7