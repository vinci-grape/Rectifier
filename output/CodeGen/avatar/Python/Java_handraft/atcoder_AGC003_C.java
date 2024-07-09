import java.util.*;

public class atcoder_AGC003_C {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = Integer.parseInt(scanner.nextLine());
        long[] A = new long[N];
        for (int i = 0; i < N; i++) {
            A[i] = Long.parseLong(scanner.nextLine()) * N + i;
        }
        System.out.println(findMaxLength(A));
    }
    public static int findMaxLength(long[] A) {
        int N = A.length;
        Arrays.sort(A);
        int cnt = 0;
        for (int i = 0; i < N; i++) {
            long d = (A[i] % N) % 2;
            if (d % 2!= i % 2) cnt += 1;
        }
        return cnt / 2;
    }
}