import java.util.Scanner;  
public class RightPascalTrianglePattern  
{  
public static void main(String[] args)  
{  
int i, j, rows;  
Scanner sc = new Scanner(System.in);  
System.out.print("Enter the number of rows you want to print: ");  
rows = sc.nextInt();          
for (i= 0; i<= rows-1; i++)  
{  
for (j=0; j<=i; j++)   
{  
System.out.print("*"+ " ");  
}   
System.out.println("");   
}   
for (i=rows-1; i>=0; i--)  
{  
for(j=0; j <= i-1;j++)  
{  
System.out.print("*"+ " ");  
}  
System.out.println("");  
}  
}  
}  
