import java.util.Scanner;

public class atcoder_ABC168_C {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        long a = in.nextLong();
        long b = in.nextLong();
        long h = in.nextLong();
        long m = in.nextLong();
        long C = in.nextLong();
        if (C > 180) {
            C = 360 - C;
        }
        double cosC = Math.cos(Math.toRadians(C));
        double sqrt = Math.sqrt(Math.pow(a, 2) + Math.pow(b, 2) - 2 * a * b * cosC);
        System.out.println(Math.round(sqrt));
    }
}