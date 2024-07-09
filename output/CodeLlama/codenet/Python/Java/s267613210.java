import java.util.Scanner;

public class s267613210 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int K = sc.nextInt();
        int N = sc.nextInt();
        int[] A = new int[N];
        for (int i = 0; i < N; i++) {
            A[i] = sc.nextInt();
        }
        int[] dist = new int[N-1];
        for (int i = 0; i < N-1; i++) {
            dist[i] = A[i+1] - A[i];
        }
        dist[N-2] = K + A[0] - A[N-1];
        int maxv = 0;
        for (int i = 0; i < N-1; i++) {
            if (dist[i] > maxv) {
                maxv = dist[i];
            }
        }
        int sum = 0;
        for (int i = 0; i < N-1; i++) {
            sum += dist[i];
        }
        System.out.println(sum - maxv);
    }
}