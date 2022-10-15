// Kruskal's algorithm is a minimum spanning tree algorithm that takes a graph as input and finds the subset of the edges of that graph which

//  ->form a tree that includes every vertex
//  ->has the minimum sum of weights among all the trees that can be formed from the graph
// We start from the edges with the lowest weight and keep adding edges until we reach our goal.

// The steps for implementing Kruskal's algorithm are as follows:

// Sort all the edges from low weight to high
// Take the edge with the lowest weight and add it to the spanning tree. If adding the edge created a cycle, then reject this edge.
// Keep adding edges until we reach all vertices.

// Any minimum spanning tree algorithm revolves around checking if adding an edge  creates a loop or not.
#include <bits/stdc++.h>
using namespace std;
#define edge pair<int, int>

int find_set(int u, vector<int> parent)
{
    // If i is the parent of itself
    if (parent[u] == u)
        return u;
    // Else if i is not the parent of itself
    // Then i is not the representative of his set,
    // so we recursively call Find on its parent
    return find_set(parent[u], parent);
}

// Making two nodes of same set
void union_set(int u, int v, vector<int> &parent)
{
    parent[u] = parent[v];
}

void kruskals(vector<pair<int, edge>> &Graph, vector<pair<int, edge>> &MST, int n)
{
    // Making Parent Vector
    vector<int> parent(n, 0);
    for (int i = 0; i < n; i++)
    {
        parent[i] = i;
    }
    // Graph will sorted by weights
    sort(Graph.begin(), Graph.end());

    // Now we will iterate edges in increasing order and add them in the MST if there is not a cycle
    for (int i = 0; i < Graph.size(); i++)
    {
        pair<int, edge> edg = Graph[i];

        int uParent = find_set(edg.second.first, parent);
        int vParent = find_set(edg.second.second, parent);
        if (uParent != vParent)
        {
            MST.push_back(Graph[i]);
            // parent[uParent] = parent[vParent];
            union_set(uParent, vParent, parent);
        }
    }
}

void print(vector<pair<int, edge>> MST)
{
    cout << "Edge :"
         << " Weight" << endl;
    for (int i = 0; i < MST.size(); i++)
    {
        cout << MST[i].second.first << " - " << MST[i].second.second << " : "
             << MST[i].first;
        cout << endl;
    }
}

int main()
{
    int n, e;
    cout << "Enter Number of nodes and number of edges" << endl;
    cin >> n >> e;
    vector<pair<int, edge>> Graph;
    vector<pair<int, edge>> MST;
    for (int i = 0; i < e; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        Graph.push_back({w, {u, v}});
    }
    kruskals(Graph, MST, n);
    print(MST);
    return 0;
}