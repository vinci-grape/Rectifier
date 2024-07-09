public class s273727373 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] A = new int[n];
        for (int A_i = 0; A_i < n; A_i++) {
            A[A_i] = in.nextInt();
        }
        int[] B = new int[n];
        for (int i = 0; i < n; i++) {
            B[i] = i + 1;
        }
        for (int i = 0; i < n; i++) {
            B[A[i] - 1] = i + 1;
        }
        for (int i = 0; i < n; i++) {
            System.out.print(B[i] + " ");
        }
    }
}