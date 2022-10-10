class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> r(numRows);
        
        for(int i=0;i<numRows;i++)
        {
            r[i].resize(i+1);
            r[i][0] = 1;
            r[i][i] = 1;
            
            for(int j = 1;j<i;j++)
            {
                r[i][j] = r[i-1][j-1] + r[i-1][j];
            }
            
        }
//       vector <int> a;
//       a.resize(numRows);
//         a[0] = 1;
//       a[numRows-1] =1;
      
//       for(int i=1;i<numRows-1;i++)
//       {
//         a[i] = a[i-1]*(numRows-i);
//         a[i] = a[i] / i;
//       }
      
//       for(auto ax:a)
//         cout<<ax<<" ";
//       cout<<endl;
      

        
        return r;
      
    }
};