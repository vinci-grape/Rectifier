public class s107598592 {
    public static void main(String[] args) {
        int N;
        Scanner in = new Scanner(System.in);
        N = in.nextInt();
        int[] X = new int[N];
        int[] Y = new int[N];
        for (int i = 0; i < N; i++) {
            X[i] = in.nextInt();
            Y[i] = X[i];
        }
        in.close();
        Arrays.sort(Y);
        int y = Y[N / 2];
        for (int i = 0; i < N; i++) {
            if (X[i] < Y[N / 2]) {
                System.out.print(Y[N / 2]);
            } else {
                System.out.print(Y[N / 2 - 1]);
            }
            System.out.println();
        }
    }
}