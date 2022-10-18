// PROBLEM STATEMENT: Given two strings s and t, determine if they are isomorphic.
// Two strings s and t are isomorphic if the characters in s can be replaced to get t.
// All occurrences of a character must be replaced with another character while preserving the order of characters.
//  No two characters may map to the same character, but a character may map to itself.

// SOLUTION

#include<iostream>
#include<map>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        
        if(s.size() != t.size()) return true;
        
        map<char, char> a;
        
        for(int i = 0; i<s.size(); i++){
          
            if(a.find(s[i]) != a.end()){
                // auto x = a.find(s[i]);
                if(a[s[i]] != t[i]) return false;
            }
            else{
               a[s[i]] = t[i];
            }
        }
        map<char, char> r;
        for(auto x :a){
            if(r.find(x.second) != r.end()) return false;
            r[x.second] = x.first;
} 
        return true;
    }
};