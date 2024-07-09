import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args)
	{
		Scanner sc = new Scanner(System.in);
		int A = sc.nextInt();
		int B = sc.nextInt();
		int min = B * 10;
		int max = (B+1) * 10 -1;
		int ans = -1;
		for(int i=min;i<max+1;i++)
		{
			if(i%10 == A)
			{
				ans = i;
				break;
			}
		}
		System.out.println(ans);
	}
}