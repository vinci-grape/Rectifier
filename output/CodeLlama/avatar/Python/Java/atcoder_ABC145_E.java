import java.util.*;
import java.lang.*;
import java.io.*;

public class atcoder_ABC145_E
{
	public static void main (String[] args) throws java.lang.Exception{
		Scanner sc = new Scanner(System.in);
		int N = sc.nextInt();
		int T = sc.nextInt();
		int[][] time_value = new int[N+1][2];
		for(int i=1;i<=N;i++){
			time_value[i][0] = sc.nextInt();
			time_value[i][1] = sc.nextInt();
		}
		Arrays.sort(time_value, new Comparator<int[]>(){
			public int compare(int[] a, int[] b){
				return a[1]-b[1];
			}
		});
		int[][] dp = new int[N+1][T+1];
		for(int i=0;i<=N;i++){
			for(int j=0;j<=T;j++){
				dp[i][j] = -1;
			}
		}
		for(int i=0;i<=T;i++){
			dp[0][i] = 0;
		}
		for(int i=1;i<=N;i++){
			dp[i][0] = 0;
			for(int j=1;j<=T;j++){
				if(time_value[i][0]>j){
					dp[i][j] = dp[i-1][j];
				}
				else{
					dp[i][j] = Math.max(dp[i-1][j],time_value[i][1]+dp[i-1][j-time_value[i][0]]);
				}
			}
		}
		int val_acum = time_value[N][1];
		int t = T-1;
		int max_val = val_acum+dp[N-1][t];
		for(int i=N-1;i>=1;i--){
			val_acum += time_value[i][1];
			t -= time_value[i+1][0];
			if(t<0){
				break;
			}
			else{
				max_val = Math.max(max_val,val_acum+dp[i-1][t]);
			}
		}
		System.out.println(max_val);
	}
}