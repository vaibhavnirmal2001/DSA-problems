class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        int n=mat.size();
        int m=mat[0].size();
        vector<int> s(m,0);
        vector<vector<int>> l(n,s);
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(i==0 || j==0){
                    if(i==0 && j==0){
                        l[i][j]=mat[i][j];
                    }
                    else if(i==0){
                        l[i][j]=mat[i][j]+l[i][j-1];
                    }
                    else{
                        l[i][j]=mat[i][j]+l[i-1][j];
                    }
                }
                else{
                    l[i][j]=l[i-1][j]+l[i][j-1]-l[i-1][j-1]+mat[i][j];
                }
            }
        }
        vector<int> s1(m,0);
        vector<vector<int>> ans(n,s1);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int first;
                if(i+k<n && j+k<m){
                    first=l[i+k][j+k];
                }
                else{
                    if(i+k<n){
                        first=l[i+k][m-1];
                    }
                    else if(j+k<m){
                        first=l[n-1][j+k];
                    }
                    else{
                        first=l[n-1][m-1];
                    }
                }
                int second;
                if(i-k-1>=0){
                    if(j+k<m){
                        second=l[i-k-1][j+k];
                    }
                    else{
                        second=l[i-k-1][m-1];
                    }
                }
                else{
                    second=0;
                }
                int third;
                if(j-k-1>=0){
                    if(i+k<n){
                        third=l[i+k][j-k-1];
                    }
                    else{
                        third=l[n-1][j-k-1];
                    }
                }
                else{
                    third=0;
                }
                int fourth;
                if(i-k-1>=0 && j-k-1>=0){
                    fourth=l[i-k-1][j-k-1];
                }
                else{
                    fourth=0;
                }
                ans[i][j]=first-second-third+fourth;
            }
        }
        return ans;
    }
};