// class Solution {
//     public static String rev(String s){
//         char[] a= s.toCharArray();
//         for (int i = 0,j=a.length-1; i < a.length && i<j; i++,j--) {
//             char temp=a[i];
//             a[i]=a[j];
//             a[j]=temp;
//         }
//         String ans = "";
//         for (char c : a) {
//             ans += c;
//         }
//         return ans;
//     }
//     public static String reverseWords(String s) {
//         String[] a= s.split(" ");

//         for (int i = 0; i < a.length; i++) {
//             a[i]= rev(a[i]);
//         }
//         String ans="";
//          for (int i = 0; i < a.length; i++) {
//             ans+=a[i];
//             if (i<a.length-1) ans+=" ";
//         }

//         return ans;

//     }
// }

class Solution {
    public String reverseWords(String s) {
        char[] c = s.toCharArray();
        int i = 0, j = 0;
        for (;j<c.length;j++) {
            if (c[j] == ' ') {
                reverseWord(c, i, j-1);
                i = j+1;
            } 
        }
        reverseWord(c, i, j-1);
        return new String(c);
    }
    
    private void reverseWord(char[] c, int i, int j) {
        while (i < j) {
            char temp = c[i];
            c[i++] = c[j];
            c[j--] = temp;
        }
    }
}