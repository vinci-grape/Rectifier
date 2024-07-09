import java.util.*;
import java.lang.*;
import java.io.*;
public class atcoder_AGC019_A
{
	public static void main (String[] args) throws java.lang.Exception{
		Scanner sc = new Scanner(System.in);
		int q = sc.nextInt();
		int h = sc.nextInt();
		int s = sc.nextInt();
		int d = sc.nextInt();
		int n = sc.nextInt();
		int best1L = Math.min(q*4,h*2,s);
		int best2L = Math.min(d,best1L*2);
		if(n%2==0)
			System.out.println(best2L*(n/2));
		else
			System.out.println(best2L*(n/2)+best1L);
	}
}