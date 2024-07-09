import java.util.*;

public class s798522572 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int T = sc.nextInt();
        int[] A = new int[N];
        List<Integer> B = new ArrayList<>();
        for (int i = 0; i < N; i++) {
            A[i] = sc.nextInt();
        }
        int m = A[0];
        B.add(A[1] - m);
        m = Math.min(m, A[1]);
        for (int i = 2; i < N; i++) {
            B.add(A[i] - m);
            m = Math.min(m, A[i]);
        }
        System.out.println(Collections.frequency(B, Collections.max(B)));
    }
}