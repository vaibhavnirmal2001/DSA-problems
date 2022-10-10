// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++
class Solution
{
public:
   vector<int> ans;
    void solve(int s, int n, int str, int size)
    {
        if(size==n)
        {
            ans.push_back(str);
            return;
        }
            
        for(int i=s; i<=9; i++)
        {
            str = str * 10 + i;
            size++;
            solve(i+1, n, str, size);
            size--;
            str =  (str - i)/10;
        }
    }
    vector<int> increasingNumbers(int N)
    {
       if(N==1)
         solve(0, N, 0, 0);
       else
         solve(1, N, 0, 0);
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
        Solution ob;
        vector<int> ans = ob.increasingNumbers(N);
        for(auto num : ans){
            cout<< num <<" ";
        }
        cout<<endl;
        
    }
    return 0;
}  // } Driver Code Ends