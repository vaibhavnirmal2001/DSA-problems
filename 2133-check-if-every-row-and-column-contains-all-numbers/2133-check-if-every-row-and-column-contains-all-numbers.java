class Solution {
    public static boolean checkValid(int[][] m) {


        for (int i = 0; i < m.length; i++) {
            ArrayList<Integer> al = new ArrayList<>();
            for (int j = 0; j < m[0].length; j++) {
                al.add(m[i][j]);
            }
            for (int j = 1; j <= m.length; j++) {
                if (!al.contains(j)) return false;
            }
        }

        for (int i = 0; i < m.length; i++) {
            ArrayList<Integer> al = new ArrayList<>();
            for (int j = 0; j < m.length; j++) {
                al.add(m[j][i]);
            }
            for (int j = 1; j <= m.length; j++) {
                if (!al.contains(j)) return false;

            }
        }
        return true;
    }
}