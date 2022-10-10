// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    
    public:
    int Maximum_Sum(vector<vector<int>> &mat,int N,int K){
        int dp[N+1][N+1];
        for(int i=0 ;i<N+1;i++){
            dp[0][i]=0;
        }
        
        for(int i=0 ;i<N+1;i++){
           dp[i][0]=0; 
        }
        
        int maxcount=INT_MIN;
        
        
        for(int i=1;i<N+1;i++){
            for(int j=1;j<N+1;j++){
                
                dp[i][j]= dp[i-1][j]+dp[i][j-1] - dp[i-1][j-1] + mat[i-1][j-1];
                
            }
        }
        
        for(int i=1;i<N+1;i++){
            for(int j=1;j<N+1;j++){
                int sum=INT_MIN;
                if(i-K>=0 && j-K>=0){
                    sum= dp[i][j]-dp[i-K][j]-dp[i][j-K] + dp[i-K][j-K];
                    maxcount=max(sum,maxcount);
                }
                
            }
        }
         
        return maxcount;
    }  
};

// { Driver Code Starts.

int main() {
    
    int t;
    cin >> t;
    while(t--)
    {
    	int N;
        cin>>N;
        vector<vector<int>> mat(N,vector<int>(N,0));
        
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                cin>>mat[i][j];
            }
        }
        
        int k;cin>>k;
        Solution obj;
        cout << obj.Maximum_Sum(mat,N,k)<<"\n";
    }
        
    return 0;
}
  // } Driver Code Ends