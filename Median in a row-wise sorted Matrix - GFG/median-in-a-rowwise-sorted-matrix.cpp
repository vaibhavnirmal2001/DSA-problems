// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
int counter(int mid,vector<vector<int>> &matrix, int r, int c)
{
    int ans = 0;
    for(int i=0;i<r;i++)
    {
        ans += upper_bound(matrix[i].begin(),matrix[i].end(),mid) - matrix[i].begin();
    }
    return ans;
}
    int median(vector<vector<int>> &matrix, int r, int c){
        // code here  
        int low = INT_MAX;
        int high = INT_MIN;
        for(int i = 0;i<r;i++)
        low = min(low,matrix[i][0]);
        for(int i = 0;i<r;i++)
        high = max(high,matrix[i][c-1]);
     //   cout<<low<<high<<endl;
       
        
        
        int des =  ((r*c) +1)/2;
        while(high>low)
        {
             int mid = low +(high - low)/2;
            int ans = counter(mid,matrix,r,c);
            
            if(ans < des)
            low = mid+1;
            else
            high = mid;
            
        }
        return low;
        
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        cout<<obj.median(matrix, r, c)<<endl;        
    }
    return 0;
}  // } Driver Code Ends