// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    void helper(vector<int> arr,vector<int>& ans,int N,int i,int sum)
    {
        if(i>=N)
        {
            ans.push_back(sum);
            return;
        }
        
        helper(arr,ans,N,i+1,sum+arr[i]);
        helper(arr,ans,N,i+1,sum);
    }

    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int> ans;
        helper(arr,ans,N,0,0);
        sort(ans.begin(),ans.end());
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends