// { Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

    public:
 vector<vector<int> > findDistance(vector<vector<char> >& matrix, int M, int N) 
    { 
        // Your code goes here
        int di[] = {0,0,-1,1};
        int dj[] = {-1,1,0,0};
        queue<pair<int,int>> q;
        vector<vector<int>> ans(M,vector<int> (N,-1));//filling with -1 reduces steps at last
        for(int i=0; i<M; i++){
            for(int j=0; j<N; j++){
                if(matrix[i][j] == 'B'){
                    q.push({i,j});
                    ans[i][j] = 0;
                }
            }
        }
        int level = 1;
        while(!q.empty()){
            int q_size = q.size();
            while(q_size-- > 0){
                int i = q.front().first, j = q.front().second; q.pop();
                for(int idx=0; idx<4; idx++){
                    int next_i = i+di[idx],next_j = j+dj[idx];
                    if(next_i>=0 && next_j >=0 && next_i<M && next_j<N && matrix[next_i][next_j] == 'O' && ans[next_i][next_j] == -1){
                        q.push({next_i,next_j});
                        ans[next_i][next_j] = level;
                    }
                }
            }
            level += 1;
        }
        return ans;
    } 
};

// { Driver Code Starts.


int main()
{

    int t;
    cin >> t;
    while(t--)
    {
    	int M,N;
        cin>>M;
        cin>>N;

        vector<vector<char> > matrix(M);
        for(int i=0; i<M; ++i)
        {
            matrix[i].resize(N);
            for (int j = 0; j < N; ++j)
                cin>>matrix[i][j];
        }

        vector<vector<int> >result;
        Solution obj;
        result = obj.findDistance(matrix, M,N); 
        for(int i=0; i<M; ++i)
        {
            for (int j = 0; j < N; ++j)
                cout<<result[i][j]<<" ";
            cout<<"\n";
        }
    }

    return 0;
}  // } Driver Code Ends