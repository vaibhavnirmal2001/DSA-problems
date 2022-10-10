class Solution {
    public int bagOfTokensScore(int[] a, int p) {
        int n = a.length;
        if(n == 0)
            return 0;
        Arrays.sort(a);
        int i=0;
        int j = n-1;
        int cur = 0;
        int max = 0;
        while(i<=j){
            if(p>=a[i]){
                p -= a[i];
                cur++;
                if(cur>max)
                    max = cur;
                i++;
            }
            else if(cur>=1){
                p += a[j];
                j--;
                cur--;
            }
            else
                break;
        }
        return max;
    }
}