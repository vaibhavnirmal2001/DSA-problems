// { Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    bool CanMaxCanAllot(int mid,int A[], int N,int M)
    {
        int student=1;
        int sum=0;
        for(int i=0;i<N;i++)
        {
            sum+=A[i];
            if(sum>mid)
            {
                student++;
                sum=A[i];
            }
            if(student>M)
                return false;
        }
        return true;
    }
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {
        //code here
        int low = 0;
        int high = 0;
        for(int i=0;i<N;i++)
        low = max(low,A[i]);
        int k = N-M+1;
        for(int i=0;i<k;i++)
        {
            high += A[i];
        }
        
        for(int i=k ;i<N;i++)
        {
            high = max(high,high+A[i]-A[i-k]);
        }
    //    cout<<low<<" "<<high<<endl;
    int ans = INT_MAX;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(CanMaxCanAllot(mid,A,N,M) == true)
        {
            ans = min(ans,mid);
            high = mid-1;
        }
        else
        {
            low = mid+1;
        }
    }
    return ans;
    
    
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}
  // } Driver Code Ends