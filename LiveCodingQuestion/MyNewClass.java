
import java.util.Arrays;
import java.util.Scanner;

public class MyNewClass {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter the size of array : ");

        int n = sc.nextInt();

        int[] a= new int[n];
        System.out.println("Enter the "+ n+" array elements: ");

        for (int i = 0; i < n; i++) {
            a[i]=sc.nextInt();
        }
        int sum=0;
        for (Integer x: a){
            sum+=x;
        }
        System.out.println(sum);

        Arrays.sort(a);
        for (int i = 0; i < n-1; i++) {
            if (a[i]==a[i+1]){
                System.out.println(a[i]+" is duplicate element");
                break;
            }
        }

    }
}
