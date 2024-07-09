import java.util.Arrays;
import java.util.Scanner;

public class s636592395 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        int[] A = new int[N];
        for (int i = 0; i < N; i++) {
            A[i] = scanner.nextInt();
        }
        Arrays.sort(A);
        int ans = A[N - 1] - A[0];
        System.out.println(ans);
    }
}