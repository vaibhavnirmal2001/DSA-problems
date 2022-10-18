class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans(n);
        
        for(int i=0;i<ans.size();i++) {
            int x = i+1;
            if(x%3 == 0 and x%5 == 0) {
                ans[i] = "FizzBuzz";
            }else if(x%3 == 0) {
                ans[i] = "Fizz";
            }else if(x%5 == 0) {
                ans[i] = "Buzz";
            }else{
                ans[i] = to_string(x);
            }
        }
        
        return ans;
    }
};
