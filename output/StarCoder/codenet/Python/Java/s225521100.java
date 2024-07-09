import java.util.*;

public class s225521100 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int K = sc.nextInt();
        int[] A = new int[N];
        for (int i = 0; i < N; i++) {
            A[i] = 0;
        }
        for (int i = 0; i < K; i++) {
            int d = sc.nextInt();
            int[] AA = new int[d];
            for (int j = 0; j < d; j++) {
                AA[j] = sc.nextInt();
            }
            for (int j = 0; j < d; j++) {
                A[AA[j] - 1] = 1;
            }
        }
        int n = 0;
        for (int i = 0; i < N; i++) {
            if (A[i] == 0) {
                n++;
            }
        }
        System.out.println(n);
    }
}