class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        
        int n = mat.size();
        int col = mat[0].size();
        map<int,vector<int>> m;
        for(int i=0;i<n;i++)
        {
            int count  = 0;
            for(int j=0;j<col;j++)
            {
                if(mat[i][j] == 1)
                    count++;
            }
            m[count].push_back(i);
        }
        vector<int> ans;
        for(auto it = m.begin();it != m.end(); it++)
        {
            if(k >= it->second.size())
            {
                for(int i=0;i<it->second.size();i++)
                    ans.push_back(it->second[i]);
            }
            else
            {
                for(int i=0;i<k;i++)
                {
                    ans.push_back(it->second[i]);
                }
                break;
            }
            k = k - it->second.size();
        }
        return ans;
    }
};