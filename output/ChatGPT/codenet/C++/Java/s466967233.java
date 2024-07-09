import java.util.Scanner;

public class s466967233 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        long N, K;
        long[] A = new long[200100];
        long[] B = new long[200100];
        int now = 1;
        long cnt = 0;
        N = scanner.nextLong();
        K = scanner.nextLong();
        for (int i = 1; i <= N; i++) {
            A[i] = scanner.nextLong();
        }
        for (int i = 1; i <= 200100; i++) {
            B[i] = -1;
        }
        long j;
        B[1] = 0;
        for (j = 1; j <= K; j++) {
            now = (int) A[now];
            if (B[now] == -1) {
                B[now] = j;
            } else {
                cnt = j;
                break;
            }
        }
        if (j < K) {
            long tmp = (K - B[now]) % (cnt - B[now]);
            for (long i = 0; i < tmp; i++) {
                now = (int) A[now];
            }
        }
        System.out.println(now);
    }
}