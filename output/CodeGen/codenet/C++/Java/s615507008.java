public class s615507008 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int N = in.nextInt();
        int M = in.nextInt();
        int[] T = new int[N];
        for (int T_i = 0; T_i < N; T_i++) {
            T[T_i] = in.nextInt();
        }
        int[] P = new int[M];
        int[] X = new int[M];
        for (int i = 0; i < M; i++) {
            P[i] = in.nextInt();
            X[i] = in.nextInt();
        }
        solve(N, T, M, P, X);
    }
    
    public static void solve(int N, int[] T, int M, int[] P, int[] X) {
        int[] ans = new int[N];
        for (int i = 0; i < M; i++) {
            int j = P[i] - 1;
            if (j < 0) {
                ans[i] = X[i];
            } else {
                ans[i] = T[j];
            }
        }
        for (int i = 0; i < N; i++) {
            cout.print(ans[i]);
        }
    }
}