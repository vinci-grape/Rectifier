import java.util.*;

public class atcoder_AGC027_B {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        int[][] costs = new int[N + 1][N];
        for (int i = 0; i < N; i++) {
            costs[i] = new int[N + 1];
            for (int j = 0; j < i; j++) {
                costs[i][j] = 0;
            }
        }
        int[] S = new int[N + 1];
        int[] E = new int[N + 1];
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < i; j++) {
                S[i] += costs[i][j];
            }
            for (int j = i + 1; j < N; j++) {
                E[i] += costs[i][j];
            }
        }
        int ans = Integer.MAX_VALUE;
        for (int i = 0; i < N; i++) {
            int k = i;
            int s = S[i];
            int e = E[i];
            while (k > 0) {
                s += costs[k][i - 1];
                e += costs[k][i];
                k--;
            }
            ans = Math.min(ans, e + s);
        }
        System.out.println(ans + N * costs[0][0] + 5 * S[N]);
    }
}