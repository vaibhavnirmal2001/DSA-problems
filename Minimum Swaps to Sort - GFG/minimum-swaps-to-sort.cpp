// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&nums)
	{
	   map<int,int> mp;
    for(int i=0;i<nums.size();i++)
    mp[nums[i]]=i;
    int i=0,c=0;;
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        if(nums[i]!=it->first)
        {
            swap(nums[i],nums[it->second]);
            mp[nums[it->second]]=it->second;
            c++;
        }
        i++;
    }
    return c;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution obj;
		int ans = obj.minSwaps(nums);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends