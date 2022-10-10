// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
   long long findRank(string str)
   {
      long long fact[19];
      fact[0]=1;
      fact[1]=1;
      long long n=str.size(),ans=0;
      
      for(int i=2;i<=18;i++)
      {
          fact[i]=i*fact[i-1];
      }
      
      for(int i=0;i<n;i++)
      {
          int count=0;
          for(int j=i+1;j<n;j++)
          {
              if(str[i]>str[j])
              count++;
          }
          
          ans+=count*fact[n-1-i];
      }
      
      return ans+1;
   }
};

// { Driver Code Starts.
int main(){
    int T;
    cin>>T;
    while(T--){
        string s;
        cin>>s;
        Solution obj;
        long long ans = obj.findRank(s);
        cout<<ans<<endl;
    }
}  // } Driver Code Ends