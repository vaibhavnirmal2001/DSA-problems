class Solution {
    public int concatenatedBinary(int n) {
        //   String ans ="0";
        // for (int i = 1; i <=n; i++) {
        //     ans+=Integer.toBinaryString(i);
        // }
        // return (int)Integer.parseInt(ans,2);
        
         final long modulo = (long) (1e9 + 7);
        long result = 0;
        for (int i = 1; i <= n; i++) {
        
            int temp = i;
            while (temp > 0) {
                temp /= 2;
                result *= 2;
            }
           
            result = (result + i) % modulo;
        }
        return (int) result;
    }
}