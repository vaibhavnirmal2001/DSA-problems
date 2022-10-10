// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    //Using swap sort in O(n)

int *findTwoElement(int *arr, int n) {
		
        int *arr1 = new int[2];
        
        //unsorted arr 2 3 1 1 5
        int i=0;
        while(i<n){
            if(arr[i] != arr[arr[i]-1])
            swap(arr[i], arr[arr[i]-1]);
            else
            i++;
        }
        
        //sorted array 1 2 3 1 5
        int a=0,b=0;
        for(int i=0;i<n;i++){
            if(arr[i]!=i+1){
                a=i+1;
                b=arr[i];
                break;
            }
        }
        arr1[0]=b;
        arr1[1]=a;
        return arr1;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends