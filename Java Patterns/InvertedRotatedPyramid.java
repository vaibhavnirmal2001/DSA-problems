public class InvertedRotatedPyramid {

    public static void invertedPyramid(int n) {
        // outer loop
        for (int i = 1; i <= n; i++) {
            // spaces loop
            for (int j = 1; j <= n - i; j++) {
                System.out.print(" ");
            }

            // star loop
            for (int j = 1; j <= i; j++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }

    public static void main(String args[]) {
        invertedPyramid(5);
    }
}