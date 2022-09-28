class Solution {
    public int numberOfWeakCharacters(int[][] prop) {
        Arrays.sort(prop, new Comparator<int[]>() {
            public int compare(int[] a, int[] b) {
                if (a[0] == b[0]) {
                    return a[1] - b[1];
                }
                
                return b[0] - a[0];
            }
        });
        
        int res = 0;
        int max = 0;
        for (int i = 1; i < prop.length; i++) {
            if (prop[max][0] > prop[i][0]  && prop[max][1] > prop[i][1]) {
                res++;
            } else {
                max = i;
            }
        }
        return res;
    }
}