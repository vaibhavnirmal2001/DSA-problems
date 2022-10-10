// { Driver Code Starts
//Initial template for C++


#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
    public:
  string ExcelColumn(int N)
    {
        // Your code goes here
        string ans = "";
        while(N != 0)
        {
            int h = (N%26);
            if(h == 0)
            {
                h = 26;
            }
            h--;
            ans += 'A' + h;
            N = N/26;
            if(N == 1 && h == 25) break;
            if(h == 25) N--;
        }
        reverse(ans.begin(), ans.end());
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
        int n;
        cin>>n;
        Solution ob;
        cout<<ob.ExcelColumn(n)<<endl;
    }
    return 0;
}
      // } Driver Code Ends