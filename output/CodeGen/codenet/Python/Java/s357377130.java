import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args)
	{
		Scanner sc=new Scanner(System.in);
		int A=sc.nextInt();
		int B=sc.nextInt();
		int K=sc.nextInt();
		if(A+K-1>=B-K+1)
		{
			while(A<=B)
			{
				System.out.print(A+" ");
				A++;
			}
		}
		else
		{
			int i=0;
			while(i<=K-1)
			{
				System.out.print(A+i+" ");
				i++;
			}
			while(B-K+1<=B)
			{
				System.out.print(B-K+1+" ");
				K--;
			}
		}
	}
}