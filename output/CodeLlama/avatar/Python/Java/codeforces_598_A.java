import java.util.Scanner;

public class codeforces_598_A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            int s = (1 + n) * n / 2;
            int t = 1;
            while (t <= n) {
                s -= 2 * t;
                t *= 2;
            }
            System.out.println(s);
        }
    }
}