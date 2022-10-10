// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
   vector<int> nextPermutation(int n, vector<int> number){
        int i, j; 
  
    // I) Start from the right most digit and find the first digit that is 
    // smaller than the digit next to it. 
    for (i = n-1; i > 0; i--) 
        if (number[i] > number[i-1]) 
           break; 
  
    // If no such digit is found, then all digits are in descending order 
    // means there cannot be a greater number with same set of digits 
    if (i==0) 
    { 
       sort(number.begin() , number.end());
       return number;
    } 
  
    // II) Find the smallest digit on right side of (i-1)'th digit that is 
    // greater than number[i-1] 
    int x = number[i-1], smallest = i; 
    for (j = i+1; j < n; j++) 
        if (number[j] > x && number[j] < number[smallest]) 
            smallest = j; 
  
    // III) Swap the above found smallest digit with number[i-1] 
    swap(number[smallest], number[i-1]); 
  
    // IV) Sort the digits after (i-1) in ascending order 
    sort(number.begin() + i, number.end() ); 
  
    //cout << "Next number with same set of digits is " << number; 
  
    return number; 
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        vector<int> ans = ob.nextPermutation(N, arr);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}  // } Driver Code Ends