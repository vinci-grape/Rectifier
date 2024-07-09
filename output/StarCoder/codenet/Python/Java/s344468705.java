import java.util.*;
import java.io.*;

public class s344468705 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int n = Integer.parseInt(br.readLine());
        for (int i = 0; i < n; i++) {
            int num = Integer.parseInt(br.readLine());
            num = -num;
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
        bw.write(String.valueOf(dp.length - 1) + "\n");
        bw.flush();
        bw.close();
    }
}