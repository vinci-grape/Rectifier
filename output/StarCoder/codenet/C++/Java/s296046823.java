import java.util.Scanner;

public class s296046823 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int K = sc.nextInt();

        int[] v = new int[N];
        for (int i = 0; i < N; ++i)
            v[i] = sc.nextInt();

        // ceil((N-1) / (K-1))
        int count = ((N - 1) + ((K - 1) - 1)) / (K - 1);
        System.out.println(count);
    }
}