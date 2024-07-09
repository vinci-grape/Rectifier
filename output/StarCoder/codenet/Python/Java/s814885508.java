import java.util.Scanner;

public class s814885508 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int X = sc.nextInt();
        int K = sc.nextInt();
        int D = sc.nextInt();

        int r = X / D;
        if (Math.abs(r) > K) {
            System.out.println(Math.abs(X) - K * D);
            return;
        }
        int a = X - r * D;
        if ((K - r) % 2 == 0) {
            System.out.println(a);
        } else {
            System.out.println(Math.abs(D - a));
        }
    }
}