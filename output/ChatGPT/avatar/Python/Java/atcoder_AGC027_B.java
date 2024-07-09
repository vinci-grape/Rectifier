import java.util.*;

public class atcoder_AGC027_B {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        int X = scanner.nextInt();
        int[] A = new int[N];
        for (int i = 0; i < N; i++) {
            A[i] = scanner.nextInt();
        }
        
        int[] S = new int[N];
        S[0] = A[0];
        for (int i = 1; i < N; i++) {
            S[i] = S[i-1] + A[i];
        }
        
        int ans = Integer.MAX_VALUE;
        for (int k = 1; k <= N; k++) {
            int E = k * X + 2 * sum(S, N - 2 * k - 1, -k);
            ans = Math.min(ans, E);
        }
        
        System.out.println(ans + N * X + 5 * S[N-1]);
    }
    
    public static int sum(int[] S, int start, int step) {
        int sum = 0;
        for (int i = start; i >= 0; i += step) {
            sum += S[i];
        }
        return sum;
    }
}