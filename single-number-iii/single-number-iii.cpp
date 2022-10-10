class Solution {
public:

    vector<int> singleNumber(vector<int>& nums) {
        int n = nums.size();
        vector<int>res{};
        int bucket1{}, bucket2{};
        long long int xr{};
        
		//Calculate xor of every number so that xr will have (x^y)
        for(int i{}; i<n; ++i) 
            xr = xr ^ nums[i];
        
		// Compute rightmost set bit of xr, gives us the ith bit we need as a mask
        int mask = xr & (-xr);
        
		// Fill our buckets according to our intuition mentioned in above steps
        for(int i{}; i<n; ++i){
            
            if(mask & nums[i])
                bucket1 ^= nums[i];
            
            else
                bucket2 ^= nums[i];
        }
        
		// bucket1 and bucket2 will contain x and y
        res.push_back(bucket1);
        res.push_back(bucket2);
        
        return res;
    }
};