class Solution {
public:
    static bool comp(vector<int> &v1, vector<int> &v2)
    {
        return ( abs(v1[0]-v1[1]) > abs(v2[0]-v2[1]) );
    }
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int a = costs.size()/2;
        int b = costs.size()/2;
        int m = 0;
        sort(costs.begin(), costs.end(), comp);
        
        for(int i=0;i<costs.size();i++)
        {
            if(a==0)
            {
                m += costs[i][1];
                b--;
            }
            else if(b==0)
            {
                m += costs[i][0];
                a++;
            }
            else
            {
                m += min(costs[i][0], costs[i][1]);
                if( costs[i][0] < costs[i][1] ) a--;
                else  b--;
            }
        }

        return m;
    }
};