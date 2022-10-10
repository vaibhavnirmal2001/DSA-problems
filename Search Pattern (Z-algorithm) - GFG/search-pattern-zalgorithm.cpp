// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
      vector <int> search(string pat, string txt){
        string s = pat + "#" + txt;
        int n = s.length();
        vector<int> lps(n);
        for(int i=1;i<n;i++){
            int j = lps[i-1];
            while(j>0 and s[j]!=s[i]){
                j = lps[j-1];
            }
            if(s[i]==s[j]){
                j++;
            }
            lps[i] = j;
        }
        vector<int> ans;
        for(int i=pat.length()+1;i<n;i++){
            if(lps[i]==pat.length()){
                ans.push_back(i-pat.length()-pat.length()+1);
            }
        }
        return ans;
    }
     
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector <int> res = ob.search(pat, S);
        if(res.size()==0)
            cout<<"-1 ";
        else
            for (int i : res)
                cout << i << " ";
        cout << endl;
    }
    return 0;
}

  // } Driver Code Ends