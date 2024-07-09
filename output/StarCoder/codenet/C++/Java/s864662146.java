import java.util.*;

public class s864662146 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int A[] = new int[N];
        for (int i = 0; i < N; i++) A[i] = sc.nextInt();

        int m = A[0];
        int M = A[0];
        for (int i = 0; i < N; i++) {
            if (A[i] < m) m = A[i];
            if (A[i] > M) M = A[i];
        }

        System.out.println(M - m);
    }
}