// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    static bool compare(const int &a, const int &b)
   {
       int ca=0;
       int cb=0;
       int A=a,B=b;
       while(A)
       {
           A=A&(A-1);
           ca++;
       }
       while(B)
       {
           B=B&(B-1);
           cb++;
       }
       return ca>cb;
       
   }
   void sortBySetBitCount(int arr[], int n)
   {
       stable_sort(arr,arr+n,compare);
   }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        ob.sortBySetBitCount(arr, n);
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends