import java.util.*;

public class atcoder_ABC070_B {
    public static void main(String[] args) {
        int[] prices = new int[4];
        Scanner scanner = new Scanner(System.in);
        String[] input = scanner.nextLine().split(" ");
        for (int i = 0; i < 4; i++) {
            prices[i] = Integer.parseInt(input[i]);
        }
        System.out.println(maxProfit(prices));
    }
    public static int maxProfit(int[] prices) {
        
        if (prices[1] <= prices[2] || prices[3] <= prices[0]) {
            return 0;
        } else {
            Arrays.sort(prices);
            return prices[2] - prices[1];
        }
    }
}