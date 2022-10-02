class Solution {
    int Kmp(String haystack, String needle) {
        int n = haystack.length();
        int m = needle.length();
        int lpu[] = new int[m];
        isLpu(needle, lpu, m);
        int i = 0;
        int j = 0;
        while (i < n) {
            if (haystack.charAt(i) == needle.charAt(j)) {
                i++;
                j++;
            }
            if (j == m) {

                return (i - j);
            } else if (i < n && haystack.charAt(i) != needle.charAt(j)) {
                if (j != 0) {
                    j = lpu[j - 1];
                } else {
                    i++;
                }
            }
        }
        return -1;
    }


    void isLpu(String needle, int lpu[], int m) {
        int i = 1;
        int len = 0;
        lpu[0] = 0;

        while (i < m) {
            if (needle.charAt(len) == needle.charAt(i)) {
                len++;
                lpu[i] = len;
                i++;
            } else {
                if (len != 0) {
                    len = lpu[len - 1];
                } else {
                    lpu[i] = len;
                    i++;
                }
            }
        }
    }

    public int strStr(String haystack, String needle) {
        if (needle.length() == 0)
            return 0;
        return Kmp(haystack, needle);
    }
}