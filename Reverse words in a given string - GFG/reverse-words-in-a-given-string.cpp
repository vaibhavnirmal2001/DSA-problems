// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
   public:
   string reverseWords(string S) 
   { 
       vector<string> p;
       string temp="";
       for(int i=0;i<S.length();i++){
           if(S[i]=='.'){
               p.push_back(temp);
               temp="";
               continue;
           }
           else{
               temp+=S[i];
           }
       }
       p.push_back(temp);
       string a="";
       reverse(p.begin(),p.end());
       for(auto i : p){
           a+=i;
           a+='.';
       }
       a.pop_back();
       return a;
   } 
};

// { Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}  // } Driver Code Ends