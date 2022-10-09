import java.util.*;
import java.lang.*;
import java.io.*;
class NEARESTCOURT
{
	public static void main (String[] args) throws java.lang.Exception
	{
    Scanner sc =new Scanner(System.in);
    int t,x,y;
    t=sc.nextInt();
    for(int i=1;i<=t;i++)
    {
      x=sc.nextInt();
      y=sc.nextInt();
      int a=(x+y)/2;
      System.out.println((int)Math.max(x,y)-a);
    }
  }
}
