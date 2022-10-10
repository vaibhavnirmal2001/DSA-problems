// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    void solve(vector<int> &nums, vector<int> &ans , int l, int h)
   {
       if(l>h)
       return;
       
       int mid = (l+h) / 2;
       int temp = nums[mid];
       ans.push_back(temp);
       
       solve(nums,ans,l,mid-1);
       solve(nums,ans,mid+1,h);
   }
   vector<int> sortedArrayToBST(vector<int>& nums) {
       
       vector<int>ans;
       int l = 0;
       int h = nums.size()-1;
       solve(nums,ans,l,h);
       return ans;
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
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution obj;
		vector<int>ans = obj.sortedArrayToBST(nums);
		for(auto i: ans)
			cout << i <<" ";
		cout << "\n";
	}
	return 0;
}  // } Driver Code Ends