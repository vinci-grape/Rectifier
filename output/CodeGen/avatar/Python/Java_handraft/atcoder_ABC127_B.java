import java.util.*;

public class atcoder_ABC127_B {
    public static void main(String[] args) {
        int r, D, x;
        Scanner scanner = new Scanner(System.in);
        String[] inputs = scanner.nextLine().split(" ");
        r = Integer.parseInt(inputs[0]);
        D = Integer.parseInt(inputs[1]);
        x = Integer.parseInt(inputs[2]);
        getMoneyAmount(r, D, x);
    }
    public static void getMoneyAmount(int r, int D, int x) {
        int[] res = new int[12];
        for (int i = 2; i < 12; i++) {
            res[i] = (int) (Math.pow(r, i - 1) * (x + (double) D / (1 - r)) - (double) D / (1 - r));
            System.out.println(res[i]);
        }
    }
}