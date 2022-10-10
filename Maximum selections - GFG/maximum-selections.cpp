// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// ranges[i][0] is the start of ith range
// ranges[i][1] is the end of ith range

class Solution{
public:
    static bool cmp(vector<int> &a, vector<int> &b){
        return a[1] < b[1];
    }
    int max_non_overlapping( vector< vector<int> >& ranges )
    {
        // code here
         sort(ranges.begin(), ranges.end(), cmp);
        int n = ranges.size();
        int val = ranges[0][1];
        int count = 1;

        for(int i = 1;i < n;i++){
            if(ranges[i][0] >= val){
                val = ranges[i][1];
                count++;
            }
        }
        return count;
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

		vector< vector<int> > v(n,vector<int>(2));
		for(int i=0; i<n; i++)
			cin>> v[i][0] >> v[i][1];
			
        Solution ob;
		cout<< ob.max_non_overlapping(v) << endl;
	}
	return 1;
}

  // } Driver Code Ends