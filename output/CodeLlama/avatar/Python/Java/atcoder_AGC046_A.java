import java.util.Scanner;
import java.lang.Math;
public class atcoder_AGC046_A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        System.out.println(360 / (int) Math.gcd(360, x));
    }
}