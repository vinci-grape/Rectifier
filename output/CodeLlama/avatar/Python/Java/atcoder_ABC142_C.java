import java.util.*;
import java.lang.*;
import java.io.*;

public class atcoder_ABC142_C
{
	public static void main (String[] args) throws java.lang.Exception{
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int[] a = new int[n];
		for(int i=0;i<n;i++)
		{
			a[i] = sc.nextInt();
		}
		Arrays.sort(a);
		for(int i=0;i<n-1;i++)
		{
			System.out.print(a[i]+" ");
		}
		System.out.print(a[n-1]);
	}
}