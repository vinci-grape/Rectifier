import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args)
	{
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		int b = sc.nextInt();
		int v = sc.nextInt();
		int w = sc.nextInt();
		int t = sc.nextInt();
		if(a == b)
		{
			System.out.println("YES");
		}
		else if(v <= w)
		{
			System.out.println("NO");
		}
		else
		{
			if(t < Math.abs(a - b) / (v - w))
			{
				System.out.println("NO");
			}
			else
			{
				System.out.println("YES");
			}
		}
	}
}