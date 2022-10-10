// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

struct Node{
    Node* links[26];
    bool flag=false;
    int cnt=0;

    bool containskey(char ch){
        return links[ch-'a']!=NULL;
    }
    void put(char ch,Node* node){
        links[ch-'a']=node;
    }
    Node* get(char ch){
        return links[ch-'a'];
    }
    void setEnd(){
        flag=true;
    }
    bool isEnd(){
        return flag;
    }
};
class Trie{
    private:
    Node* root;
    public:
    Trie(){
        root=new Node();
    }
    void insert(string word){
        Node* node=root;
        for(int i=0;i<word.length();i++){
            if(!node->containskey(word[i])){
                node->put(word[i],new Node());
            }
            node=node->get(word[i]);
            node->cnt++;
        }
        node->setEnd();
    }
    string un_prefix(string word){
        Node* node=root;
        string pre="";
        for(int i=0;i<word.length();i++){
            if(node->cnt==1)break;
            pre+=word[i];
            node=node->get(word[i]);
        }
        return pre;
    }
};
class Solution
{
    public:
    vector<string> findPrefixes(string arr[], int n)
    {
        //code here
        Trie* trie=new Trie();
        vector<string>ans(n);
        for(int i=0;i<n;i++){
            trie->insert(arr[i]);
        }
        for(int i=0;i<n;i++){
            ans[i]=trie->un_prefix(arr[i]);
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
        int n;
        cin >> n;

        string arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
            
        Solution ob;
        vector<string> ans = ob.findPrefixes(arr, n);
        
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] <<" ";


        cout << "\n";

    }

    return 0;
}
  // } Driver Code Ends