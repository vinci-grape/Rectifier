import java.util.*;
import java.lang.*;
import java.io.*;
import java.math.*;

public class atcoder_ABC152_E {
	public static void main (String[] args) {
		Scanner input = new Scanner(System.in);
		int n = input.nextInt();
		int[] a = new int[n];
		for(int i=0;i<n;i++)
			a[i] = input.nextInt();
		int lcm = 1;
		for(int i=0;i<n;i++)
			lcm = lcm * a[i] / gcd(lcm, a[i]);
		BigInteger ans = BigInteger.valueOf(lcm);
		for(int i=0;i<n;i++)
			ans = ans.multiply(BigInteger.valueOf(a[i]).modPow(BigInteger.valueOf(1000000007-2), BigInteger.valueOf(1000000007)));
		System.out.println(ans.mod(BigInteger.valueOf(1000000007)));
	}
	
	public static int gcd(int a, int b) {
		if(b == 0)
			return a;
		return gcd(b, a%b);
	}
}