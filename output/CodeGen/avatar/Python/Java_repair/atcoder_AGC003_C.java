import java.util.*;

public class atcoder_AGC003_C {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        System.out.println(findMaxLength(scanner.nextInt()));
    }
    public static int findMaxLength(int[] A) {
        int N = A.length;
        Arrays.sort(A);
        int cnt = 0;
        for (int i = 0; i < N; i++) {
            int d = (A[i] % N) % 2;
            if (d % 2!= i % 2) cnt += 1;
        }
        return cnt / 2;
    }
}