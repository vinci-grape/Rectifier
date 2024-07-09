import java.util.Scanner;

public class s225521100 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        int K = scanner.nextInt();
        int[] A = new int[N];

        for (int i = 0; i < N; i++) {
            A[i] = 0;
        }

        for (int i = 0; i < K; i++) {
            int d = scanner.nextInt();
            int[] AA = new int[d];
            for (int j = 0; j < d; j++) {
                AA[j] = scanner.nextInt();
                A[AA[j] - 1] = 1;
            }
        }

        int n = 0;
        for (int i = 0; i < N; i++) {
            if (A[i] == 0) {
                n += 1;
            }
        }
        System.out.println(n);
    }
}