class Solution {
     public int minFlipsMonoIncr(String S) {
        int f0 = 0, f1 = 0;
        for (int i = 0; i < S.length(); ++i) {
          f0 += S.charAt(i) - '0';
          f1 = Math.min(f0, f1 + 1 - (S.charAt(i) - '0'));
        }
        return f1;
    }
}