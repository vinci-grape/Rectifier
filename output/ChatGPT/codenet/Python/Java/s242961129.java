import java.util.Scanner;

public class s242961129 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        int[] A = new int[N];
        for (int i = 0; i < N; i++) {
            A[i] = scanner.nextInt();
        }
        int ans = Math.abs(A[N - 1]);
        int[] diff = new int[N];
        int[] B = new int[N + 2];
        B[0] = 0;
        B[N + 1] = 0;
        for (int i = 1; i <= N; i++) {
            B[i] = A[i - 1];
        }
        for (int i = 1; i <= N; i++) {
            int dif = Math.abs(B[i] - B[i - 1]) + Math.abs(B[i] - B[i + 1]) - Math.abs(B[i - 1] - B[i + 1]);
            ans += Math.abs(B[i] - B[i - 1]);
            diff[i - 1] = dif;
        }
        for (int i = 0; i < N; i++) {
            System.out.println(ans - diff[i]);
        }
    }
}