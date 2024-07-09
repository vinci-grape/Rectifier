public class s123678341 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int X = in.nextInt();
        int Y = in.nextInt();
        int Z = in.nextInt();
        int K = in.nextInt();
        long[] A = new long[X];
        long[] B = new long[Y];
        long[] C = new long[Z];
        for (int i = 0; i < X; i++) {
            A[i] = in.nextLong();
        }
        for (int i = 0; i < Y; i++) {
            B[i] = in.nextLong();
        }
        for (int i = 0; i < Z; i++) {
            C[i] = in.nextLong();
        }
        Arrays.sort(A);
        Arrays.sort(B);
        Arrays.sort(C);
        long[] AB = new long[X * Y];
        for (int i = 0; i < X; i++) {
            for (int j = 0; j < Y; j++) {
                AB[i * Y + j] = A[i] + B[j];
            }
        }
        Arrays.sort(AB);
        long[] ABC = new long[min(K, AB.length)];
        for (int i = 0; i < min(K, AB.length); i++) {
            for (int j = 0; j < Z; j++) {
                ABC[i] += AB[i * Z + j] + C[j];
            }
        }
        Arrays.sort(ABC);
        for (int i = 0; i < K; i++) {
            System.out.println(ABC[i]);
        }
    }
}