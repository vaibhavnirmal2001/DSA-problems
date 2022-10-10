// { Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    
    bool isPossible(long long int mid,int arr[],int n,int k)
    {
        int count = 1;
        int sum = 0;
        for(int i=0;i<n;i++)
        {
            if(arr[i] + sum > mid)
            {
               sum = arr[i];
               count++;
               if(count>k)
                return false;
            }
            else
                sum += arr[i];
        }
        return true;
    }
    
    long long minTime(int arr[], int n, int k)
    {
        // code here
        // return minimum time
        int low = INT_MIN;
         long long int  high = 0;
        
        for(int i=0;i<n;i++)
        {
            low = max(low,arr[i]);
            high += arr[i];
        }
        
        long long int ans = 0;
        
        while(low<=high)
        {
             long long int mid = low + (high-low)/2;
             
             if(isPossible(mid,arr,n,k) )
             {
                 ans = mid;
                 high = mid-1;
             }
             else
                 low = mid+1;
        }
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k,n;
		cin>>k>>n;
		
		int arr[n];
		for(int i=0;i<n;i++)
		    cin>>arr[i];
		Solution obj;
		cout << obj.minTime(arr, n, k) << endl;
	}
	return 0;
}  // } Driver Code Ends