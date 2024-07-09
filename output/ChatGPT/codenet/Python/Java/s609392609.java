import java.util.Scanner;

public class s609392609 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] t = new int[n];
        for (int i = 0; i < n; i++) {
            t[i] = scanner.nextInt();
        }
        int m = scanner.nextInt();
        for (int i = 0; i < m; i++) {
            int p = scanner.nextInt();
            int x = scanner.nextInt();
            int s = 0;
            for (int j = 0; j < t.length; j++) {
                if (j == p - 1) {
                    s += x;
                } else {
                    s += t[j];
                }
            }
            System.out.println(s);
        }
    }
}