// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
     int countSquare(int B)
    {
	    return (((B/2)*(B/2))/2)-(B/4);
    }
};



// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int B,count;
    	cin>>B;
    	Solution ob;
    	count = ob.countSquare(B);
    	cout<<count<<endl;
    }
}  // } Driver Code Ends