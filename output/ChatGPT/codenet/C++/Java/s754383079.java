import java.util.Scanner;

public class s754383079 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String a = scanner.next();
        String b = scanner.next();
        int n = a.length();
        int m = b.length();
        int ans = Integer.MAX_VALUE;

        for (int i = 0; i + m - 1 < n; i++) {
            int sum = 0;
            for (int j = 0; j < m; j++) {
                if (a.charAt(i + j) != b.charAt(j)) {
                    sum++;
                }
            }
            ans = Math.min(ans, sum);
        }
        System.out.println(ans);
    }
}