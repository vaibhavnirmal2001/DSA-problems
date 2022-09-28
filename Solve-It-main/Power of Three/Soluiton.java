class Solution {
    public boolean isPowerOfThree(int n) {
        for(int i=0;i<n;i++){
            double temp = Math.pow(3,i);
            if(temp==n) return true;
            if(temp>n)return false;
        }
        return false;
    }
}