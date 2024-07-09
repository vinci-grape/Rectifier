import java.util.*;

public class atcoder_ABC127_B {
    public int getMoneyAmount(int r, int D, int x) {
        Scanner scanner = new Scanner(System.in);
        int[] res = new int[12];
        int i = 1;
        while (i < 12) {
            res[i] = (int) Math.pow(r, i - 1) * (x + D / (1 - r)) - D / (1 - r);
            i++;
        }
        return res[11];
    }
}