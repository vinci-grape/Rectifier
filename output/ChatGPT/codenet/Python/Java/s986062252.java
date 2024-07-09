import java.util.Scanner;

public class s986062252 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int m = scanner.nextInt();
        scanner.nextLine();
        String s = scanner.nextLine();
        String t = scanner.nextLine();
        int aa = gcd(n, m);
        int bb = lcm(n, m);
        int cc = aa / bb;
        for (int i = 0; i < aa; i++) {
            if (s.charAt(n / aa * i) != t.charAt(m / aa * i)) {
                System.out.println(-1);
                System.exit(0);
            }
        }
        System.out.println(bb);
    }

    public static int gcd(int a, int b) {
        if (a < b) return gcd(b, a);
        if (b == 0) return a;
        return gcd(b, a % b);
    }

    public static int lcm(int a, int b) {
        return a * b / gcd(a, b);
    }
}