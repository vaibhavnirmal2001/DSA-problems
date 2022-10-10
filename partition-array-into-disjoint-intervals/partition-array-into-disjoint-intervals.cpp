class Solution {
public:
    int partitionDisjoint(vector<int>& A) {
        vector<int> mx(A.size()), mi(A.size());
        mx[0]=A[0]; mi[A.size()-1]=A.back();
        for(int i=1; i<A.size(); i++)
            mx[i]=max(A[i], mx[i-1]);
        for(int i=A.size()-2; i>=0; i--)
            mi[i]=min(A[i], mi[i+1]);
        int i;
        for(i=0; i<A.size()-1; i++)
            if(mx[i]<=mi[i+1])
                break;
        return i+1;
    }
};