import java.util.Scanner;
import java.util.Arrays;
public class s571001771 {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int m=sc.nextInt();
        int[] key=new int[1005];
        int[] cost=new int[1005];
        int[][] dp=new int[1<<12+5][1005];
        for(int i=0;i<(1<<12)+5;i++){
            for(int j=0;j<1005;j++){
                dp[i][j]=123456789012;
            }
        }
        dp[0][0]=0;
        for(int i=1;i<=m;i++){
            int b=sc.nextInt();
            cost[i]=sc.nextInt();
            for(int j=0;j<b;j++){
                int c=sc.nextInt();
                key[i]+=(1<<(c-1));
            }
        }
        for(int i=0;i<(1<<n);i++){
            for(int j=0;j<m;j++){
                dp[i][j+1]=Math.min(dp[i][j+1],dp[i][j]);
                dp[i|key[j+1]][j+1]=Math.min(dp[i|key[j+1]][j+1],dp[i][j]+cost[j+1]);
            }
        }
        if(dp[(1<<n)-1][m]==123456789012)System.out.println(-1);
        else System.out.println(dp[(1<<n)-1][m]);
    }
}