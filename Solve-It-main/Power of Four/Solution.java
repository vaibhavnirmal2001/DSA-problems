class Solution {
    public boolean isPowerOfFour(int n) {
        if(n%4!=0 && n!=1) return false;
        for(int i=0;i<n;i++){
            int temp=(int)Math.pow(4,i);
            if(temp==n) return true;
            if(temp>n) return false;
        }
        return false;
    }
}