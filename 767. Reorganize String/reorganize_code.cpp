#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reorganizeString(string s) {
        string ans="";
        unordered_map<char,int> m;
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
            
        }
        priority_queue<pair<int,char>> pq;
        for(auto it: m )
        {   cout<<it.first<<" "<<it.second<<endl;
            pq.push({it.second,it.first});
        }
        pair<int,char> last={0,'a'};
        for(int i=0;i<s.size();i++)
        {
            if(pq.empty())
            {
                return "";
            }
            pair<int,char> p=pq.top();
            ans=ans+p.second;
            
           cout<<pq.size()<<endl;
            pq.pop();
            if(last.first!=0)
            {
                pq.push(last);
            } 
           
            last={p.first-1,p.second};
           // pq.push()
        }
        return ans;
        
    }
};