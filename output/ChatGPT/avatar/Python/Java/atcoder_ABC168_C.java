import java.util.Scanner;
import java.lang.Math;

public class atcoder_ABC168_C {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int a, b, h, m;
        a = scanner.nextInt();
        b = scanner.nextInt();
        h = scanner.nextInt();
        m = scanner.nextInt();
        
        double C = Math.abs(360 / 60 * m - 360 / 12 * h - 360 / 12 / 60 * m);
        if (C > 180) {
            C = 360 - C;
        }
        double cosC = Math.cos(Math.toRadians(C));
        System.out.println(Math.sqrt(a * a + b * b - 2 * a * b * cosC));
    }
}