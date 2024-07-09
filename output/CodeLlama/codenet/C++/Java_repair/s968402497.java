import java.util.Scanner;

public class s968402497 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int tc = sc.nextInt();
        int n = sc.nextInt();
        int m = sc.nextInt();
        if (n > m) {
            int temp = n;
            n = m;
            m = temp;
        }
        for (int i = 1; i <= m; i++) {
            if (i * tc >= n && i * tc <= m) {
                System.out.println("OK");
                break;
            }
        }
        if (i > m) {
            System.out.println("NG");
        }
    }
}