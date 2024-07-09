import java.util.Scanner;
public class codeforces_302_A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        int sa = 0;
        for (int i = 0; i < n; i++) {
            if (sc.next().equals("-")) {
                sa++;
            }
        }
        sa = Math.min(n - sa, sa);
        for (int i = 0; i < m; i++) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            b -= a;
            if (b % 2 == 1 && b <= sa * 2) {
                System.out.println("1");
            } else {
                System.out.println("0");
            }
        }
    }
}