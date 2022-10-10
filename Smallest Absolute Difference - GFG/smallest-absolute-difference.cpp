// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int kthDiff(int a[], int n, int k);

// Driver code
int main() {
    int t, i;
    int k;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cin >> k;

        cout << kthDiff(a, n, k) << endl;
    }
    return 0;
}
// } Driver Code Ends

int count(int a[], int n, int mid)
{
   int number=0;
   for(int i=0;i<n;i++){
       number+=upper_bound(a+i,a+n,a[i]+mid)-(a+i+1);
   }
   return number;
}
int kthDiff(int a[], int n, int k)
{
   sort(a,a+n);
   int low=a[1]-a[0];
   for(int i=0;i<n-1;i++){
       low=min(low,a[i+1]-a[i]);
   }
   int high=a[n-1]-a[0];
   while(low<high){
       int mid=(low+high)/2;
       if(count(a,n,mid)<k){
           low=mid+1;
       }else{
           high=mid;
       }
   }
   return low;
}