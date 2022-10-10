// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
   vector<vector<int>> subsetsRes; //global vector declaration

 

   //recursive helper function
   void generate(vector<int>& A, int i, vector<int>& nums){
   
       if(i==A.size()){
           subsetsRes.push_back(nums);
           return;
       }    // base case 
       
      generate(A, i+1, nums); // Case in which element considered is not added
      
      nums.push_back(A[i]);
      generate(A, i+1, nums); // Case in which element considered is added
      nums.pop_back(); //backtrack
   }
   public:
   vector<vector<int>> subsets(vector<int>& A)
   {
       //code here
       vector<int> nums;
       generate(A, 0, nums);
       sort(subsetsRes.begin(), subsetsRes.end());
       return subsetsRes;
   }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n, x;
		cin >> n;

		vector<int> array;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			array.push_back(x);
		}
        
        
        Solution ob;
		vector<vector<int> > res = ob.subsets(array);

		// Print result
		for (int i = 0; i < res.size(); i++) {
			for (int j = 0; j < res[i].size(); j++)
				cout << res[i][j] << " ";
			cout << endl;
		}

		
	}

	return 0;
}  // } Driver Code Ends