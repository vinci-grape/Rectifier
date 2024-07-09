import java.util.Scanner;

public class s438435664 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int k = scanner.nextInt();
        long sum = 0;
        for (int b = 1; b <= n; b++) {
            int cnt = (n + 1) / b;
            int md = (n + 1) % b;
            sum += cnt * Math.max((b - k), 0) + Math.max((md - k), 0);
            if (k == 0) sum--;
        }
        System.out.println(sum);
    }
}