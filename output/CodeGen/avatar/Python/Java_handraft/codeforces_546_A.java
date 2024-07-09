import java.util.*;

public class codeforces_546_A {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int k = scanner.nextInt();
        int n = scanner.nextInt();
        int w = scanner.nextInt();
        System.out.println(findKthNumber(k, n, w));
    }
    public static int findKthNumber(int k, int n, int w) {
        if (1 <= k && w <= 1000) {
            int total = 0;
            for (int i = 1; i <= w; i++) {
                total += i * k;
            }
            if (total > n) {
                return total - n;
            } else {
                return 0;
            }
        }
        return 0;
    }
}