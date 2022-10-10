// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:

    bool isThere(vector<string>& dict,string & left,int n)
    {
        for(int i=0;i<n;i++)
        {
            if(dict[i] == left)
            return true;
        }
        return false;
    }

    void helper(vector<string>& ans,string & res,int n, vector<string>& dict, string s)
    {
         for(int i=1;i<=s.size();i++)
        {
            string left = s.substr(0,i);
             string right = s.substr(i,s.size()-i);
            if(isThere(dict,left,n))
            {
                if(i==s.size())
                {
                    res += left;
                    //string aa = "( " + res + " )";
                    ans.push_back(res);
                    return;
                }
                string answer = res+left+" ";
               helper(ans,answer,n,dict,right); 
            }
        }
    }
    
    vector<string> wordBreak(int n, vector<string>& dict, string s)
    {
        // code here
         vector<string> ans;
         string res;
         helper(ans,res,n,dict,s);
        return ans;
       
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        vector<string> dict;
        string s;
        cin>>n;
        for(int i = 0;i < n;i++){
            cin>>s;
            dict.push_back(s);
        }
        cin>>s;
        
        Solution ob;
        vector<string> ans = ob.wordBreak(n, dict, s);
        if(ans.size() == 0)
            cout<<"Empty\n";
        else{
            sort(ans.begin(), ans.end());
            for(int i = 0;i < ans.size();i++)
                cout<<"("<<ans[i]<<")";
            cout<<endl;
        }
    }
    return 0;
}  // } Driver Code Ends