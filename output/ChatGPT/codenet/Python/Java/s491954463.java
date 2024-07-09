import java.util.*;

public class s491954463 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int m = scanner.nextInt();
        int[] a = new int[m];
        int[] b = new int[m];

        for (int i = 0; i < m; i++) {
            a[i] = scanner.nextInt();
            b[i] = scanner.nextInt();
        }

        for (int i = 1; i <= n; i++) {
            int count = 0;
            for (int j = 0; j < m; j++) {
                if (a[j] == i || b[j] == i) {
                    count++;
                }
            }
            System.out.println(count);
        }
    }
}