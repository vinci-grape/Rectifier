import java.util.*;
import java.io.*;

public class s166776347 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int K = sc.nextInt();
        int[] A = new int[N];
        for (int i = 0; i < N; i++) {
            A[i] = sc.nextInt();
        }

        int[] count = new int[2005];
        for (int i = 0; i < N; i++) {
            count[A[i] - 1]++;
        }

        int ans = 0;
        int remain = N;
        for (int i = 0; i < 2005; i++) {
            remain -= count[i];
            ans += count[i] * remain;
        }

        ans += (K * (K - 1)) / 2 * ans;
        ans %= 1000000007;
        System.out.println(ans);
    }
}