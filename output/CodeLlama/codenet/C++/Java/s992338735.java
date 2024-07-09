import java.util.Scanner;

public class s992338735 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N, S;
        while (sc.hasNextInt()) {
            N = sc.nextInt();
            if (N == 0) {
                break;
            }
            int M = -1, m = 1001, addup = 0;
            for (int i = 0; i < N; i++) {
                S = sc.nextInt();
                addup += S;
                if (S > M) {
                    M = S;
                }
                if (S < m) {
                    m = S;
                }
            }
            System.out.println((addup - M - m) / (N - 2));
        }
    }
}