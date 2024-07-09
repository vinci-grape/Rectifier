import java.util.Scanner;

public class s814885508 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int X = scanner.nextInt();
        int K = scanner.nextInt();
        int D = scanner.nextInt();

        int r = X / D;
        if (Math.abs(r) > K) {
            System.out.println(Math.abs(X) - K * D);
            System.exit(0);
        }
        int a = X - r * D;
        if ((K - r) % 2 == 0) {
            System.out.println(a);
        } else {
            System.out.println(Math.abs(D - a));
        }
    }
}