import java.util.*;
public class s846046431 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int M = sc.nextInt();
        int[] A = new int[N];
        for (int i = 0; i < N; i++) {
            A[i] = sc.nextInt();
        }
        Arrays.sort(A);
        double S = 0;
        for (int i = 0; i < N; i++) {
            S += A[i];
        }
        for (int i = 0; i < M; i++) {
            if (A[i] / S - 1 / (4 * M) < 0) {
                System.out.println("No");
                return;
            }
        }
        System.out.println("Yes");
    }
}