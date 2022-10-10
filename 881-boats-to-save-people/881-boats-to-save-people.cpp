class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int i=0;
        int j=people.size()-1;
        int ans = 0;
        while(i<j)
        {
            if(people[i]+people[j]>limit)
            {
                ans+=1;
                j--;
            }
            else
            {
                ans+=1;
                i++;
                j--;
            }
        }
        
        if(i==j)ans++;
        
        return ans;
    }
};