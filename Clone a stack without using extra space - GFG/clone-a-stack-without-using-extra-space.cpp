// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    void clonestack(stack<int> st, stack<int>& cloned)
    {
        int n =st.size();
        int k = 0;
        
        while(k+1 != n)
        {
        int var = st.top();
        st.pop();
        int p = n - k -1;
        while(p--)
        {
            int a = st.top();
            st.pop();
            cloned.push(a);
        }
        st.push(var);
        while(!cloned.empty())
        {
            int a = cloned.top();
            cloned.pop();
            st.push(a);
        }
        k++;
            
        }
        
        while(!st.empty())
        {
            int a = st.top();
            st.pop();
            cloned.push(a);  
        }
        
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        int arr[N];
        stack<int> st;
        vector<int> copy;
        for(int i = 0; i < N; i++){
            cin >> arr[i];
            st.push(arr[i]);
            copy.push_back(arr[i]);
        }
        
        reverse(copy.begin(), copy.end());
        
        Solution ob;
        stack<int> cloned;
        ob.clonestack(st,cloned);
        vector<int> check;
        while(cloned.size())
        {
            check.push_back(cloned.top());
            cloned.pop();
        }
        
        int flag = 0;
        if(check!=copy)
            flag = 1;
        
        cout<<1-flag<<endl;
    }
    return 0; 
} 
  // } Driver Code Ends