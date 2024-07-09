public class s048491063 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int N = in.nextInt();
        int M = in.nextInt();
        int Q = in.nextInt();
        int[][] train = new int[N][N];
        for (int i = 0; i < M; i++) {
            int l = in.nextInt();
            int r = in.nextInt();
            train[l - 1][r - 1] += 1;
        }
        int[][] accum = new int[N + 1][N + 1];
        for (int i = 0; i < N; i++) {
            int[] temp = new int[N + 1];
            int v = 0;
            for (int j = 0; j < N; j++) {
                v += train[i][j];
                temp[j + 1] = accum[i][j] + v;
            }
            accum[i + 1] = temp;
        }
        for (int i = 0; i < Q; i++) {
            int p = in.nextInt();
            int q = in.nextInt();
            int v = accum[q][q] - accum[p - 1][q] - accum[q][p - 1] + accum[p - 1][p - 1];
            System.out.println(v);
        }
    }
}