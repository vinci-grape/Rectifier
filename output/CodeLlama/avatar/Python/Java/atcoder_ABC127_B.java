import java.util.Scanner;
public class atcoder_ABC127_B {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double r = sc.nextDouble();
        double D = sc.nextDouble();
        double x = sc.nextDouble();
        for (int i = 2; i <= 12; i++) {
            System.out.println((int) (Math.pow(r, i - 1) * (x + D / (1 - r)) - D / (1 - r)));
        }
    }
}