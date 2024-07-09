import java.util.*;
import java.lang.*;
import java.io.*;

public class s146553386
{
	public static void main (String[] args) throws java.lang.Exception{
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int[][] a = new int[2][n];
		for(int i=0;i<2;i++)
		{
			for(int j=0;j<n;j++)
			{
				a[i][j] = sc.nextInt();
			}
		}
		int[] res_0 = new int[n];
		int[] res_1 = new int[n];
		for(int i=0;i<n;i++)
		{
			res_0[i] = a[0][i];
			res_1[i] = a[1][n-1-i];
		}
		for(int i=1;i<n;i++)
		{
			res_0[i] = res_0[i-1] + a[0][i];
			res_1[i] = res_1[i-1] + a[1][n-1-i];
		}
		int ans = 0;
		for(int i=0;i<n;i++)
		{
			int check = res_0[i] + res_1[n-1-i];
			ans = Math.max(ans,check);
		}
		System.out.println(ans);
	}
}