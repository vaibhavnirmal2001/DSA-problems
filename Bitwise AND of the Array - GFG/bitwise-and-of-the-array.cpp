// { Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++
class Solution{
    public:
  int count(int N, vector<int> A,int X)

    {   

        int ans=N;

        int mask=0;

        for(int i=31;i>=0;i--){

            if((X>>i)&1){

              mask^=(1<<i);

              continue;

            }

            int temp=mask^(1<<i);

            int count=0;

            for(int j=0;j<N;j++){

              if((temp&A[j])!=temp)

              count++;

            }

            ans=min(ans,count);

        }

      return ans;

    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int N,X;
        cin>>N>>X;
        vector<int> A(N);
        for(auto &i:A)
            cin>>i;
        Solution obj;
        int ans = obj.count(N, A, X);
        cout<<ans<<endl;
    }
}  // } Driver Code Ends