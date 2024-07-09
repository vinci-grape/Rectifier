import java.util.Scanner;
import java.util.HashSet;

public class s411244720 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        int K = scanner.nextInt();
        HashSet<Integer> S = new HashSet<>();
        for (int i = 0; i < K; i++) {
            int d = scanner.nextInt();
            for (int j = 0; j < d; j++) {
                int A = scanner.nextInt();
                S.add(A);
            }
        }
        System.out.println(N - S.size());
    }
}