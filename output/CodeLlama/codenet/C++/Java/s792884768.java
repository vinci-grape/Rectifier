import java.util.Scanner;

public class s792884768 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        if (n == 1) {
            System.out.println(0);
            return;
        }
        int[][] chain = new int[n][2];
        for (int i = 0; i < n; i++) {
            chain[i][0] = sc.nextInt();
            chain[i][1] = sc.nextInt();
        }
        System.out.println(solve(chain, 0, n - 1));
    }

    private static int solve(int[][] chain, int s, int l) {
        if (s == l) return 0;
        if (s + 1 == l) return chain[s][0] * chain[s][1] * chain[l][1];
        int min = Integer.MAX_VALUE;
        for (int i = s; i < l; i++) {
            int c = solve(chain, s, i) + chain[s][0] * chain[i][1] * chain[l][1] + solve(chain, i + 1, l);
            min = Math.min(min, c);
        }
        return min;
    }
}