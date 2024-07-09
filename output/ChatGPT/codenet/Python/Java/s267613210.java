import java.util.Scanner;

public class s267613210 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int K = input.nextInt();
        int N = input.nextInt();
        int[] A = new int[N];
        for (int i = 0; i < N; i++) {
            A[i] = input.nextInt();
        }
        int[] dist = new int[N];
        for (int i = 0; i < N - 1; i++) {
            dist[i] = A[i + 1] - A[i];
        }
        dist[N - 1] = K + A[0] - A[N - 1];
        int maxv = Integer.MIN_VALUE;
        int sum = 0;
        for (int i = 0; i < N; i++) {
            sum += dist[i];
            maxv = Math.max(maxv, dist[i]);
        }
        System.out.println(sum - maxv);
    }
}