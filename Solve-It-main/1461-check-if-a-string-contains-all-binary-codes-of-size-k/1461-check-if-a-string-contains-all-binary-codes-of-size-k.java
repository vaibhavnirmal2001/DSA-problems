class Solution {
    public boolean hasAllCodes(String s, int k) {
        boolean[] arr = new boolean[(int) (Math.pow(2, k))];
        for (int i = 0; i <= s.length() - k; i++) {
            int num = 0;
            for (int j = i; j < i + k; j++) {
                num = num * 2 + (s.charAt(j) - '0');
            }
            arr[num] = true;
        }
        for (boolean b : arr) {
            if (!b)
                return false;
        }
        return true;
    }
}