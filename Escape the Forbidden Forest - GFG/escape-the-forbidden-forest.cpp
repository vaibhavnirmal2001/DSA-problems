// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std; 


 // } Driver Code Ends
class Solution
{
    public:
    int build_bridges(string str1, string str2)
    {
       int dp[101][101];
        int x = str1.length(), y = str2.length();
        
        for(int i=0; i<=x; i++)
        {
            for(int j=0; j<=y; j++)
            {
                if(i == 0 || j == 0)
                dp[i][j] = 0;
                
                else if(str1[i-1] == str2[j-1])
                dp[i][j] = 1 + dp[i-1][j-1];
                
                else
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    
        return dp[x][y];
    }
};

// { Driver Code Starts.
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        string str1,str2;
        cin >> str1 >> str2;
        Solution obj;
        cout<<obj.build_bridges(str1,str2)<<endl;
    } 
    return 0;
} 
  // } Driver Code Ends