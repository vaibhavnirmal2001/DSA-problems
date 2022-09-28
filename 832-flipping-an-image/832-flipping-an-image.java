class Solution {
    public int[][] flipAndInvertImage(int[][] m) {
        for (int i = 0; i < m.length; i++) {
            for (int j = 0,k=m[0].length-1; j < m[0].length&& j<k; j++,k--) {
                int temp = m[i][j];
                m[i][j]=m[i][k];
                m[i][k]=temp;
            }
        }
        for (int i = 0; i < m.length; i++) {
            for (int j = 0; j < m[0].length; j++) {
                if (m[i][j]==1){
                    m[i][j]=0;
                }else {
                    m[i][j]=1;
                }
            }
        }
        return m;

    }
}