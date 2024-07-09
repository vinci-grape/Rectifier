import java.util.Scanner;

public class s992338735 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N, S;

        while ((N = scanner.nextInt()) > 0) {
            int M = -1;
            int m = 1001;
            int addup = 0;

            for (int i = 0; i < N; i++) {
                S = scanner.nextInt();
                addup += S;
                if (S > M) M = S;
                if (S < m) m = S;
            }

            System.out.println((addup - M - m) / (N - 2));
        }
    }
}