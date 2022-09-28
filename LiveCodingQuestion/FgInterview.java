import java.util.*;

public class FgInterview {


    public static void main(String[] args) {



        int[] a= new int[]{1,2,4,4,5,6,};



        for (int i = 0; i < a.length; i++) {
            System.out.print(a[i]+" ");
        }

        System.out.println("\n ");

        for (int i = 0; i < a.length - 1; i++) {
            for (int j = i+1; j < a.length; j++) {
                if (a[i]==a[j]){
                    System.out.println(a[i]);
                }
            }
        }
    }
}
