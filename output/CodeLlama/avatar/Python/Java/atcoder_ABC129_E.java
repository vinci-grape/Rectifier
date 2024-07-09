import java.util.*;
import java.lang.*;
import java.io.*;

public class atcoder_ABC129_E
{
	public static void main (String[] args) throws java.lang.Exception{
		Scanner sc = new Scanner(System.in);
		String l = sc.nextLine();
		int n = l.length();
		int mod = 1000000007;
		int[][] dp = new int[n+1][2];
		dp[0][0] = 1;
		for(int i=0;i<n;i++){
			if(l.charAt(i)=='0'){
				dp[i+1][0] = (dp[i][0] + dp[i][1]*3)%mod;
				dp[i+1][1] = (dp[i][0] + dp[i][1]*3)%mod;
			}
			else{
				dp[i+1][0] = (dp[i][0]*2 + dp[i][1]*3)%mod;
				dp[i+1][1] = (dp[i][0] + dp[i][1]*3)%mod;
			}
		}
		System.out.println((dp[n][0] + dp[n][1])%mod);
	}
}