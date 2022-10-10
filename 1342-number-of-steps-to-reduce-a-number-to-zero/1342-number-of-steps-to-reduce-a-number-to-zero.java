class Solution {
    public int numberOfSteps(int num) {
        return count(num,0); 
    }
    public int count(int num, int steps){
        if(num==0) return steps;
        if(num==1) return steps+1;
        
        if(num%2==0){
            steps++;
            return count((num/2), steps);
        }else{
            steps++;
           return count((num-1), steps);
        }
    }
}