import java.util.Scanner;

public class atcoder_ABC168_C {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int a = in.nextInt();
        int b = in.nextInt();
        int h = in.nextInt();
        int m = in.nextInt();
        int C = in.nextInt();
        if (C > 180) {
            C = 360 - C;
        }
        double cosC = Math.cos(Math.toRadians(C));
        double sqrt = Math.sqrt(Math.pow(a, 2) + Math.pow(b, 2) - 2 * a * b * cosC);
        System.out.println(Math.round(sqrt));
    }
}