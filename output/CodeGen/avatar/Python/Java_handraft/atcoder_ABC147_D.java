import java.util.*;

public class atcoder_ABC147_D {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        long[] A = new long[N];
        for (int i = 0; i < N; i++) {
            A[i] = scanner.nextLong();
        }
        System.out.println(findMaxForm(A, N));
    }
    public static long findMaxForm(long[] A, int N) {
        long result = 0;
        for (int b = 0; b < 60; b++) {
            int bs = 0;            
            for (int i = 0; i < N; i++) {
                bs += (A[i] >> b) & 1;
            }
            result = (result + bs * (N - bs) * (1L << b)) % 1000000007;
        }
        return result;
    }
}