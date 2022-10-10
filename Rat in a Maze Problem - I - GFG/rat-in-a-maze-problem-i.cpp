// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    
    void solve(vector<string>& ans,int row,int col,vector<vector<int>> &m, int n,string a)
    {
        if(row == n-1 && col == n-1 && m[row][col] == 1)
        {
            ans.push_back(a);
            return;
        }
        
        if(row>=0 && row<n && col>=0 && col<n && m[row][col] == 1)
        {
            m[row][col] = -1;
            
             if(row < n-1 && m[row+1][col] == 1)
            {
                a += "D";
                solve(ans,row+1,col,m,n,a);
                a.pop_back();
            }
             if(col>0 && m[row][col-1] == 1)
            {
                a += "L";
                solve(ans,row,col-1,m,n,a);
                a.pop_back();
            }
           
            if(col < n-1 && m[row][col+1] == 1)
            {
                a += "R";
                solve(ans,row,col+1,m,n,a);
                a.pop_back();
            }
             if(row>0 &&m[row-1][col] == 1)
            {
                a += "U";
                solve(ans,row-1,col,m,n,a);
                a.pop_back();
            }
           
           
            
            m[row][col] = 1;
        }
    
    }
    
    
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string> ans;
        string a = "";
        solve(ans,0,0,m,n,a);
     //   sort(ans.begin(),ans.end());
        return ans;
    }
};

    


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends