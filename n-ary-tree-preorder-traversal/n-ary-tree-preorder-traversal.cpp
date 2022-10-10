/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
#include <bits/stdc++.h>
using namespace std;
  
class Solution {
public:
    vector<int> preorder(Node* root) {
        if(root == NULL)
            return {};
            
        vector <int> ans;
            for(int i=0;i<root->children.size();i++)
            {
                vector <int> an = preorder(root->children[i]);
              ans.insert(ans.end(),an.begin() , an.end()); 
            }
        
        ans.insert(ans.begin(),root->val);
        
        return ans;
            
    }
};