class Solution {
public:
  vector<string> findAndReplacePattern(vector<string>& words, string& pattern) {        
	vector<string> ans;
	string p = normalise(pattern);
	for(auto& w : words) 
		if(p == normalise(w)) ans.push_back(w);
	return ans;
}
string normalise(string w) {
	unordered_map<char, char> mp;
	char c = 'a';
	for(auto ch : w) 
		if(!mp.count(ch)) mp[ch] = c++;
	for(auto& ch : w) ch = mp[ch];
	return w;
}
};