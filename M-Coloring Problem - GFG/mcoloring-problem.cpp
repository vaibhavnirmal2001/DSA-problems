// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//Function to determine if graph can be coloured with at most M colours such
//that no two adjacent vertices of graph are coloured with same colour.

bool isPossible(int k,int n,int color[],bool graph[101][101], int V)
{
    for(int i=0;i<V;i++)
    {
        if(n != i && graph[n][i] == 1 && color[i] == k)
          return false;
    }
    return true;
}

bool solve(int n,int color[],bool graph[101][101], int m, int V)
{
    if(n == V)return true;
    
    for(int i=1;i<=m;i++)
    {
        if(isPossible(i,n,color,graph,V))
        {
            color[n] = i;
            if(solve(n+1,color,graph,m,V) == true)return true;
            color[n] = 0;
        }
    }
    return false;
}

bool graphColoring(bool graph[101][101], int m, int V)
{
    int color[V] = {0};
    if(solve(0,color,graph,m,V)==true)return true;
    return false;
}

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, e;
        cin >> n >> m >> e;
        int i;
        bool graph[101][101];
        for (i = 0; i < n; i++) {
            memset(graph[i], 0, sizeof(graph[i]));
        }
        for (i = 0; i < e; i++) {
            int a, b;
            cin >> a >> b;
            graph[a - 1][b - 1] = 1;
            graph[b - 1][a - 1] = 1;
        }
        cout << graphColoring(graph, m, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends