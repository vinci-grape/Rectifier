import java.util.*;

public class atcoder_ABC124_A {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int k = scanner.nextInt();
        int[] prices = new int[k];
        for (int i = 0; i < prices.length; i++) {
            if (i < k) {
                prices[i] = scanner.nextInt();
            } else {
                prices[i] = scanner.nextInt();
            }
        }
        System.out.println(maxProfit(k, prices));
    }
    public static int maxProfit(int k, int[] prices) {
        int a = 0, b = 0;
        int c = 0;
        for (int i = 0; i < prices.length; i++) {
            if (i < k) {
                a = prices[i];
            } else {
                b = prices[i];
            }
            c = Math.max(c, a - b);
            if (a >= b) {
                a--;
            } else {
                b--;
            }
        }
        return c;
    }
}