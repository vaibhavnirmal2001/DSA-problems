// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
 public:
 void solve(string &temp)
 {
     while(temp.size()!=1)
     {
         if(temp[0]=='0')
         temp.erase(temp.begin());
         else
         break;
     }
 }
   string newIPAdd (string s)
   {
       int left=0;
       int right=0;
       string ans="";
       while(right<s.size())
       {
           if(s[right]!='.')
           right++;
           else
           {
               string temp= s.substr(left,right-left);
               solve(temp);
               ans+=temp;
               ans+=".";
               left=right+1;
               right++;
           }
       }
       string temp= s.substr(left,right-left);
       solve(temp);
       ans+=temp;
       return ans;
   }
};
// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.newIPAdd (s) << endl;
    }
}

  // } Driver Code Ends