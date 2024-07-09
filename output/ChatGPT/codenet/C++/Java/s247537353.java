import java.util.Scanner;

public class s247537353 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        long A = scanner.nextLong();
        long B = scanner.nextLong();
        long C = scanner.nextLong();
        long K = scanner.nextLong();

        if (A + B >= K) {
            System.out.println(Math.min(A, K));
        } else {
            System.out.println(A - (K - (A + B)));
        }
    }
}