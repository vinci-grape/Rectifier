import java.util.Scanner;

public class codeforces_608_A {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int s = scanner.nextInt();
        int c = 0;

        for (int i = 0; i < n; i++) {
            int f = scanner.nextInt();
            int t = scanner.nextInt();
            int x = t - (s - f);
            if (x > c) {
                c = x;
            }
        }

        System.out.println(s + c);
    }
}