import java.util.Scanner;

public class s968402497 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int tc = scanner.nextInt();
        int n = scanner.nextInt();
        int m = scanner.nextInt();
        if (n > m) {
            int temp = n;
            n = m;
            m = temp;
        }
        int fl = 0;
        for (int i = 1; i <= m; i++) {
            if (i * tc >= n && i * tc <= m) {
                System.out.println("OK");
                fl = 1;
                break;
            }
        }
        if (fl == 0) {
            System.out.println("NG");
        }
    }
}