// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int countOfNodes(vector<int> graph[], int n)
    {
        // code here
        vector<bool>visited(n+1, 0);
        queue<int>q;
        int red=0,black=0;
        q.push(1);
        visited[1]=true;
        int level=0;
        while(!q.empty())
        {
            int sz=q.size();
            if(level%2==0)black+=sz;
            else red+=sz;
            while(sz--){
                int node=q.front();
                q.pop();
                for(int i=0; i<graph[node].size(); i++)
                {
                    if(!visited[graph[node][i]])
                    {
                        q.push(graph[node][i]);
                        visited[graph[node][i]]=true;
                    }
                }
            }
            level++;
        }
        return ((red*(red-1))/2)+((black*(black-1))/2);
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>graph[n+1];
        for(int i=0;i<n-1;i++){
            int u, v;
            cin >> u >> v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        Solution ob;
        cout<<ob.countOfNodes(graph, n)<<endl;
    }
    return 0;
}  // } Driver Code Ends