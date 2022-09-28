class Solution {
    public int minimumSum(int num) {
        
        int[] a= new int[4];
        
        for(int i=0;i<4;i++){
            a[i]=num%10;
            num/=10;
        }
        Arrays.sort(a);
        
        return (a[0]*10+a[3]) + (a[1]*10+a[2]);
        
    }
}