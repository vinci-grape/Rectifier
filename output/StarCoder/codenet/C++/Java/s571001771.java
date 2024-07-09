import java.util.*;
import java.io.*;
public class s571001771 {
    public static void main(String[] args) throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        int m = Integer.parseInt(br.readLine());
        int[] key = new int[m+1];
        int[] cost = new int[m+1];
        int[][] dp = new int[1<<n][m+1];
        for(int i=0;i<1<<n;i++){
            for(int j=0;j<m+1;j++){
                dp[i][j] = Integer.MAX_VALUE;
            }
        }
        dp[0][0] = 0;
        for(int i=1;i<=m;i++){
            int b = Integer.parseInt(br.readLine());
            cost[i] = Integer.parseInt(br.readLine());
            for(int j=0;j<b;j++){
                int c = Integer.parseInt(br.readLine());
                key[i] += (1<<(c-1));
            }
        }
        for(int i=0;i<(1<<n);i++){
            for(int j=0;j<m;j++){
                dp[i][j+1] = Math.min(dp[i][j], dp[i][j+1]);
                dp[i|key[j+1]][j+1] = Math.min(dp[i|key[j+1]][j+1], dp[i][j]+cost[j+1]);
            }
        }
        if(dp[(1<<n)-1][m] == Integer.MAX_VALUE) System.out.println(-1);
        else System.out.println(dp[(1<<n)-1][m]);
    }
}