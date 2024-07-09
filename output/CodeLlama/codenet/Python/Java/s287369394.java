import java.util.Scanner;

public class s287369394 {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        int[] A = new int[N];
        int[] B = new int[N];
        for (int i = 0; i < N; i++) {
            A[i] = scan.nextInt();
        }
        for (int i = 0; i < N; i++) {
            B[i] = scan.nextInt();
        }
        int ans = 0;
        for (int i = 0; i < N - 1; i++) {
            int d = Math.min(A[i], B[i]);
            ans += d;
            A[i] -= d;
            B[i] -= d;
            d = Math.min(A[i + 1], B[i]);
            ans += d;
            A[i + 1] -= d;
            B[i] -= d;
        }
        System.out.println(ans);
    }
}