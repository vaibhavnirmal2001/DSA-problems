class Solution {
public:
    int kIncreasing(vector<int>& arr, int k) {
        int ans = 0;
        
        for(int i=0;i<k;i++)
        {
            vector<int> lis;
            for(int j=i;j<arr.size();j+=k)
            {
                if(lis.size()==0 || lis.back() <= arr[j])
                {
                    lis.push_back(arr[j]);
                }
                else
                {
                    *upper_bound(lis.begin(),lis.end(),arr[j]) = arr[j];
                }
            }
            ans += lis.size();
        }
        return arr.size()-ans;
        
    }
};