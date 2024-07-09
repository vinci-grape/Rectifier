import java.util.*;

public class s798522572 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int T = sc.nextInt();
        int[] A = new int[N];
        int[] B = new int[N];
        for (int i = 0; i < N; i++) {
            A[i] = sc.nextInt();
        }
        int m = A[0];
        B[1] = A[1] - m;
        m = Math.min(m, A[1]);
        for (int i = 2; i < N; i++) {
            B[i] = A[i] - m;
            m = Math.min(m, A[i]);
        }
        System.out.println(count(B, B[N - 1]));
    }

    public static int count(int[] B, int max) {
        int count = 0;
        for (int i = 0; i < B.length; i++) {
            if (B[i] == max) {
                count++;
            }
        }
        return count;
    }
}