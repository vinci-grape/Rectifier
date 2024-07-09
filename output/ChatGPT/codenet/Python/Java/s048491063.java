public class s048491063 {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int N = scanner.nextInt();
        int M = scanner.nextInt();
        int Q = scanner.nextInt();

        int[][] train = new int[N][N];
        for (int i = 0; i < M; i++) {
            int l = scanner.nextInt();
            int r = scanner.nextInt();
            train[l-1][r-1] += 1;
        }

        int[][] accum = new int[N+1][N+1];
        for (int i = 0; i < N; i++) {
            int v = 0;
            for (int j = 0; j < N; j++) {
                v += train[i][j];
                accum[i+1][j+1] = accum[i][j+1] + v;
            }
        }

        for (int i = 0; i < Q; i++) {
            int p = scanner.nextInt();
            int q = scanner.nextInt();
            int v = accum[q][q] - accum[p-1][q] - accum[q][p-1] + accum[p-1][p-1];
            System.out.println(v);
        }
    }
}