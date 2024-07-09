import java.util.*;
import java.io.*;

public class s344468705 {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        for (int i = 0; i < n; i++) {
            solve(br);
        }
    }

    public static void solve(BufferedReader br) throws IOException {
        int n = Integer.parseInt(br.readLine());
        int[] dp = new int[n + 1];
        Arrays.fill(dp, Integer.MIN_VALUE);
        dp[0] = Integer.MAX_VALUE;
        StringTokenizer st = new StringTokenizer(br.readLine());
        for (int i = 0; i < n; i++) {
            int num = -Integer.parseInt(st.nextToken());
            if (num >= dp[dp.length - 1]) {
                dp[dp.length] = num;
            } else {
                int idx = Arrays.binarySearch(dp, num);
                if (idx < 0) {
                    idx = -idx - 1;
                }
                dp[idx] = num;
            }
        }
        System.out.println(dp.length - 1);
    }
}