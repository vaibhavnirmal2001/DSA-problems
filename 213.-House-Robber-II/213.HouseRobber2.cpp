class Solution {
public:
int rob(vector<int>& nums) {
    int i,j,n=nums.size(),pre,curr=0,prep,flag=0,check=0;
    
    if(n<=3){
        if(n==1) return nums[0];
        if(n==2) return max(nums[0],nums[1]);
        if(n==3) return max({nums[2],nums[1],nums[0]});
    }
    
    prep=nums[0];
    pre=max(nums[0],nums[1]);
    
    
    for(i=2;i<n;i++){
        
        
        if(i==n-1 && prep+nums[i]>pre){
            flag=1;
            continue;
        }
        curr=max(prep+nums[i],pre);
        prep=pre;
        pre=curr;
    }
    
    
    if(flag==0) return curr;
    
     
    check=curr;
    
    
     prep=nums[1];
    pre=max(nums[2],nums[1]);
    
    
    for(i=3;i<n;i++){
        curr=max(prep+nums[i],pre);
        prep=pre;
        pre=curr;
    }
    
    
    return max(curr,check);
}
};