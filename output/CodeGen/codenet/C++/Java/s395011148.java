public class s395011148 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] A = new int[n];
        for (int A_i = 0; A_i < n; A_i++) {
            A[A_i] = in.nextInt();
        }
        in.close();
        long[] N = new long[1 << 18];
        for (int i = 1; i <= n; i++) {
            N[i] = A[i];
        }
        for (int i = 0; i <= n; i++) {
            for (int j = 0; j < 20; j++) {
                N[i][j] = -(1 << 60);
            }
        }
        N[0][10] = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = 6; j <= 14; j++) {
                if (N[i - 1][0][j]!= -(1 << 60)) {
                    N[i][1][j + 1] = Math.max(N[i][1][j + 1], N[i - 1][0][j] + A[i]);
                    N[i][0][j - 1] = Math.max(N[i][0][j - 1], N[i - 1][0][j]);
                }
                if (N[i - 1][1][j]!= -(1 << 60)) {
                    N[i][0][j - 1] = Math.max(N[i][0][j - 1], N[i - 1][1][j]);
                }
            }
        }
        long V = 10L + (n / 2) - (n - (n / 2));
        long T1 = N[n][0][V];
        long T2 = N[n][1][V];
        System.out.println(Math.max(T1, T2));
    }
}