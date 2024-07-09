import java.util.Scanner;
import java.util.Arrays;
import java.util.Comparator;

public class atcoder_ABC145_E {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int t = in.nextInt();
        int[] time_value = new int[n];
        for(int time_value_i=0; time_value_i < n; time_value_i++){
            time_value[time_value_i] = in.nextInt();
        }
        time_value = Arrays.stream(time_value).sorted((a,b) -> a-b).toArray();
        int[] dp = new int[n+1];
        for(int i=0; i<=n; i++){
            dp[i] = 0;
        }
        for(int i=1; i<=n; i++){
            for(int t=1; t<=t; t++){
                if(time_value[i]>t){
                    dp[i] = Math.max(dp[i], dp[i-1]+time_value[i]);
                }else{
                    dp[i] = Math.max(dp[i], dp[i-1]+time_value[i]-time_value[i-1]);
                }
            }
        }
        int val_acum = time_value[n];
        int t = t-1;
        int max_val = dp[n]+val_acum;
        for(int i=n-1; i>=0; i--){
            val_acum += time_value[i];
            t -= time_value[i+1];
            if(t<0){
                break;
            }else{
                max_val = Math.max(max_val, dp[i]+val_acum);
            }
        }
        System.out.println(max_val);
    }
}