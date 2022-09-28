class Solution {
    public String largestMultipleOfThree(int[] digits) {
    int m1[] = new int[] {1, 4, 7, 2, 5, 8}, m2[] = new int[] {2, 5, 8, 1, 4, 7};
    int sum = 0, ds[] = new int[10];
    for (int d : digits) {
        ++ds[d];
        sum += d;
    }
    while (sum % 3 != 0) {
        for (int i : sum % 3 == 1 ? m1 : m2) {
          if (ds[i] > 0) {
            --ds[i];
            sum -= i;
            break;
          }
        }
      }
    StringBuilder sb = new StringBuilder();
    for (int i = 9; i >= 0; --i)
        sb.append(Character.toString('0' + i).repeat(ds[i]));     
    return sb.length() > 0 && sb.charAt(0) == '0' ? "0" : sb.toString();
}
}