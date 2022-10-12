class Solution {
public:
    int maxPoints(vector<vector<int>>& arr) {
        
        int n = arr.size();
        
        int maxi = INT_MIN;
        
        // take every point and find the slope with other points
        
        for(int i = 0; i < n; i++)
        {
            // declare a map which will store the frequency of each slope
            
            unordered_map<double, int> mp;
            
            int temp_max = 0;
            
            int x1 = arr[i][0];
            
            int y1 = arr[i][1];
            
            for(int j = 0; j < n; j++)
            {
                if(j == i)
                {
                    continue;
                }
                
                int x2 = arr[j][0];
                
                int y2 = arr[j][1];
                
                double nume = y2 - y1;
                
                double deno = x2 - x1;
                
                // if denominator will be zero then slope will be INT_MAX
                
                if(deno == 0)
                {
                    mp[INT_MAX]++;
                    
                    // update temp_max
                    
                    temp_max = max(temp_max, mp[INT_MAX]);
                    
                    continue;
                }
                
                // find the slope and update frequency
                
                double slope = nume / deno;
                
                mp[slope]++;
                
                temp_max = max(temp_max, mp[slope]);
            }
            
            // update maxi
            
            maxi = max(maxi, temp_max + 1);
        }
        
        return maxi;
    }
};