import java.util.*;
public class atcoder_ABC147_D {
    public static void main(String[] args) {
        long startTime = System.currentTimeMillis();
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        long div = (long) Math.pow(10, 9) + 7;
        long[] A = new long[n];
        long ans = 0;
        for (int i = 0; i < n; i++) {
            A[i] = sc.nextLong();
        }
        for (int i = 0; i < 60; i++) {
            long a = 0;
            long count1 = 0;
            for (int j = 0; j < n; j++) {
                if ((A[j] >> i & 1) == 1) count1++;
            }
            a = a + count1 * (n - count1);
            for (int j = 0; j < i; j++) {
                a = (a << 1) % div;
            }
            ans += a;
            ans %= div;
        }
        System.out.println(ans);
        long endTime = System.currentTimeMillis();
    }
}