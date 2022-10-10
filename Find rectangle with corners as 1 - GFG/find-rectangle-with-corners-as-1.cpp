// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
#include <unordered_map>
#include <unordered_set>
using namespace std; 

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
 bool ValidCorner(const vector<vector<int> >& matrix)
    {
        // Your code goes here
        int m = matrix.size();
        int n = matrix[0].size();
        unordered_map<int,unordered_set<int>> temp;
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                for(int k = j+1;k<n;k++){
                    if(matrix[i][j] == 1 and matrix[i][k] == 1){
                        // we found one pair on that row
                        // next we have to check if we get any  pair in same column and different row
                        // firstly finding key(first occourence of 1 in the row) , then finding if have the same pair in the set. 
                        if(temp.find(j) != temp.end() and temp[j].find(k) != temp[j].end()) return true;
                        else temp[j].insert(k); // we are {col,(next occ of 1 in the same row)} => {col,(col+)} pair
                    }
                }
            }
        }
        return false;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int row, col;
        cin>> row>> col;

        vector<vector<int> > matrix(row);
            
        for(int i=0; i<row; i++)
        {
            matrix[i].assign(col, 0);
            for( int j=0; j<col; j++)
            {
                cin>>matrix[i][j];
            }
        }
        Solution ob;
        if (ob.ValidCorner(matrix)) 
            cout << "Yes\n"; 
        else
            cout << "No\n"; 
    }

    return 0;
} 


  // } Driver Code Ends