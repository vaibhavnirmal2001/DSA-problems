class Solution {
public:
    
    void recurse(int used, int N, vector<int>& nums, vector<int>& current, vector<vector<int>> &output){
        if(used == N){
            output.push_back(current);
            return;
        }
        
        for(int i = 0 ; i < N ; i++){
            if(nums[i] != -1){
                int temp = nums[i];
                current.push_back(nums[i]);
                nums[i] = -1;
                
                recurse(used + 1, N, nums, current, output);
                
                current.pop_back();
                nums[i] = temp;
            }
        }
        
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>> output;
        vector<int> current;
        int N = nums.size();
        int used = 0;
        recurse(0, N, nums, current, output);
        cout<<call<<endl;
        return output;
        
    }
};
