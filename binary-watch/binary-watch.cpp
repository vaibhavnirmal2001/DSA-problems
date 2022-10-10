class Solution {
public:

    void helper(vector<string>& res,vector<int>& chart,int&num,int curr,int idx,int hour,int min){
        if(hour>11||min>59) return;
        if(curr==num){
            string tmp=to_string(hour)+":"+((min<10)?"0":"")+to_string(min);
            res.push_back(tmp);
            return;
        }
        for(int i=idx;i<chart.size();i++){
            if(i<4)
                helper(res,chart,num,curr+1,i+1,hour+chart[i],min);
            else
                helper(res,chart,num,curr+1,i+1,hour,min+chart[i]);
        }
    }
    
    vector<string> readBinaryWatch(int num) {
        vector<int> chart({1,2,4,8,1,2,4,8,16,32});
        vector<string> res;
        helper(res,chart,num,0,0,0,0);
        return res;
    }
};