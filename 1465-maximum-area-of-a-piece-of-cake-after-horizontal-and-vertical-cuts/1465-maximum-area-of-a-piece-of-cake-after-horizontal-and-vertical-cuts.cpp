class Solution {
public:
    long long int maxArea(int h, int w, vector<int>& a, vector<int>& b) {
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        a.insert(a.begin(),0);
        a.push_back(h);
        b.insert(b.begin(),0);
        b.push_back(w);
        
        long long int p = a[1]-a[0];
        for(int i=1;i<a.size()-1;i++)
            p = max((int)p,a[i+1]-a[i]);
        
        long long int q = b[1]-b[0];
        for(int i=1;i<b.size()-1;i++)
            q = max((int)q,b[i+1]-b[i]);
        
        return (long long int)p * ( long long int)q % 1000000007;;
    }
};